----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:40:40 10/28/2026 
-- Design Name: 
-- Module Name:    rom - Behavioral 
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

entity prog_rom is
    port (
        addr  : in  std_logic_vector(3 downto 0);
        instr : out std_logic_vector(11 downto 0)
    );
end prog_rom;

architecture rtl of prog_rom is
    type rom_t is array (0 to 15) of std_logic_vector(11 downto 0);
    constant ROM : rom_t := (
        0      => x"155",   -- LDI 0x55
        1      => x"6FF",   -- XOR 0xFF
        2      => x"700",   -- NOT
        3      => x"800",   -- SHL
        4      => x"256",   -- ADD 0x56
        5      => x"681",   -- XOR 0x81
        6      => x"800",   -- SHL
        others => x"000"    -- NOP
    );
begin
    instr <= ROM(to_integer(unsigned(addr)));
end rtl;
