----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:45:01 10/29/2026 
-- Design Name: 
-- Module Name:    register_8bit - Behavioral 
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

entity register_8bit is
    Port (
        clk      : in  STD_LOGIC;
        reset    : in  STD_LOGIC;
        enable   : in  STD_LOGIC;
        data_in  : in  STD_LOGIC_VECTOR(7 downto 0);
        data_out : out STD_LOGIC_VECTOR(7 downto 0)
    );
end register_8bit;

architecture Behavioral of register_8bit is

begin

    process(clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                data_out <= (others => '0');

            elsif enable = '1' then
                data_out <= data_in;
            end if;
        end if;
    end process;

end Behavioral;
