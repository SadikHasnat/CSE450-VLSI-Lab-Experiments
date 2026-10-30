----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:18:52 10/27/2026 
-- Design Name: 
-- Module Name:    pc - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

entity pc is
    port (
        clk    : in  std_logic;
        reset  : in  std_logic;
        pc_out : out std_logic_vector(3 downto 0)
    );
end pc;

architecture rtl of pc is
    signal cnt : unsigned(3 downto 0) := (others => '0');
begin
    process (clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                cnt <= (others => '0');
            else
                cnt <= cnt + 1;   -- no JZ in Set 2, so always PC + 1
            end if;
        end if;
    end process;
    pc_out <= std_logic_vector(cnt);
end rtl;