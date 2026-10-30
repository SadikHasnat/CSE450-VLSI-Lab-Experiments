--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:38:21 10/28/2026
-- Design Name:   
-- Module Name:   /home/ise/VLSI/cpu_id_22201122/cpu_tb.vhd
-- Project Name:  cpu_id_22201122
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cpu
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_tb is
end cpu_tb;

architecture sim of cpu_tb is
    signal clk   : std_logic := '0';
    signal reset : std_logic := '1';
    signal q     : std_logic_vector(7 downto 0);
    signal z     : std_logic;
    signal pc    : std_logic_vector(3 downto 0);

    constant T : time := 10 ns;

    type byte_arr is array (0 to 7) of std_logic_vector(7 downto 0);
    type bit_arr  is array (0 to 7) of std_logic;
    type pc_arr   is array (0 to 7) of std_logic_vector(3 downto 0);

    -- expected values after each rising edge (cycle 0 = reset)
    constant EXP_ACC : byte_arr := (x"00", x"55", x"AA", x"55", x"AA", x"00", x"81", x"02");
    constant EXP_Z   : bit_arr  := ('1', '0', '0', '0', '0', '1', '0', '0');
    constant EXP_PC  : pc_arr   := (x"0", x"1", x"2", x"3", x"4", x"5", x"6", x"7");
begin
    dut : entity work.cpu
        port map (clk => clk, reset => reset, q => q, z => z, pc => pc);

    clk_gen : process
    begin
        clk <= '0'; wait for T/2;
        clk <= '1'; wait for T/2;
    end process;

    stim : process
    begin
        -- cycle 0: reset held for one rising edge
        wait until rising_edge(clk);
        wait for 1 ns;
        reset <= '0';
        assert q = EXP_ACC(0) and z = EXP_Z(0) and pc = EXP_PC(0)
            report "Cycle 0 (reset) mismatch" severity error;

        -- cycles 1..7: one per instruction
        for i in 1 to 7 loop
            wait until rising_edge(clk);
            wait for 1 ns;
            assert q = EXP_ACC(i) and z = EXP_Z(i) and pc = EXP_PC(i)
                report "Cycle " & integer'image(i) & " mismatch" severity error;
        end loop;

        report "Simulation finished: all 8 checks done" severity note;
        wait;
    end process;
end sim;