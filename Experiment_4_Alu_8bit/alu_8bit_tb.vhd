--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:07:33 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/Experiment_4_Alu_8bit/alu_8bit_tb.vhd
-- Project Name:  Experiment_4_Alu_8bit
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu_8bit
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

ENTITY alu_8bit_tb IS
END alu_8bit_tb;

ARCHITECTURE behavior OF alu_8bit_tb IS

    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT alu_8bit
    PORT(
         A         : IN  std_logic_vector(7 downto 0);
         B         : IN  std_logic_vector(7 downto 0);
         sel       : IN  std_logic_vector(2 downto 0);
         result    : OUT std_logic_vector(7 downto 0);
         carry_out : OUT std_logic
        );
    END COMPONENT;

    -- Inputs
    signal A   : std_logic_vector(7 downto 0) := (others => '0');
    signal B   : std_logic_vector(7 downto 0) := (others => '0');
    signal sel : std_logic_vector(2 downto 0) := (others => '0');

    -- Outputs
    signal result    : std_logic_vector(7 downto 0);
    signal carry_out : std_logic;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: alu_8bit PORT MAP (
          A         => A,
          B         => B,
          sel       => sel,
          result    => result,
          carry_out => carry_out
        );

    -- Stimulus process
    stim_proc: process
    begin

        -- Test 1: Addition 0F + 03 = 12
        A   <= x"0F";
        B   <= x"03";
        sel <= "000";
        wait for 10 ns;

        assert result = x"12" and carry_out = '0'
            report "Test 1 Failed: Addition"
            severity error;

        -- Test 2: Addition FF + 01 = 100
        A   <= x"FF";
        B   <= x"01";
        sel <= "000";
        wait for 10 ns;

        assert result = x"00" and carry_out = '1'
            report "Test 2 Failed: Addition Carry"
            severity error;

        -- Test 3: Subtraction 09 - 04 = 05
        A   <= x"09";
        B   <= x"04";
        sel <= "001";
        wait for 10 ns;

        assert result = x"05"
            report "Test 3 Failed: Subtraction"
            severity error;

        -- Test 4: AND F0 AND 0F = 00
        A   <= x"F0";
        B   <= x"0F";
        sel <= "010";
        wait for 10 ns;

        assert result = x"00"
            report "Test 4 Failed: AND"
            severity error;

        -- Test 5: OR F0 OR 0F = FF
        A   <= x"F0";
        B   <= x"0F";
        sel <= "011";
        wait for 10 ns;

        assert result = x"FF"
            report "Test 5 Failed: OR"
            severity error;

        -- Test 6: XOR AA XOR 0F = A5
        A   <= x"AA";
        B   <= x"0F";
        sel <= "100";
        wait for 10 ns;

        assert result = x"A5"
            report "Test 6 Failed: XOR"
            severity error;

        -- Test 7: NOT 55 = AA
        A   <= x"55";
        B   <= x"00";
        sel <= "101";
        wait for 10 ns;

        assert result = x"AA"
            report "Test 7 Failed: NOT"
            severity error;

        -- Test 8: Left Shift 81 = 02
        A   <= x"81";
        B   <= x"00";
        sel <= "110";
        wait for 10 ns;

        assert result = x"02"
            report "Test 8 Failed: Left Shift"
            severity error;

        -- Test 9: Right Shift 81 = 40
        A   <= x"81";
        B   <= x"00";
        sel <= "111";
        wait for 10 ns;

        assert result = x"40"
            report "Test 9 Failed: Right Shift"
            severity error;

        -- All tests completed
        assert false
            report "All ALU test cases passed."
            severity note;

        wait;

    end process;

END behavior;