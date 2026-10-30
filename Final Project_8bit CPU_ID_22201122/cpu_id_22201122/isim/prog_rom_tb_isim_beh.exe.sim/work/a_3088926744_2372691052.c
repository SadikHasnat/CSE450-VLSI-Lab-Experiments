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
static const char *ng0 = "/home/ise/VLSI/cpu_id_22201122/prog_rom_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );


static void work_a_3088926744_2372691052_p_0(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned int t11;
    int t12;
    int t13;
    char *t15;
    char *t16;
    int t17;

LAB0:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4652);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(66, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4656);
    t10 = 1;
    if (12U == 12U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4698);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 4668);
    xsi_report(t7, 30U, (unsigned char)3);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 12U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4702);
    t10 = 1;
    if (12U == 12U)
        goto LAB22;

LAB23:    t10 = 0;

LAB24:    if (t10 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4744);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(82, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 4714);
    xsi_report(t7, 30U, (unsigned char)3);
    goto LAB21;

LAB22:    t11 = 0;

LAB25:    if (t11 < 12U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB23;

LAB27:    t11 = (t11 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4748);
    t10 = 1;
    if (12U == 12U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4785);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(90, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t7 = (t0 + 4760);
    xsi_report(t7, 25U, (unsigned char)3);
    goto LAB33;

LAB34:    t11 = 0;

LAB37:    if (t11 < 12U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t11 = (t11 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4789);
    t10 = 1;
    if (12U == 12U)
        goto LAB46;

LAB47:    t10 = 0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4826);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(98, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 4801);
    xsi_report(t7, 25U, (unsigned char)3);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 12U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4830);
    t10 = 1;
    if (12U == 12U)
        goto LAB58;

LAB59:    t10 = 0;

LAB60:    if (t10 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4872);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(106, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t7 = (t0 + 4842);
    xsi_report(t7, 30U, (unsigned char)3);
    goto LAB57;

LAB58:    t11 = 0;

LAB61:    if (t11 < 12U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB59;

LAB63:    t11 = (t11 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4876);
    t10 = 1;
    if (12U == 12U)
        goto LAB70;

LAB71:    t10 = 0;

LAB72:    if (t10 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4918);
    t4 = (t0 + 2848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(114, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t7 = (t0 + 4888);
    xsi_report(t7, 30U, (unsigned char)3);
    goto LAB69;

LAB70:    t11 = 0;

LAB73:    if (t11 < 12U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB71;

LAB75:    t11 = (t11 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4922);
    t10 = 1;
    if (12U == 12U)
        goto LAB82;

LAB83:    t10 = 0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4959);
    *((int *)t2) = 7;
    t3 = (t0 + 4963);
    *((int *)t3) = 15;
    t12 = 7;
    t13 = 15;

LAB88:    if (t12 <= t13)
        goto LAB89;

LAB91:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5015);
    xsi_report(t2, 38U, (unsigned char)0);
    xsi_set_current_line(136, ng0);

LAB107:    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t7 = (t0 + 4934);
    xsi_report(t7, 25U, (unsigned char)3);
    goto LAB81;

LAB82:    t11 = 0;

LAB85:    if (t11 < 12U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t11 = (t11 + 1);
    goto LAB85;

LAB89:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 4959);
    t5 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t14, *((int *)t4), 4);
    t6 = (t0 + 2848);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(124, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2272);
    xsi_process_wait(t2, t9);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB90:    t2 = (t0 + 4959);
    t12 = *((int *)t2);
    t3 = (t0 + 4963);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB91;

LAB104:    t17 = (t12 + 1);
    t12 = t17;
    t4 = (t0 + 4959);
    *((int *)t4) = t12;
    goto LAB88;

LAB92:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4967);
    t10 = 1;
    if (12U == 12U)
        goto LAB98;

LAB99:    t10 = 0;

LAB100:    if (t10 == 0)
        goto LAB96;

LAB97:    goto LAB90;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    t7 = (t0 + 4979);
    xsi_report(t7, 36U, (unsigned char)3);
    goto LAB97;

LAB98:    t11 = 0;

LAB101:    if (t11 < 12U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB99;

LAB103:    t11 = (t11 + 1);
    goto LAB101;

LAB105:    goto LAB2;

LAB106:    goto LAB105;

LAB108:    goto LAB106;

}


extern void work_a_3088926744_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3088926744_2372691052_p_0};
	xsi_register_didat("work_a_3088926744_2372691052", "isim/prog_rom_tb_isim_beh.exe.sim/work/a_3088926744_2372691052.didat");
	xsi_register_executes(pe);
}
