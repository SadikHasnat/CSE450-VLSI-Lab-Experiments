--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:26:37 10/01/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/Experiment_1_Full_Adder/Experiment_1_Full_Adder_Test_Case.vhd
-- Project Name:  Experiment_1_Full_Adder
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Experiment_1_Full_Adder
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY Experiment_1_Full_Adder_Test_Case IS
END Experiment_1_Full_Adder_Test_Case;

ARCHITECTURE behavior OF Experiment_1_Full_Adder_Test_Case IS

    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT Experiment_1_Full_Adder
    PORT(
         A    : IN  std_logic;
         B    : IN  std_logic;
         Cin  : IN  std_logic;
         Sum  : OUT std_logic;
         Cout : OUT std_logic
        );
    END COMPONENT;

    -- Inputs
    signal A   : std_logic := '0';
    signal B   : std_logic := '0';
    signal Cin : std_logic := '0';

    -- Outputs
    signal Sum  : std_logic;
    signal Cout : std_logic;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: Experiment_1_Full_Adder PORT MAP (
          A    => A,
          B    => B,
          Cin  => Cin,
          Sum  => Sum,
          Cout => Cout
        );

    -- Stimulus process
    stim_proc: process
    begin

        -- Test 1: 000
        A <= '0';
        B <= '0';
        Cin <= '0';
        wait for 70 ns;

        -- Test 2: 001
        A <= '0';
        B <= '0';
        Cin <= '1';
        wait for 70 ns;

        -- Test 3: 010
        A <= '0';
        B <= '1';
        Cin <= '0';
        wait for 70 ns;

        -- Test 4: 011
        A <= '0';
        B <= '1';
        Cin <= '1';
        wait for 70 ns;

        -- Test 5: 100
        A <= '1';
        B <= '0';
        Cin <= '0';
        wait for 70 ns;

        -- Test 6: 101
        A <= '1';
        B <= '0';
        Cin <= '1';
        wait for 70 ns;

        -- Test 7: 110
        A <= '1';
        B <= '1';
        Cin <= '0';
        wait for 70 ns;

        -- Test 8: 111
        A <= '1';
        B <= '1';
        Cin <= '1';
        wait for 70 ns;

        -- Stop simulation
        wait;

    end process;

END behavior;