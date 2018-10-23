`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:24 02/20/2018 
// Design Name: 
// Module Name:    debouncer 
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
module debouncer(button, clk, buttonout);
input button;
input clk;
output buttonout;

reg buttonout_reg = 0;

reg[15:0] counter;

always @ (posedge clk)
begin
	if (button == 0)
	begin
		counter <= 0;
		buttonout_reg <= 0;
	end
	else
	begin
		counter <= counter +1'b1;
		if (counter == 16'h8fff)
		begin
			buttonout_reg <= 1;
			counter <= 0;
		end
	end
end

assign buttonout = buttonout_reg;

endmodule
