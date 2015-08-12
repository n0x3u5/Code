----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:42:53 07/25/2014 
-- Design Name: 
-- Module Name:    HALFADDER - Behavioral 
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

entity HALFADDER is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           s : out  STD_LOGIC;
           c : out  STD_LOGIC);
end HALFADDER;

architecture Behavioral of HALFADDER is

component xorgate_two is
	Port ( a : in STD_LOGIC;
			 b : in STD_LOGIC;
			 y : out STD_LOGIC);
end component;

component andgate is
	Port ( a : in STD_LOGIC;
			 b : in STD_LOGIC;
			 c : out STD_LOGIC);
end component;

begin

	x1 : xorgate_two port map (a,b,s);
	a1 : andgate port map (a,b,c);

end Behavioral;