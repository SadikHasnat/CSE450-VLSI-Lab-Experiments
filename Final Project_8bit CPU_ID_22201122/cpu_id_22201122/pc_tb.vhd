--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:15:01 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/cpu_id_22201122/pc_tb.vhd
-- Project Name:  cpu_id_22201122
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: pc
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

ENTITY pc_tb IS
END pc_tb;

ARCHITECTURE behavior OF pc_tb IS

    -- Component Declaration
    COMPONENT pc
    PORT(
        clk    : IN  std_logic;
        reset  : IN  std_logic;
        pc_out : OUT std_logic_vector(3 downto 0)
    );
    END COMPONENT;

    -- Inputs
    signal clk   : std_logic := '0';
    signal reset : std_logic := '0';

    -- Output
    signal pc_out : std_logic_vector(3 downto 0);

    -- Clock period
    constant clk_period : time := 10 ns;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: pc PORT MAP (
        clk    => clk,
        reset  => reset,
        pc_out => pc_out
    );

    -- Clock generation
    clk_process : process
    begin
        clk <= '0';
        wait for clk_period / 2;

        clk <= '1';
        wait for clk_period / 2;
    end process;

    -- Stimulus process
    stim_proc: process
    begin

        -- Test 1: Synchronous reset
        reset <= '1';

        wait until rising_edge(clk);
        wait for 1 ns;

        assert pc_out = "0000"
            report "FAIL: PC reset"
            severity failure;

        -- Release reset
        reset <= '0';

        -- Test 2: Check PC counting from 1 to 15
        for i in 1 to 15 loop

            wait until rising_edge(clk);
            wait for 1 ns;

            assert pc_out = std_logic_vector(to_unsigned(i, 4))
                report "FAIL: PC counting"
                severity failure;

        end loop;

        -- Test 3: Check 4-bit overflow (15 -> 0)
        wait until rising_edge(clk);
        wait for 1 ns;

        assert pc_out = "0000"
            report "FAIL: PC overflow"
            severity failure;

        -- Test 4: Reset while PC is running
        reset <= '1';

        wait until rising_edge(clk);
        wait for 1 ns;

        assert pc_out = "0000"
            report "FAIL: Reset during counting"
            severity failure;

        -- Test 5: Count again after reset
        reset <= '0';

        wait until rising_edge(clk);
        wait for 1 ns;

        assert pc_out = "0001"
            report "FAIL: Counting after reset"
            severity failure;

        -- All tests passed
        report "PASS: All PC tests completed."
            severity note;

        wait;
    end process;

END behavior;
