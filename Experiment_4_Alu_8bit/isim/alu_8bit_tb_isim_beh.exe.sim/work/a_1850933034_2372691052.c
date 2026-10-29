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
static const char *ng0 = "/home/ise/VLSI/Experiment_4_Alu_8bit/alu_8bit_tb.vhd";



static void work_a_1850933034_2372691052_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5436);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5444);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5452);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(75, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5455);
    t11 = 1;
    if (8U == 8U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t10 = (unsigned char)0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5486);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5494);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5502);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5463);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB9;

LAB10:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB12;

LAB13:    t12 = 0;

LAB16:    if (t12 < 8U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5505);
    t11 = 1;
    if (8U == 8U)
        goto LAB28;

LAB29:    t11 = 0;

LAB30:    if (t11 == 1)
        goto LAB25;

LAB26:    t10 = (unsigned char)0;

LAB27:    if (t10 == 0)
        goto LAB23;

LAB24:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5542);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5550);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5558);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(95, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    t7 = (t0 + 5513);
    xsi_report(t7, 29U, (unsigned char)2);
    goto LAB24;

LAB25:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB27;

LAB28:    t12 = 0;

LAB31:    if (t12 < 8U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB29;

LAB33:    t12 = (t12 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5561);
    t10 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t10 = 0;

LAB42:    if (t10 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5595);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5603);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5611);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(105, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t7 = (t0 + 5569);
    xsi_report(t7, 26U, (unsigned char)2);
    goto LAB39;

LAB40:    t12 = 0;

LAB43:    if (t12 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB41;

LAB45:    t12 = (t12 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5614);
    t10 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t10 = 0;

LAB54:    if (t10 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5640);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5648);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5656);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(115, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t7 = (t0 + 5622);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB51;

LAB52:    t12 = 0;

LAB55:    if (t12 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB53;

LAB57:    t12 = (t12 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5659);
    t10 = 1;
    if (8U == 8U)
        goto LAB64;

LAB65:    t10 = 0;

LAB66:    if (t10 == 0)
        goto LAB62;

LAB63:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 5684);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5692);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5700);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(125, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB72:    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    t7 = (t0 + 5667);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB63;

LAB64:    t12 = 0;

LAB67:    if (t12 < 8U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB65;

LAB69:    t12 = (t12 + 1);
    goto LAB67;

LAB70:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5703);
    t10 = 1;
    if (8U == 8U)
        goto LAB76;

LAB77:    t10 = 0;

LAB78:    if (t10 == 0)
        goto LAB74;

LAB75:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5729);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5737);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 5745);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(135, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB84:    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB71:    goto LAB70;

LAB73:    goto LAB71;

LAB74:    t7 = (t0 + 5711);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB75;

LAB76:    t12 = 0;

LAB79:    if (t12 < 8U)
        goto LAB80;
    else
        goto LAB78;

LAB80:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB77;

LAB81:    t12 = (t12 + 1);
    goto LAB79;

LAB82:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5748);
    t10 = 1;
    if (8U == 8U)
        goto LAB88;

LAB89:    t10 = 0;

LAB90:    if (t10 == 0)
        goto LAB86;

LAB87:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5774);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 5782);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5790);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(145, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB96:    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB83:    goto LAB82;

LAB85:    goto LAB83;

LAB86:    t7 = (t0 + 5756);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB87;

LAB88:    t12 = 0;

LAB91:    if (t12 < 8U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB89;

LAB93:    t12 = (t12 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5793);
    t10 = 1;
    if (8U == 8U)
        goto LAB100;

LAB101:    t10 = 0;

LAB102:    if (t10 == 0)
        goto LAB98;

LAB99:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5826);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5834);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5842);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(155, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB108:    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB95:    goto LAB94;

LAB97:    goto LAB95;

LAB98:    t7 = (t0 + 5801);
    xsi_report(t7, 25U, (unsigned char)2);
    goto LAB99;

LAB100:    t12 = 0;

LAB103:    if (t12 < 8U)
        goto LAB104;
    else
        goto LAB102;

LAB104:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB101;

LAB105:    t12 = (t12 + 1);
    goto LAB103;

LAB106:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5845);
    t10 = 1;
    if (8U == 8U)
        goto LAB112;

LAB113:    t10 = 0;

LAB114:    if (t10 == 0)
        goto LAB110;

LAB111:    xsi_set_current_line(162, ng0);
    if ((unsigned char)0 == 0)
        goto LAB118;

LAB119:    xsi_set_current_line(166, ng0);

LAB122:    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB107:    goto LAB106;

LAB109:    goto LAB107;

LAB110:    t7 = (t0 + 5853);
    xsi_report(t7, 26U, (unsigned char)2);
    goto LAB111;

LAB112:    t12 = 0;

LAB115:    if (t12 < 8U)
        goto LAB116;
    else
        goto LAB114;

LAB116:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB113;

LAB117:    t12 = (t12 + 1);
    goto LAB115;

LAB118:    t2 = (t0 + 5879);
    xsi_report(t2, 26U, (unsigned char)0);
    goto LAB119;

LAB120:    goto LAB2;

LAB121:    goto LAB120;

LAB123:    goto LAB121;

}


extern void work_a_1850933034_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1850933034_2372691052_p_0};
	xsi_register_didat("work_a_1850933034_2372691052", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1850933034_2372691052.didat");
	xsi_register_executes(pe);
}
