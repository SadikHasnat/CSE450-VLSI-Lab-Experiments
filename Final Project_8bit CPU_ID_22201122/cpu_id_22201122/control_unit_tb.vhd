--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:10:57 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/cpu_id_22201122/control_unit_tb.vhd
-- Project Name:  cpu_id_22201122
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: control_unit
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

ENTITY control_unit_tb IS
END control_unit_tb;

ARCHITECTURE behavior OF control_unit_tb IS

    -- Component Declaration for the Unit Under Test
    COMPONENT control_unit
    PORT(
        opcode  : IN  std_logic_vector(3 downto 0);
        alu_sel : OUT std_logic_vector(2 downto 0);
        acc_en  : OUT std_logic;
        z_en    : OUT std_logic
    );
    END COMPONENT;

    -- Input
    signal opcode : std_logic_vector(3 downto 0) := (others => '0');

    -- Outputs
    signal alu_sel : std_logic_vector(2 downto 0);
    signal acc_en  : std_logic;
    signal z_en    : std_logic;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: control_unit PORT MAP (
        opcode  => opcode,
        alu_sel => alu_sel,
        acc_en  => acc_en,
        z_en    => z_en
    );

    -- Stimulus process
    stim_proc: process
    begin

        -- Test 1: NOP (0000)
        opcode <= "0000";
        wait for 10 ns;

        assert (alu_sel = "000") and
               (acc_en = '0') and
               (z_en = '0')
            report "FAIL: NOP opcode"
            severity failure;

        -- Test 2: LDI (0001)
        opcode <= "0001";
        wait for 10 ns;

        assert (alu_sel = "000") and
               (acc_en = '1') and
               (z_en = '1')
            report "FAIL: LDI opcode"
            severity failure;

        -- Test 3: ADD (0010)
        opcode <= "0010";
        wait for 10 ns;

        assert (alu_sel = "001") and
               (acc_en = '1') and
               (z_en = '1')
            report "FAIL: ADD opcode"
            severity failure;

        -- Test 4: XOR (0110)
        opcode <= "0110";
        wait for 10 ns;

        assert (alu_sel = "010") and
               (acc_en = '1') and
               (z_en = '1')
            report "FAIL: XOR opcode"
            severity failure;

        -- Test 5: NOT (0111)
        opcode <= "0111";
        wait for 10 ns;

        assert (alu_sel = "011") and
               (acc_en = '1') and
               (z_en = '1')
            report "FAIL: NOT opcode"
            severity failure;

        -- Test 6: SHL (1000)
        opcode <= "1000";
        wait for 10 ns;

        assert (alu_sel = "100") and
               (acc_en = '1') and
               (z_en = '1')
            report "FAIL: SHL opcode"
            severity failure;

        -- Test 7: Unsupported opcode (0011)
        opcode <= "0011";
        wait for 10 ns;

        assert (alu_sel = "000") and
               (acc_en = '0') and
               (z_en = '0')
            report "FAIL: Unsupported opcode 0011"
            severity failure;

        -- Test 8: Unsupported opcode (1111)
        opcode <= "1111";
        wait for 10 ns;

        assert (alu_sel = "000") and
               (acc_en = '0') and
               (z_en = '0')
            report "FAIL: Unsupported opcode 1111"
            severity failure;

        -- All tests passed
        report "PASS: All Control Unit tests completed."
            severity note;

        wait;
    end process;

END behavior;