----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:02:39 07/25/2014 
-- Design Name: 
-- Module Name:    NANDNOTGate - Behavioral 
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

entity NANDNOTGate is
    Port ( a : in  STD_LOGIC;
           y0 : out  STD_LOGIC;
           y1 : out  STD_LOGIC);
end NANDNOTGate;

architecture Behavioral of NANDNOTGate is

begin

	y0 <= a nand a;
	y1 <= not a;

end Behavioral;

