----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:35:59 07/18/2014 
-- Design Name: 
-- Module Name:    function1 - Behavioral 
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

entity function1 is
    Port ( a : in  STD_LOGIC_VECTOR (2 DOWNTO 0);
           y : out  STD_LOGIC);
end function1;

architecture Behavioral of function1 is
	Signal x1, x2, x3, x4 : STD_LOGIC;

begin

	x1 <= a(0) and a(1);
	x2 <= a(1) and a(2);
	x3 <= a(2) and a(0);
	x4 <= x1 or x2;
	y <=  x4 or x3;

end Behavioral;

