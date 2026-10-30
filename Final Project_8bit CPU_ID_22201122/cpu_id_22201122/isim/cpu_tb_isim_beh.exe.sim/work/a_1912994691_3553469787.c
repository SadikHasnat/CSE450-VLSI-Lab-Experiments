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
static const char *ng0 = "/home/ise/VLSI/cpu_id_22201122/cpu_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1912994691_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3112);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3112);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1912994691_3553469787_p_1(char *t0)
{
    char t47[16];
    char t53[16];
    char t55[16];
    char t62[16];
    char t64[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    char *t61;
    char *t63;
    char *t65;
    char *t66;
    int t67;
    unsigned int t68;
    unsigned int t69;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB6:    t2 = (t0 + 3872);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3872);
    *((int *)t5) = 0;
    xsi_set_current_line(65, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4032);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088U);
    t5 = *((char **)t2);
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t12 = (8U * t11);
    t13 = (0 + t12);
    t2 = (t5 + t13);
    t14 = 1;
    if (8U == 8U)
        goto LAB20;

LAB21:    t14 = 0;

LAB22:    if (t14 == 1)
        goto LAB17;

LAB18:    t9 = (unsigned char)0;

LAB19:    if (t9 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 7184);
    *((int *)t2) = 1;
    t3 = (t0 + 7188);
    *((int *)t3) = 7;
    t10 = 1;
    t20 = 7;

LAB32:    if (t10 <= t20)
        goto LAB33;

LAB35:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 7207);
    xsi_report(t2, 38U, (unsigned char)0);
    xsi_set_current_line(79, ng0);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t37 = (t0 + 7160);
    xsi_report(t37, 24U, (unsigned char)2);
    goto LAB13;

LAB14:    t26 = (t0 + 1672U);
    t27 = *((char **)t26);
    t26 = (t0 + 2328U);
    t28 = *((char **)t26);
    t29 = (0 - 0);
    t30 = (t29 * 1);
    t31 = (4U * t30);
    t32 = (0 + t31);
    t26 = (t28 + t32);
    t33 = 1;
    if (4U == 4U)
        goto LAB26;

LAB27:    t33 = 0;

LAB28:    t4 = t33;
    goto LAB16;

