--------------------------------------------------------------------------------
-- Copyright (c) 1995-2003 Xilinx, Inc.
-- All Right Reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 8.1i
--  \   \         Application : ISE
--  /   /         Filename : function1_tb.vhw
-- /___/   /\     Timestamp : Fri Jul 18 15:44:20 2014
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: 
--Design Name: function1_tb
--Device: Xilinx
--

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE STD.TEXTIO.ALL;

ENTITY function1_tb IS
END function1_tb;

ARCHITECTURE testbench_arch OF function1_tb IS
    FILE RESULTS: TEXT OPEN WRITE_MODE IS "results.txt";

    COMPONENT function1
        PORT (
            a : In std_logic_vector (2 DownTo 0);
            y : Out std_logic
        );
    END COMPONENT;

    SIGNAL a : std_logic_vector (2 DownTo 0) := "000";
    SIGNAL y : std_logic := '0';

    SHARED VARIABLE TX_ERROR : INTEGER := 0;
    SHARED VARIABLE TX_OUT : LINE;

    BEGIN
        UUT : function1
        PORT MAP (
            a => a,
            y => y
        );

        PROCESS
            PROCEDURE CHECK_y(
                next_y : std_logic;
                TX_TIME : INTEGER
            ) IS
                VARIABLE TX_STR : String(1 to 4096);
                VARIABLE TX_LOC : LINE;
                BEGIN
                IF (y /= next_y) THEN
                    STD.TEXTIO.write(TX_LOC, string'("Error at time="));
                    STD.TEXTIO.write(TX_LOC, TX_TIME);
                    STD.TEXTIO.write(TX_LOC, string'("ns y="));
                    IEEE.STD_LOGIC_TEXTIO.write(TX_LOC, y);
                    STD.TEXTIO.write(TX_LOC, string'(", Expected = "));
                    IEEE.STD_LOGIC_TEXTIO.write(TX_LOC, next_y);
                    STD.TEXTIO.write(TX_LOC, string'(" "));
                    TX_STR(TX_LOC.all'range) := TX_LOC.all;
                    STD.TEXTIO.writeline(RESULTS, TX_LOC);
                    STD.TEXTIO.Deallocate(TX_LOC);
                    ASSERT (FALSE) REPORT TX_STR SEVERITY ERROR;
                    TX_ERROR := TX_ERROR + 1;
                END IF;
            END;
            BEGIN
                -- -------------  Current Time:  100ns
                WAIT FOR 100 ns;
                a <= "001";
                -- -------------------------------------
                -- -------------  Current Time:  200ns
                WAIT FOR 100 ns;
                a <= "010";
                -- -------------------------------------
                -- -------------  Current Time:  300ns
                WAIT FOR 100 ns;
                a <= "011";
                -- -------------------------------------
                -- -------------  Current Time:  350ns
                WAIT FOR 50 ns;
                CHECK_y('1', 350);
                -- -------------------------------------
                -- -------------  Current Time:  400ns
                WAIT FOR 50 ns;
                a <= "100";
                -- -------------------------------------
                -- -------------  Current Time:  450ns
                WAIT FOR 50 ns;
                CHECK_y('0', 450);
                -- -------------------------------------
                -- -------------  Current Time:  500ns
                WAIT FOR 50 ns;
                a <= "101";
                -- -------------------------------------
                -- -------------  Current Time:  550ns
                WAIT FOR 50 ns;
                CHECK_y('1', 550);
                -- -------------------------------------
                -- -------------  Current Time:  600ns
                WAIT FOR 50 ns;
                a <= "110";
                -- -------------------------------------
                -- -------------  Current Time:  700ns
                WAIT FOR 100 ns;
                a <= "111";
                WAIT FOR 300 ns;

                IF (TX_ERROR = 0) THEN
                    STD.TEXTIO.write(TX_OUT, string'("No errors or warnings"));
                    STD.TEXTIO.writeline(RESULTS, TX_OUT);
                    ASSERT (FALSE) REPORT
                      "Simulation successful (not a failure).  No problems detected."
                      SEVERITY FAILURE;
                ELSE
                    STD.TEXTIO.write(TX_OUT, TX_ERROR);
                    STD.TEXTIO.write(TX_OUT,
                        string'(" errors found in simulation"));
                    STD.TEXTIO.writeline(RESULTS, TX_OUT);
                    ASSERT (FALSE) REPORT "Errors found during simulation"
                         SEVERITY FAILURE;
                END IF;
            END PROCESS;

    END testbench_arch;

