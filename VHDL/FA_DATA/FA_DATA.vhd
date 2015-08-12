----------------------------------------------------------------------------------
-- Company:
-- Engineer:
--
-- Create Date:    14:23:34 08/01/2014
-- Design Name:
-- Module Name:    FA_DATA - Behavioral
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

entity FA_DATA is
    Port ( a : in  STD_LOGIC_VECTOR (2 downto 0);
           sum : out  STD_LOGIC;
           carry : out  STD_LOGIC);
end FA_DATA;

architecture Behavioral of FA_DATA is

begin

	sum <= a(0) xor a(1) xor a(2);
	carry <= (a(0) and a(1)) or (a(1) and a(2)) or (a(2) and a(0));

end Behavioral;
