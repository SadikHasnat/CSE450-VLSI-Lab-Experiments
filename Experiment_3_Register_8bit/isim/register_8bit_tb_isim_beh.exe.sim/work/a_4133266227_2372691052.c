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
static const char *ng0 = "/home/ise/VLSI/Experiment_3_Register_8bit/register_8bit_tb.vhd";



static void work_a_4133266227_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4133266227_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;
    unsigned char t11;
    unsigned int t12;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6056);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 2);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t10);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6064);
    t11 = 1;
    if (8U == 8U)
        goto LAB10;

LAB11:    t11 = 0;

LAB12:    if (t11 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6092);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 6072);
    xsi_report(t7, 20U, (unsigned char)2);
    goto LAB9;

LAB10:    t12 = 0;

LAB13:    if (t12 < 8U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t12 = (t12 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6100);
    t11 = 1;
    if (8U == 8U)
        goto LAB22;

LAB23:    t11 = 0;

LAB24:    if (t11 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6133);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 6108);
    xsi_report(t7, 25U, (unsigned char)2);
    goto LAB21;

LAB22:    t12 = 0;

LAB25:    if (t12 < 8U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB23;

LAB27:    t12 = (t12 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6141);
    t11 = 1;
    if (8U == 8U)
        goto LAB34;

LAB35:    t11 = 0;

LAB36:    if (t11 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6174);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t7 = (t0 + 6149);
    xsi_report(t7, 25U, (unsigned char)2);
    goto LAB33;

LAB34:    t12 = 0;

LAB37:    if (t12 < 8U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t12 = (t12 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6182);
    t11 = 1;
    if (8U == 8U)
        goto LAB46;

LAB47:    t11 = 0;

LAB48:    if (t11 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 6190);
    xsi_report(t7, 24U, (unsigned char)2);
    goto LAB45;

LAB46:    t12 = 0;

LAB49:    if (t12 < 8U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t12 = (t12 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6214);
    t11 = 1;
    if (8U == 8U)
        goto LAB58;

LAB59:    t11 = 0;

LAB60:    if (t11 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t7 = (t0 + 6222);
    xsi_report(t7, 25U, (unsigned char)2);
    goto LAB57;

LAB58:    t12 = 0;

LAB61:    if (t12 < 8U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB59;

LAB63:    t12 = (t12 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6247);
    t11 = 1;
    if (8U == 8U)
        goto LAB70;

LAB71:    t11 = 0;

LAB72:    if (t11 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6284);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t7 = (t0 + 6255);
    xsi_report(t7, 29U, (unsigned char)2);
    goto LAB69;

LAB70:    t12 = 0;

LAB73:    if (t12 < 8U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB71;

LAB75:    t12 = (t12 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6292);
    t11 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t11 = 0;

LAB84:    if (t11 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 6325);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t9);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t7 = (t0 + 6300);
    xsi_report(t7, 25U, (unsigned char)2);
    goto LAB81;

LAB82:    t12 = 0;

LAB85:    if (t12 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t12 = (t12 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6333);
    t11 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t11 = 0;

LAB96:    if (t11 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 6370);
    xsi_report(t2, 35U, (unsigned char)0);
    xsi_set_current_line(168, ng0);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t7 = (t0 + 6341);
    xsi_report(t7, 29U, (unsigned char)2);
    goto LAB93;

LAB94:    t12 = 0;

LAB97:    if (t12 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t12 = (t12 + 1);
    goto LAB97;

LAB100:    goto LAB2;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

}


extern void work_a_4133266227_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4133266227_2372691052_p_0,(void *)work_a_4133266227_2372691052_p_1};
	xsi_register_didat("work_a_4133266227_2372691052", "isim/register_8bit_tb_isim_beh.exe.sim/work/a_4133266227_2372691052.didat");
	xsi_register_executes(pe);
}
