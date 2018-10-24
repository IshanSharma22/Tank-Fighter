`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:41:50 03/01/2018 
// Design Name: 
// Module Name:    top 
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
module top(clk, btnR, btnL, red, green, blue, hsync, vsync);
	input clk;
	input btnR;
	input btnL;
	output [2:0] red;
	output [2:0] green;
	output [1:0] blue;
	output wire hsync;
	output wire vsync;
	
	wire clk5;
	wire clk25;
	clk_divider clk_divider(clk, clk5, clk25);
	
	wire btnR_d;
	wire btnL_d;
	debouncer debouncer1(btnR, clk, btnR_d);
	debouncer debouncer2(btnL, clk, btnL_d);
	
	wire [9:0] player_x;
	wire [9:0] player_y;
	player player(clk5, btnR_d, btnL_d, player_x, player_y);
	
	wire [2:0] VGAred;
	wire [2:0] VGAgreen;
	wire [1:0] VGAblue;
	VGA VGA(clk25, player_x, player_y, VGAred, VGAgreen, VGAblue, hsync, vsync);

	assign red = VGAred; assign green = VGAgreen; assign blue = VGAblue;
endmodule
