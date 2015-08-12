----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:50:57 07/25/2014 
-- Design Name: 
-- Module Name:    NORNOTGate - Behavioral 
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

entity NORNOTGate is
    Port ( a : in  STD_LOGIC;
           y0 : out  STD_LOGIC;
           y1 : out  STD_LOGIC);
end NORNOTGate;

architecture Behavioral of NORNOTGate is

begin

	y0 <= a nor a;
	y1 <=not a;

end Behavioral;

