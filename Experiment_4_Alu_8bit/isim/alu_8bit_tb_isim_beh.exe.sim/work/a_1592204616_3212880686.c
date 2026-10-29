/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/VLSI/Experiment_4_Alu_8bit/alu_8bit.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);


static void work_a_1592204616_3212880686_p_0(char *t0)
{
    char t26[16];
    char t27[16];
    char t31[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    unsigned int t43;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 3408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5308);
    t8 = xsi_mem_cmp(t1, t2, 3U);
    if (t8 == 1)
        goto LAB3;

LAB12:    t4 = (t0 + 5311);
    t9 = xsi_mem_cmp(t4, t2, 3U);
    if (t9 == 1)
        goto LAB4;

LAB13:    t6 = (t0 + 5314);
    t10 = xsi_mem_cmp(t6, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 5317);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 5320);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 5323);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 5326);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 5329);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(87, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 3264);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(49, ng0);
    t28 = (t0 + 1032U);
    t29 = *((char **)t28);
    t28 = (t0 + 5192U);
    t30 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t27, t29, t28, 9);
    t32 = (t0 + 1192U);
    t33 = *((char **)t32);
    t32 = (t0 + 5208U);
    t34 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t31, t33, t32, 9);
    t35 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t26, t30, t27, t34, t31);
    t36 = (t0 + 1968U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t26 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = (1U * t39);
    memcpy(t36, t35, t40);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t39 = (8 - 7);
    t40 = (t39 * 1U);
    t41 = (0 + t40);
    t1 = (t2 + t41);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t8 = (8 - 8);
    t39 = (t8 * -1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t1 = (t2 + t41);
    t42 = *((unsigned char *)t1);
    t3 = (t0 + 3408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t42;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5192U);
    t3 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t27, t2, t1, 9);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 5208U);
    t6 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t31, t5, t4, 9);
    t7 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t26, t3, t27, t6, t31);
    t11 = (t0 + 1968U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t14 = (t26 + 12U);
    t39 = *((unsigned int *)t14);
    t40 = (1U * t39);
    memcpy(t11, t7, t40);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t39 = (8 - 7);
    t40 = (t39 * 1U);
    t41 = (0 + t40);
    t1 = (t2 + t41);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5192U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5208U);
    t5 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t26, t2, t1, t4, t3);
    t6 = (t26 + 12U);
    t39 = *((unsigned int *)t6);
    t40 = (1U * t39);
    t42 = (8U != t40);
    if (t42 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 3344);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5192U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5208U);
    t5 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t26, t2, t1, t4, t3);
    t6 = (t26 + 12U);
    t39 = *((unsigned int *)t6);
    t40 = (1U * t39);
    t42 = (8U != t40);
    if (t42 == 1)
        goto LAB23;

LAB24:    t7 = (t0 + 3344);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB7:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5192U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5208U);
    t5 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t26, t2, t1, t4, t3);
    t6 = (t26 + 12U);
    t39 = *((unsigned int *)t6);
    t40 = (1U * t39);
    t42 = (8U != t40);
    if (t42 == 1)
        goto LAB25;

LAB26:    t7 = (t0 + 3344);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB8:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5192U);
    t3 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t26, t2, t1);
    t4 = (t26 + 12U);
    t39 = *((unsigned int *)t4);
    t40 = (1U * t39);
    t42 = (8U != t40);
    if (t42 == 1)
        goto LAB27;

LAB28:    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB9:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t39 = (7 - 6);
    t40 = (t39 * 1U);
    t41 = (0 + t40);
    t1 = (t2 + t41);
    t4 = ((IEEE_P_2592010699) + 4000);
    t5 = (t27 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 6;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t8 = (0 - 6);
    t43 = (t8 * -1);
    t43 = (t43 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t43;
    t3 = xsi_base_array_concat(t3, t26, t4, (char)97, t1, t27, (char)99, (unsigned char)2, (char)101);
    t43 = (7U + 1U);
    t42 = (8U != t43);
    if (t42 == 1)
        goto LAB29;

LAB30:    t6 = (t0 + 3344);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t3, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB10:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t39 = (7 - 7);
    t40 = (t39 * 1U);
    t41 = (0 + t40);
    t1 = (t2 + t41);
    t4 = ((IEEE_P_2592010699) + 4000);
    t5 = (t27 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t8 = (1 - 7);
    t43 = (t8 * -1);
    t43 = (t43 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t43;
    t3 = xsi_base_array_concat(t3, t26, t4, (char)99, (unsigned char)2, (char)97, t1, t27, (char)101);
    t43 = (1U + 7U);
    t42 = (8U != t43);
    if (t42 == 1)
        goto LAB31;

LAB32:    t6 = (t0 + 3344);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t3, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB20:;
LAB21:    xsi_size_not_matching(8U, t40, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t40, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, t40, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(8U, t40, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(8U, t43, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t43, 0);
    goto LAB32;

}


extern void work_a_1592204616_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1592204616_3212880686_p_0};
	xsi_register_didat("work_a_1592204616_3212880686", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1592204616_3212880686.didat");
	xsi_register_executes(pe);
}
