----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:26:50 07/25/2014 
-- Design Name: 
-- Module Name:    NORANDGate - Behavioral 
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

entity NORANDGate is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           y0 : out  STD_LOGIC;
           y1 : out  STD_LOGIC);
end NORANDGate;

architecture Behavioral of NORANDGate is

signal x1, x2 : STD_LOGIC;

begin

	x1 <= a nor a;
	x2 <= b nor b;
	y0 <= x1 nor x2;
	y1 <= a and b;

end Behavioral;