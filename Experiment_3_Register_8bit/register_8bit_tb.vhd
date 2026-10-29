--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:51:08 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/Experiment_3_Register_8bit/register_8bit_tb.vhd
-- Project Name:  Experiment_3_Register_8bit
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_8bit
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

ENTITY register_8bit_tb IS
END register_8bit_tb;

ARCHITECTURE behavior OF register_8bit_tb IS

    -- Component Declaration for the Unit Under Test
    COMPONENT register_8bit
    PORT(
         clk      : IN  std_logic;
         reset    : IN  std_logic;
         enable   : IN  std_logic;
         data_in  : IN  std_logic_vector(7 downto 0);
         data_out : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;

    -- Inputs
    signal clk      : std_logic := '0';
    signal reset    : std_logic := '0';
    signal enable   : std_logic := '0';
    signal data_in  : std_logic_vector(7 downto 0)
                     := (others => '0');

    -- Output
    signal data_out : std_logic_vector(7 downto 0);

    -- Clock period
    constant clk_period : time := 10 ns;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: register_8bit PORT MAP (
          clk      => clk,
          reset    => reset,
          enable   => enable,
          data_in  => data_in,
          data_out => data_out
        );

    -- Clock generation
    clk_process : process
    begin
        clk <= '0';
        wait for clk_period/2;

        clk <= '1';
        wait for clk_period/2;
    end process;

    -- Stimulus process
    stim_proc: process
    begin

        -- Test 1: Reset the register
        reset   <= '1';
        enable  <= '0';
        data_in <= x"00";

        wait for clk_period * 2;

        assert data_out = x"00"
            report "Test 1 Failed: Reset"
            severity error;

        -- Test 2: Load A5
        reset   <= '0';
        enable  <= '1';
        data_in <= x"A5";

        wait for clk_period;

        assert data_out = x"A5"
            report "Test 2 Failed: Loading A5"
            severity error;

        -- Test 3: Load 3C
        data_in <= x"3C";

        wait for clk_period;

        assert data_out = x"3C"
            report "Test 3 Failed: Loading 3C"
            severity error;

        -- Test 4: Disable and hold previous data
        enable  <= '0';
        data_in <= x"F0";

        wait for clk_period;

        assert data_out = x"3C"
            report "Test 4 Failed: Data Hold"
            severity error;

        -- Test 5: Enable and load F0
        enable <= '1';

        wait for clk_period;

        assert data_out = x"F0"
            report "Test 5 Failed: Loading F0"
            severity error;

        -- Test 6: Reset while enabled
        reset <= '1';

        wait for clk_period;

        assert data_out = x"00"
            report "Test 6 Failed: Reset Priority"
            severity error;

        -- Test 7: Load data after reset
        reset   <= '0';
        enable  <= '1';
        data_in <= x"55";

        wait for clk_period;

        assert data_out = x"55"
            report "Test 7 Failed: Loading 55"
            severity error;

        -- Test 8: Disable and hold 55
        enable  <= '0';
        data_in <= x"AA";

        wait for clk_period;

        assert data_out = x"55"
            report "Test 8 Failed: Data Retention"
            severity error;

        report "All test cases passed successfully."
            severity note;

        wait;
    end process;

END behavior;