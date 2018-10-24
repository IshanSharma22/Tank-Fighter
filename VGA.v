`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:37 02/27/2018 
// Design Name: 
// Module Name:    VGA 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module VGA(clk, player_x, player_y, red_out, green_out, blue_out, hsync, vsync);

input clk;
input [9:0] player_x;
input [9:0] player_y;
output [2:0] red_out;
output [2:0] green_out;
output [1:0] blue_out;
output wire hsync;
output wire vsync;

reg [2:0] red;
reg [2:0] green;
reg [1:0] blue;

parameter Hscreen = 800;
parameter Vscreen = 640;


// video structure constants
parameter hpixels = 800;// horizontal pixels per line
parameter vlines = 521; // vertical lines per frame
parameter hpulse = 96; 	// hsync pulse length
parameter vpulse = 2; 	// vsync pulse length
parameter hbp = 144; 	// end of horizontal back porch
parameter hfp = 784; 	// beginning of horizontal front porch
parameter vbp = 31; 		// end of vertical back porch
parameter vfp = 511; 	// beginning of vertical front porch
// active horizontal video is therefore: 784 - 144 = 640
// active vertical video is therefore: 511 - 31 = 480

// ****** Vertical Length is aproximately 511
// ****** Horizontal Length is aproximately 780

// registers for storing the horizontal & vertical counters
reg [9:0] hc;
reg [9:0] vc;

reg [9:0] sq_fig [9:0];


// Horizontal & vertical counters --
// this is how we keep track of where we are on the screen.
// ------------------------
// Sequential "always block", which is a block that is
// only triggered on signal transitions or "edges".
// posedge = rising edge  &  negedge = falling edge
// Assignment statements can only be used on type "reg" and need to be of the "non-blocking" type: <=
always @(posedge clk)
begin
	// keep counting until the end of the line
	if (hc < hpixels - 1)
		hc <= hc + 1;
	else

	begin
		hc <= 0;
		if (vc < vlines - 1)
			vc <= vc + 1;
		else
			vc <= 0;
	end
end

// generate sync pulses (active low)
// ----------------
// "assign" statements are a quick way to
// give values to variables of type: wire
assign hsync = (hc < hpulse) ? 0:1;
assign vsync = (vc < vpulse) ? 0:1;

always @(*)
begin
	 sq_fig[0][9:0] = 10'b0000000000;
	 sq_fig[1][9:0] = 10'b0111111110;
	 sq_fig[2][9:0] = 10'b0111111110;
	 sq_fig[3][9:0] = 10'b0111111110;
	 sq_fig[4][9:0] = 10'b0111111110;
	 sq_fig[5][9:0] = 10'b0111111110;
	 sq_fig[6][9:0] = 10'b0111111110;
	 sq_fig[7][9:0] = 10'b0111111110;
	 sq_fig[8][9:0] = 10'b0111111110;
	 sq_fig[9][9:0] = 10'b0000000000;
	// first check if we're within vertical active video range
	//if (vc >= vbp && vc < vfp)
	//begin
	if (hc >= player_x+hbp && hc < player_x+hbp+10 && vc >= player_y+vbp && vc < player_y+vbp+10)
	begin
		if (sq_fig[hc - player_x][vc - player_y] == 1)
		begin
			red = 3'b111;
			green = 3'b111;
			blue = 2'b11;
		end 
		else;
	end
	else
	begin
		if ( hc >= (hbp+280) && hc < (hbp+360) )
		begin
			if ( vc > (vbp+100) && vc < (vbp+400) )
			begin
				red = 3'b111;
				green = 3'b000;
				blue = 2'b00;
			end
			else
			begin
				red = 3'b000;
				green = 3'b000;
				blue = 2'b11;
			end
		end
		else
		begin
			red = 3'b000;		//Blue Part
			green = 3'b111;
			blue = 2'b00;
		end
	end
end

assign red_out = red;
assign green_out = green;
assign blue_out = blue;
endmodule
