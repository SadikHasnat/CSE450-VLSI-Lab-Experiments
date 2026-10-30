--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:45:09 10/29/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/cpu_id_22201122/acc_z_tb.vhd
-- Project Name:  cpu_id_22201122
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: acc_z
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

ENTITY acc_z_tb IS
END acc_z_tb;

ARCHITECTURE behavior OF acc_z_tb IS

    -- Component Declaration
    COMPONENT acc_z
    PORT(
        clk    : IN  std_logic;
        reset  : IN  std_logic;
        acc_en : IN  std_logic;
        z_en   : IN  std_logic;
        d      : IN  std_logic_vector(7 downto 0);
        q      : OUT std_logic_vector(7 downto 0);
        z      : OUT std_logic
    );
    END COMPONENT;

    -- Inputs
    signal clk    : std_logic := '0';
    signal reset  : std_logic := '0';
    signal acc_en : std_logic := '0';
    signal z_en   : std_logic := '0';
    signal d      : std_logic_vector(7 downto 0) := (others => '0');

    -- Outputs
    signal q : std_logic_vector(7 downto 0);
    signal z : std_logic;

    -- Clock period
    constant clk_period : time := 10 ns;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: acc_z PORT MAP (
        clk    => clk,
        reset  => reset,
        acc_en => acc_en,
        z_en   => z_en,
        d      => d,
        q      => q,
        z      => z
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

        -- Test 1: Reset
        reset  <= '1';
        acc_en <= '0';
        z_en   <= '0';
        d      <= x"AA";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"00" and z = '1'
            report "FAIL: Reset test"
            severity failure;

        -- Release reset
        reset <= '0';

        -- Test 2: Load 0x55
        acc_en <= '1';
        z_en   <= '1';
        d      <= x"55";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"55" and z = '0'
            report "FAIL: Load 0x55"
            severity failure;

        -- Test 3: Hold register values
        acc_en <= '0';
        z_en   <= '0';
        d      <= x"AA";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"55" and z = '0'
            report "FAIL: Register hold"
            severity failure;

        -- Test 4: Load zero
        acc_en <= '1';
        z_en   <= '1';
        d      <= x"00";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"00" and z = '1'
            report "FAIL: Load zero"
            severity failure;

        -- Test 5: Load 0xAA
        d <= x"AA";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"AA" and z = '0'
            report "FAIL: Load 0xAA"
            severity failure;

        -- Test 6: Disable ACC, enable Z
        acc_en <= '0';
        z_en   <= '1';
        d      <= x"00";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"AA" and z = '1'
            report "FAIL: Independent enable test"
            severity failure;

        -- Test 7: Reset priority
        reset  <= '1';
        acc_en <= '1';
        z_en   <= '1';
        d      <= x"FF";

        wait until rising_edge(clk);
        wait for 1 ns;

        assert q = x"00" and z = '1'
            report "FAIL: Reset priority"
            severity failure;

        -- All tests passed
        report "PASS: All ACC and Z tests completed."
            severity note;

        wait;
    end process;

END behavior;