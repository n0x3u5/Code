----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:55:03 07/25/2014 
-- Design Name: 
-- Module Name:    NANDANDGate - Behavioral 
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

entity NANDANDGate is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           y0 : out  STD_LOGIC;
           y1 : out  STD_LOGIC);
end NANDANDGate;

architecture Behavioral of NANDANDGate is

signal x : STD_LOGIC;

begin

	x <= a nand b;
	y0 <= x nand x;
	y1 <= a and b;

end Behavioral;

