----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:46:48 10/28/2026 
-- Design Name: 
-- Module Name:    control - Behavioral 
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

entity control_unit is
    port (
        opcode  : in  std_logic_vector(3 downto 0);
        alu_sel : out std_logic_vector(2 downto 0);
        acc_en  : out std_logic;
        z_en    : out std_logic
    );
end control_unit;

architecture rtl of control_unit is
begin
    process (opcode)
    begin
        -- defaults: NOP
        alu_sel <= "000";
        acc_en  <= '0';
        z_en    <= '0';
        case opcode is
            when "0001" => alu_sel <= "000"; acc_en <= '1'; z_en <= '1';  -- LDI
            when "0010" => alu_sel <= "001"; acc_en <= '1'; z_en <= '1';  -- ADD
            when "0110" => alu_sel <= "010"; acc_en <= '1'; z_en <= '1';  -- XOR
            when "0111" => alu_sel <= "011"; acc_en <= '1'; z_en <= '1';  -- NOT
            when "1000" => alu_sel <= "100"; acc_en <= '1'; z_en <= '1';  -- SHL
            when others => null;                                          -- NOP
        end case;
    end process;
end rtl;