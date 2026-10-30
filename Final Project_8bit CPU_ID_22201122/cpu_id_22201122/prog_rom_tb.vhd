--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:22:30 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/cpu_id_22201122/prog_rom_tb.vhd
-- Project Name:  cpu_id_22201122
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: prog_rom
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
USE ieee.numeric_std.ALL;

ENTITY prog_rom_tb IS
END prog_rom_tb;

ARCHITECTURE behavior OF prog_rom_tb IS

    -- Component Declaration
    COMPONENT prog_rom
    PORT(
        addr  : IN  std_logic_vector(3 downto 0);
        instr : OUT std_logic_vector(11 downto 0)
    );
    END COMPONENT;

    -- Input
    signal addr : std_logic_vector(3 downto 0) := (others => '0');

    -- Output
    signal instr : std_logic_vector(11 downto 0);

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: prog_rom PORT MAP (
        addr  => addr,
        instr => instr
    );

    -- Stimulus Process
    stim_proc: process
        variable i : integer;
    begin

        -- Test 1: Address 0 - LDI 0x55
        addr <= "0000";
        wait for 10 ns;

        assert instr = x"155"
            report "FAIL: ROM address 0 - LDI 0x55"
            severity failure;

        -- Test 2: Address 1 - XOR 0xFF
        addr <= "0001";
        wait for 10 ns;

        assert instr = x"6FF"
            report "FAIL: ROM address 1 - XOR 0xFF"
            severity failure;

        -- Test 3: Address 2 - NOT
        addr <= "0010";
        wait for 10 ns;

        assert instr = x"700"
            report "FAIL: ROM address 2 - NOT"
            severity failure;

        -- Test 4: Address 3 - SHL
        addr <= "0011";
        wait for 10 ns;

        assert instr = x"800"
            report "FAIL: ROM address 3 - SHL"
            severity failure;

        -- Test 5: Address 4 - ADD 0x56
        addr <= "0100";
        wait for 10 ns;

        assert instr = x"256"
            report "FAIL: ROM address 4 - ADD 0x56"
            severity failure;

        -- Test 6: Address 5 - XOR 0x81
        addr <= "0101";
        wait for 10 ns;

        assert instr = x"681"
            report "FAIL: ROM address 5 - XOR 0x81"
            severity failure;

        -- Test 7: Address 6 - SHL
        addr <= "0110";
        wait for 10 ns;

        assert instr = x"800"
            report "FAIL: ROM address 6 - SHL"
            severity failure;

        -- Test 8: Unused addresses 7 to 15 must contain NOP
        for i in 7 to 15 loop

            addr <= std_logic_vector(to_unsigned(i, 4));
            wait for 10 ns;

            assert instr = x"000"
                report "FAIL: Unused ROM address must be NOP"
                severity failure;

        end loop;

        -- All tests passed
        report "PASS: All Program ROM tests completed."
            severity note;

        wait;
    end process;

END behavior;
