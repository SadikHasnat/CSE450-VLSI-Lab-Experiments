--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:51:52 10/01/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/Experiment_2_Full_Adder_8bit/Experiment_2_Full_Adder_8bit_Test_Case.vhd
-- Project Name:  Experiment_2_Full_Adder_8bit
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Experiment_2_Full_Adder_8bit
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

ENTITY Experiment_2_Full_Adder_8bit_Test_Case IS
END Experiment_2_Full_Adder_8bit_Test_Case;

ARCHITECTURE behavior OF Experiment_2_Full_Adder_8bit_Test_Case IS

    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT Experiment_2_Full_Adder_8bit
    PORT(
         A    : IN  std_logic_vector(7 downto 0);
         B    : IN  std_logic_vector(7 downto 0);
         Cin  : IN  std_logic;
         Sum  : OUT std_logic_vector(7 downto 0);
         Cout : OUT std_logic
        );
    END COMPONENT;

    -- Inputs
    signal A   : std_logic_vector(7 downto 0) := (others => '0');
    signal B   : std_logic_vector(7 downto 0) := (others => '0');
    signal Cin : std_logic := '0';

    -- Outputs
    signal Sum  : std_logic_vector(7 downto 0);
    signal Cout : std_logic;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: Experiment_2_Full_Adder_8bit PORT MAP (
          A    => A,
          B    => B,
          Cin  => Cin,
          Sum  => Sum,
          Cout => Cout
        );

    -- Stimulus process
    stim_proc: process
    begin

        -- Test 1
        A <= "00000000";
        B <= "00000000";
        Cin <= '0';
        wait for 100 ns;

        -- Test 2
        A <= "00000001";
        B <= "00000001";
        Cin <= '0';
        wait for 100 ns;

        -- Test 3
        A <= "00000101";
        B <= "00000011";
        Cin <= '0';
        wait for 100 ns;

        -- Test 4
        A <= "00001111";
        B <= "00000001";
        Cin <= '0';
        wait for 100 ns;

        -- Test 5
        A <= "00001111";
        B <= "00000001";
        Cin <= '1';
        wait for 100 ns;

        -- Test 6
        A <= "11111111";
        B <= "00000001";
        Cin <= '0';
        wait for 100 ns;

        -- Test 7
        A <= "10101010";
        B <= "01010101";
        Cin <= '0';
        wait for 100 ns;

        -- Test 8
        A <= "11111111";
        B <= "11111111";
        Cin <= '0';
        wait for 100 ns;

        -- Test 9
        A <= "11111111";
        B <= "11111111";
        Cin <= '1';
        wait for 100 ns;

        -- Stop simulation
        wait;

    end process;

END behavior;