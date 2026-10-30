----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:52:55 10/28/2026 
-- Design Name: 
-- Module Name:    acc_z - Behavioral 
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

entity acc_z is
    port (
        clk    : in  std_logic;
        reset  : in  std_logic;
        acc_en : in  std_logic;
        z_en   : in  std_logic;
        d      : in  std_logic_vector(7 downto 0);
        q      : out std_logic_vector(7 downto 0);
        z      : out std_logic
    );
end acc_z;

architecture rtl of acc_z is
    signal acc_r : std_logic_vector(7 downto 0) := (others => '0');
    signal z_r   : std_logic := '1';
begin
    process (clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                acc_r <= (others => '0');
                z_r   <= '1';
            else
                if acc_en = '1' then
                    acc_r <= d;
                end if;
                if z_en = '1' then
                    if d = "00000000" then
                        z_r <= '1';
                    else
                        z_r <= '0';
                    end if;
                end if;
            end if;
        end if;
    end process;
    q <= acc_r;
    z <= z_r;
end rtl;

