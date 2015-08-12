----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:07:25 07/18/2014 
-- Design Name: 
-- Module Name:    xorgate_four - Behavioral 
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

entity xorgate_four is
    Port ( a : in  STD_LOGIC_VECTOR (3 DOWNTO 0);
           y : out  STD_LOGIC);
end xorgate_four;

architecture Behavioral of xorgate_four is

begin

	y <= a(0) xor a(1) xor a(2) xor a(3);

end Behavioral;

