--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:53:10 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/cpu_id_22201122/alu_tb.vhd
-- Project Name:  cpu_id_22201122
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
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

ENTITY alu_tb IS
END alu_tb;

ARCHITECTURE behavior OF alu_tb IS

    -- Component Declaration for the Unit Under Test
    COMPONENT alu
    PORT(
        a      : IN  std_logic_vector(7 downto 0);
        b      : IN  std_logic_vector(7 downto 0);
        sel    : IN  std_logic_vector(2 downto 0);
        result : OUT std_logic_vector(7 downto 0)
    );
    END COMPONENT;

    -- Inputs
    signal a   : std_logic_vector(7 downto 0) := (others => '0');
    signal b   : std_logic_vector(7 downto 0) := (others => '0');
    signal sel : std_logic_vector(2 downto 0) := (others => '0');

    -- Output
    signal result : std_logic_vector(7 downto 0);

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: alu PORT MAP (
        a      => a,
        b      => b,
        sel    => sel,
        result => result
    );

    -- Stimulus Process
    stim_proc: process
    begin

        -- Test 1: LDI (result = b)
        a <= x"00";
        b <= x"55";
        sel <= "000";
        wait for 10 ns;

        assert result = x"55"
            report "FAIL: LDI"
            severity failure;

        -- Test 2: ADD (0x3C + 0x0F = 0x4B)
        a <= x"3C";
        b <= x"0F";
        sel <= "001";
        wait for 10 ns;

        assert result = x"4B"
            report "FAIL: ADD normal"
            severity failure;

        -- Test 3: ADD (0xAA + 0x56 = 0x100)
        -- 8-bit result = 0x00; carry discarded
        a <= x"AA";
        b <= x"56";
        sel <= "001";
        wait for 10 ns;

        assert result = x"00"
            report "FAIL: ADD carry discard"
            severity failure;

        -- Test 4: XOR (0x55 XOR 0xFF = 0xAA)
        a <= x"55";
        b <= x"FF";
        sel <= "010";
        wait for 10 ns;

        assert result = x"AA"
            report "FAIL: XOR"
            severity failure;

        -- Test 5: NOT (NOT 0xAA = 0x55)
        a <= x"AA";
        b <= x"00";
        sel <= "011";
        wait for 10 ns;

        assert result = x"55"
            report "FAIL: NOT"
            severity failure;

        -- Test 6: NOT (NOT 0x00 = 0xFF)
        a <= x"00";
        sel <= "011";
        wait for 10 ns;

        assert result = x"FF"
            report "FAIL: NOT zero"
            severity failure;

        -- Test 7: SHL (0x55 shifted left = 0xAA)
        a <= x"55";
        b <= x"00";
        sel <= "100";
        wait for 10 ns;

        assert result = x"AA"
            report "FAIL: SHL"
            severity failure;

        -- Test 8: SHL (0xC1 shifted left = 0x82)
        a <= x"C1";
        sel <= "100";
        wait for 10 ns;

        assert result = x"82"
            report "FAIL: SHL overflow"
            severity failure;

        -- Test 9: Unsupported operation
        -- When sel = 101, result should equal a
        a <= x"3C";
        b <= x"FF";
        sel <= "101";
        wait for 10 ns;

        assert result = x"3C"
            report "FAIL: Default operation"
            severity failure;

        -- All tests passed
        report "PASS: All ALU tests completed."
            severity note;

        wait;
    end process;

END behavior;