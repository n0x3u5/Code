----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:58:16 07/25/2014 
-- Design Name: 
-- Module Name:    NANDORGate - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity NANDORGate is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           y0 : out  STD_LOGIC;
           y1 : out  STD_LOGIC);
end NANDORGate;

architecture Behavioral of NANDORGate is

signal x1, x2 : STD_LOGIC;

begin

	x1 <= a nand a;
	x2 <= b nand b;
	y0 <= x1 nand x2;
	y1 <= a or b;

end Behavioral;

