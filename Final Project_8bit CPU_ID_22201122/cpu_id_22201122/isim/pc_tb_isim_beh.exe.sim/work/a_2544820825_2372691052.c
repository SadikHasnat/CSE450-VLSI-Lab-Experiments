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
static const char *ng0 = "/home/ise/VLSI/cpu_id_22201122/pc_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2544820825_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2432);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2432);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2544820825_2372691052_p_1(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t15;
    int t17;

LAB0:    t1 = (t0 + 2872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);

LAB6:    t2 = (t0 + 3192);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3192);
    *((int *)t4) = 0;
    xsi_set_current_line(83, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2680);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5256);
    t7 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t7 = 0;

LAB16:    if (t7 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5274);
    *((int *)t2) = 1;
    t3 = (t0 + 5278);
    *((int *)t3) = 15;
    t12 = 1;
    t13 = 15;

LAB20:    if (t12 <= t13)
        goto LAB21;

LAB23:    xsi_set_current_line(105, ng0);

LAB43:    t2 = (t0 + 3224);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t10 = (t0 + 5260);
    xsi_report(t10, 14U, (unsigned char)3);
    goto LAB13;

LAB14:    t9 = 0;

LAB17:    if (t9 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB21:    xsi_set_current_line(95, ng0);

LAB26:    t4 = (t0 + 3208);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    t2 = (t0 + 5274);
    t12 = *((int *)t2);
    t3 = (t0 + 5278);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB23;

LAB40:    t17 = (t12 + 1);
    t12 = t17;
    t4 = (t0 + 5274);
    *((int *)t4) = t12;
    goto LAB20;

LAB24:    t6 = (t0 + 3208);
    *((int *)t6) = 0;
    xsi_set_current_line(96, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2680);
    xsi_process_wait(t2, t8);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t5 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t7 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5274);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t14, *((int *)t2), 4);
    t5 = (t14 + 12U);
    t9 = *((unsigned int *)t5);
    t9 = (t9 * 1U);
    t7 = 1;
    if (4U == t9)
        goto LAB34;

LAB35:    t7 = 0;

LAB36:    if (t7 == 0)
        goto LAB32;

LAB33:    goto LAB22;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t11 = (t0 + 5282);
    xsi_report(t11, 17U, (unsigned char)3);
    goto LAB33;

LAB34:    t15 = 0;

LAB37:    if (t15 < 4U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t6 = (t3 + t15);
    t10 = (t4 + t15);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB35;

LAB39:    t15 = (t15 + 1);
    goto LAB37;

LAB41:    t4 = (t0 + 3224);
    *((int *)t4) = 0;
    xsi_set_current_line(106, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2680);
    xsi_process_wait(t2, t8);

LAB47:    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB42:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB41;
    else
        goto LAB43;

LAB44:    goto LAB42;

LAB45:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5299);
    t7 = 1;
    if (4U == 4U)
        goto LAB51;

LAB52:    t7 = 0;

LAB53:    if (t7 == 0)
        goto LAB49;

LAB50:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);

LAB59:    t2 = (t0 + 3240);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB46:    goto LAB45;

LAB48:    goto LAB46;

LAB49:    t10 = (t0 + 5303);
    xsi_report(t10, 17U, (unsigned char)3);
    goto LAB50;

LAB51:    t9 = 0;

LAB54:    if (t9 < 4U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB52;

LAB56:    t9 = (t9 + 1);
    goto LAB54;

LAB57:    t4 = (t0 + 3240);
    *((int *)t4) = 0;
    xsi_set_current_line(116, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2680);
    xsi_process_wait(t2, t8);

LAB63:    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB58:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB57;
    else
        goto LAB59;

LAB60:    goto LAB58;

LAB61:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5320);
    t7 = 1;
    if (4U == 4U)
        goto LAB67;

LAB68:    t7 = 0;

LAB69:    if (t7 == 0)
        goto LAB65;

LAB66:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);

LAB75:    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB62:    goto LAB61;

LAB64:    goto LAB62;

LAB65:    t10 = (t0 + 5324);
    xsi_report(t10, 27U, (unsigned char)3);
    goto LAB66;

LAB67:    t9 = 0;

LAB70:    if (t9 < 4U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB68;

LAB72:    t9 = (t9 + 1);
    goto LAB70;

LAB73:    t4 = (t0 + 3256);
    *((int *)t4) = 0;
    xsi_set_current_line(126, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2680);
    xsi_process_wait(t2, t8);

LAB79:    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB74:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB73;
    else
        goto LAB75;

LAB76:    goto LAB74;

LAB77:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5351);
    t7 = 1;
    if (4U == 4U)
        goto LAB83;

LAB84:    t7 = 0;

LAB85:    if (t7 == 0)
        goto LAB81;

LAB82:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5381);
    xsi_report(t2, 29U, (unsigned char)0);
    xsi_set_current_line(136, ng0);

LAB91:    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB78:    goto LAB77;

LAB80:    goto LAB78;

LAB81:    t10 = (t0 + 5355);
    xsi_report(t10, 26U, (unsigned char)3);
    goto LAB82;

LAB83:    t9 = 0;

LAB86:    if (t9 < 4U)
        goto LAB87;
    else
        goto LAB85;

LAB87:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB84;

LAB88:    t9 = (t9 + 1);
    goto LAB86;

LAB89:    goto LAB2;

LAB90:    goto LAB89;

LAB92:    goto LAB90;

}


extern void work_a_2544820825_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2544820825_2372691052_p_0,(void *)work_a_2544820825_2372691052_p_1};
	xsi_register_didat("work_a_2544820825_2372691052", "isim/pc_tb_isim_beh.exe.sim/work/a_2544820825_2372691052.didat");
	xsi_register_executes(pe);
}
