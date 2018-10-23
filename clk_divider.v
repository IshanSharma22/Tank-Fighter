`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:41 03/01/2018 
// Design Name: 
// Module Name:    clk_divider 
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
module clk_divider(clk, clk5, clk25);
	input clk;
	output reg clk5 = 0;
	output reg clk25 = 0;
	
	reg [25:0] counter5 = 0;
	reg [5:0] counter25 = 0;

	always @(posedge clk)
	begin
		if (counter5 == 5000000)
		begin
			clk5 = ~clk5;
			counter5 = 0;
		end
		else
			counter5 = counter5 + 1;
		if (counter25 == 1)
		begin
			clk25 = ~clk25;
			counter25 = 0;
		end
		else
			counter25 = counter25 + 1;
	end

endmodule