LAB17:    t16 = (t0 + 1512U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t16 = (t0 + 2208U);
    t19 = *((char **)t16);
    t20 = (0 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t16 = (t19 + t23);
    t24 = *((unsigned char *)t16);
    t25 = (t18 == t24);
    t9 = t25;
    goto LAB19;

LAB20:    t15 = 0;

LAB23:    if (t15 < 8U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t7 = (t3 + t15);
    t8 = (t2 + t15);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB21;

LAB25:    t15 = (t15 + 1);
    goto LAB23;

LAB26:    t34 = 0;

LAB29:    if (t34 < 4U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t35 = (t27 + t34);
    t36 = (t26 + t34);
    if (*((unsigned char *)t35) != *((unsigned char *)t36))
        goto LAB27;

LAB31:    t34 = (t34 + 1);
    goto LAB29;

LAB33:    xsi_set_current_line(72, ng0);

LAB38:    t5 = (t0 + 3888);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB34:    t2 = (t0 + 7184);
    t10 = *((int *)t2);
    t3 = (t0 + 7188);
    t20 = *((int *)t3);
    if (t10 == t20)
        goto LAB35;

LAB64:    t29 = (t10 + 1);
    t10 = t29;
    t5 = (t0 + 7184);
    *((int *)t5) = t10;
    goto LAB32;

LAB36:    t8 = (t0 + 3888);
    *((int *)t8) = 0;
    xsi_set_current_line(73, ng0);
    t6 = (1 * 1000LL);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t6);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    t7 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t7, 0U, 0U);
    if (t4 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088U);
    t5 = *((char **)t2);
    t2 = (t0 + 7184);
    t29 = *((int *)t2);
    t39 = (t29 - 0);
    t11 = (t39 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t2));
    t12 = (8U * t11);
    t13 = (0 + t12);
    t7 = (t5 + t13);
    t14 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t14 = 0;

LAB54:    if (t14 == 1)
        goto LAB49;

LAB50:    t9 = (unsigned char)0;

LAB51:    if (t9 == 1)
        goto LAB46;

LAB47:    t4 = (unsigned char)0;

LAB48:    if (t4 == 0)
        goto LAB44;

LAB45:    goto LAB34;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t45 = (t0 + 7192);
    t48 = ((STD_STANDARD) + 384);
    t49 = (t0 + 7184);
    t50 = xsi_int_to_mem(*((int *)t49));
    t51 = xsi_string_variable_get_image(t47, t48, t50);
    t54 = ((STD_STANDARD) + 984);
    t56 = (t55 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = 1;
    t57 = (t56 + 4U);
    *((int *)t57) = 6;
    t57 = (t56 + 8U);
    *((int *)t57) = 1;
    t58 = (6 - 1);
    t59 = (t58 * 1);
    t59 = (t59 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t59;
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t45, t55, (char)97, t51, t47, (char)101);
    t57 = (t0 + 7198);
    t63 = ((STD_STANDARD) + 984);
    t65 = (t64 + 0U);
    t66 = (t65 + 0U);
    *((int *)t66) = 1;
    t66 = (t65 + 4U);
    *((int *)t66) = 9;
    t66 = (t65 + 8U);
    *((int *)t66) = 1;
    t67 = (9 - 1);
    t59 = (t67 * 1);
    t59 = (t59 + 1);
    t66 = (t65 + 12U);
    *((unsigned int *)t66) = t59;
    t61 = xsi_base_array_concat(t61, t62, t63, (char)97, t52, t53, (char)97, t57, t64, (char)101);
    t66 = (t47 + 12U);
    t59 = *((unsigned int *)t66);
    t68 = (6U + t59);
    t69 = (t68 + 9U);
    xsi_report(t61, t69, (unsigned char)2);
    goto LAB45;

LAB46:    t28 = (t0 + 1672U);
    t35 = *((char **)t28);
    t28 = (t0 + 2328U);
    t36 = *((char **)t28);
    t28 = (t0 + 7184);
    t42 = *((int *)t28);
    t43 = (t42 - 0);
    t30 = (t43 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t28));
    t31 = (4U * t30);
    t32 = (0 + t31);
    t37 = (t36 + t32);
    t33 = 1;
    if (4U == 4U)
        goto LAB58;

LAB59:    t33 = 0;

LAB60:    t4 = t33;
    goto LAB48;

LAB49:    t17 = (t0 + 1512U);
    t19 = *((char **)t17);
    t18 = *((unsigned char *)t19);
    t17 = (t0 + 2208U);
    t26 = *((char **)t17);
    t17 = (t0 + 7184);
    t40 = *((int *)t17);
    t41 = (t40 - 0);
    t21 = (t41 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t17));
    t22 = (1U * t21);
    t23 = (0 + t22);
    t27 = (t26 + t23);
    t24 = *((unsigned char *)t27);
    t25 = (t18 == t24);
    t9 = t25;
    goto LAB51;

LAB52:    t15 = 0;

LAB55:    if (t15 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t8 = (t3 + t15);
    t16 = (t7 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t16))
        goto LAB53;

LAB57:    t15 = (t15 + 1);
    goto LAB55;

LAB58:    t34 = 0;

LAB61:    if (t34 < 4U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t38 = (t35 + t34);
    t44 = (t37 + t34);
    if (*((unsigned char *)t38) != *((unsigned char *)t44))
        goto LAB59;

LAB63:    t34 = (t34 + 1);
    goto LAB61;

LAB65:    goto LAB2;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

}


extern void work_a_1912994691_3553469787_init()
{
	static char *pe[] = {(void *)work_a_1912994691_3553469787_p_0,(void *)work_a_1912994691_3553469787_p_1};
	xsi_register_didat("work_a_1912994691_3553469787", "isim/cpu_tb_isim_beh.exe.sim/work/a_1912994691_3553469787.didat");
	xsi_register_executes(pe);
}
