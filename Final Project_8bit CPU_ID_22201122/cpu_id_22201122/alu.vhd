----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:50:15 10/28/2026 
-- Design Name: 
-- Module Name:    alu - Behavioral 
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

entity alu is
    port (
        a       : in  std_logic_vector(7 downto 0);  -- ACC
        b       : in  std_logic_vector(7 downto 0);  -- operand
        sel     : in  std_logic_vector(2 downto 0);
        result  : out std_logic_vector(7 downto 0)
    );
end alu;

architecture rtl of alu is
begin
    process (a, b, sel)
    begin
        case sel is
            when "000"  => result <= b;                                              -- LDI
            when "001"  => result <= std_logic_vector(unsigned(a) + unsigned(b));    -- ADD
            when "010"  => result <= a xor b;                                        -- XOR
            when "011"  => result <= not a;                                          -- NOT
            when "100"  => result <= a(6 downto 0) & '0';                            -- SHL
            when others => result <= a;
        end case;
    end process;
end rtl;
