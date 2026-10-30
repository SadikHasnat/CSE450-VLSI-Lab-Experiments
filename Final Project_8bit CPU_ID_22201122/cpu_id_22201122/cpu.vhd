----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:56:32 10/28/2026 
-- Design Name: 
-- Module Name:    cpu - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu is
    port (
        clk   : in  std_logic;
        reset : in  std_logic;
        q     : out std_logic_vector(7 downto 0);
        z     : out std_logic;
        pc    : out std_logic_vector(3 downto 0)
    );
end cpu;

architecture structural of cpu is
    signal pc_s     : std_logic_vector(3 downto 0);
    signal instr    : std_logic_vector(11 downto 0);
    signal alu_sel  : std_logic_vector(2 downto 0);
    signal acc_en   : std_logic;
    signal z_en     : std_logic;
    signal alu_out  : std_logic_vector(7 downto 0);
    signal acc_s    : std_logic_vector(7 downto 0);
begin
    u_pc  : entity work.pc
        port map (clk => clk, reset => reset, pc_out => pc_s);

    u_rom : entity work.prog_rom
        port map (addr => pc_s, instr => instr);

    u_ctl : entity work.control_unit
        port map (opcode => instr(11 downto 8), alu_sel => alu_sel,
                  acc_en => acc_en, z_en => z_en);

    u_alu : entity work.alu
        port map (a => acc_s, b => instr(7 downto 0), sel => alu_sel, result => alu_out);

    u_acc : entity work.acc_z
        port map (clk => clk, reset => reset, acc_en => acc_en, z_en => z_en,
                  d => alu_out, q => acc_s, z => z);

    q  <= acc_s;
    pc <= pc_s;
end structural;