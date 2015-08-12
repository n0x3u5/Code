----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:11:27 07/25/2014 
-- Design Name: 
-- Module Name:    FULLADDER - Behavioral 
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

entity FULLADDER is
    Port ( a : in  STD_LOGIC_VECTOR(2 downto 0);
           sum : out  STD_LOGIC;
           carry : out  STD_LOGIC);
end FULLADDER;

architecture Behavioral of FULLADDER is

signal s1, c1, c2 : STD_LOGIC;

component halfadder is
	Port ( 

begin

	

end Behavioral;

