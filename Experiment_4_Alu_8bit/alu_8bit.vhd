----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:58:16 10/29/2026 
-- Design Name: 
-- Module Name:    alu_8bit - Behavioral 
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

entity alu_8bit is
    Port (
        A         : in  STD_LOGIC_VECTOR(7 downto 0);
        B         : in  STD_LOGIC_VECTOR(7 downto 0);
        sel       : in  STD_LOGIC_VECTOR(2 downto 0);
        result    : out STD_LOGIC_VECTOR(7 downto 0);
        carry_out : out STD_LOGIC
    );
end alu_8bit;

architecture Behavioral of alu_8bit is

begin

    process(A, B, sel)
        variable temp : UNSIGNED(8 downto 0);
    begin

        result    <= (others => '0');
        carry_out <= '0';

        case sel is

            when "000" =>
                -- Addition
                temp := resize(unsigned(A), 9)
                      + resize(unsigned(B), 9);

                result    <= std_logic_vector(temp(7 downto 0));
                carry_out <= temp(8);

            when "001" =>
                -- Subtraction
                temp := resize(unsigned(A), 9)
                      - resize(unsigned(B), 9);

                result <= std_logic_vector(temp(7 downto 0));

            when "010" =>
                -- Bitwise AND
                result <= A AND B;

            when "011" =>
                -- Bitwise OR
                result <= A OR B;

            when "100" =>
                -- Bitwise XOR
                result <= A XOR B;

            when "101" =>
                -- Bitwise NOT
                result <= NOT A;

            when "110" =>
                -- Logical left shift
                result <= A(6 downto 0) & '0';

            when "111" =>
                -- Logical right shift
                result <= '0' & A(7 downto 1);

            when others =>
                result    <= (others => '0');
                carry_out <= '0';

        end case;

    end process;

end Behavioral;