----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:34:16 08/01/2014 
-- Design Name: 
-- Module Name:    FA_4BIT - Behavioral 
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

entity FA_4BIT is
    Port ( x : in  STD_LOGIC_VECTOR (3 downto 0);
           y : in  STD_LOGIC_VECTOR (3 downto 0);
           s : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end FA_4BIT;

architecture Behavioral of FA_4BIT is

component FA_DATA is
	Port ( a : in STD_LOGIC_VECTOR (2 downto 0);
			 sum : out STD_LOGIC;
			 carry : out STD_LOGIC);
end component;

signal c1, c2, c3 : STD_LOGIC;

begin

	FA0 : FA_DATA port map (a(2) => x(0), a(1) => y(0), a(0) => '0', sum => s(0), carry => c1);
	FA1 : FA_DATA port map (a(2) => x(1), a(1) => y(1), a(0) => c1, sum => s(1), carry => c2);
	FA2 : FA_DATA port map (a(2) => x(2), a(1) => y(2), a(0) => c2, sum => s(2), carry => c3);
	FA3 : FA_DATA port map (a(2) => x(3), a(1) => y(3), a(0) => c3, sum => s(3), carry => cout);

end Behavioral;