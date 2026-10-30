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
static const char *ng0 = "/home/ise/VLSI/cpu_id_22201122/control_unit_tb.vhd";



static void work_a_3455515378_2372691052_p_0(char *t0)
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
    unsigned char t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4937);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4941);
    t12 = 1;
    if (3U == 3U)
        goto LAB16;

LAB17:    t12 = 0;

LAB18:    if (t12 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t10 = (unsigned char)0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4960);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 4944);
    xsi_report(t7, 16U, (unsigned char)3);
    goto LAB9;

LAB10:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t10 = t18;
    goto LAB12;

LAB13:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t11 = t15;
    goto LAB15;

LAB16:    t13 = 0;

LAB19:    if (t13 < 3U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB17;

LAB21:    t13 = (t13 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4964);
    t12 = 1;
    if (3U == 3U)
        goto LAB34;

LAB35:    t12 = 0;

LAB36:    if (t12 == 1)
        goto LAB31;

LAB32:    t11 = (unsigned char)0;

LAB33:    if (t11 == 1)
        goto LAB28;

LAB29:    t10 = (unsigned char)0;

LAB30:    if (t10 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4983);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(90, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t7 = (t0 + 4967);
    xsi_report(t7, 16U, (unsigned char)3);
    goto LAB27;

LAB28:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t10 = t18;
    goto LAB30;

LAB31:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB33;

LAB34:    t13 = 0;

LAB37:    if (t13 < 3U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t13 = (t13 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4987);
    t12 = 1;
    if (3U == 3U)
        goto LAB52;

LAB53:    t12 = 0;

LAB54:    if (t12 == 1)
        goto LAB49;

LAB50:    t11 = (unsigned char)0;

LAB51:    if (t11 == 1)
        goto LAB46;

LAB47:    t10 = (unsigned char)0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5006);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(100, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 4990);
    xsi_report(t7, 16U, (unsigned char)3);
    goto LAB45;

LAB46:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t10 = t18;
    goto LAB48;

LAB49:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB51;

LAB52:    t13 = 0;

LAB55:    if (t13 < 3U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB53;

LAB57:    t13 = (t13 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5010);
    t12 = 1;
    if (3U == 3U)
        goto LAB70;

LAB71:    t12 = 0;

LAB72:    if (t12 == 1)
        goto LAB67;

LAB68:    t11 = (unsigned char)0;

LAB69:    if (t11 == 1)
        goto LAB64;

LAB65:    t10 = (unsigned char)0;

LAB66:    if (t10 == 0)
        goto LAB62;

LAB63:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5029);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    t7 = (t0 + 5013);
    xsi_report(t7, 16U, (unsigned char)3);
    goto LAB63;

LAB64:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t10 = t18;
    goto LAB66;

LAB67:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB69;

LAB70:    t13 = 0;

LAB73:    if (t13 < 3U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB71;

LAB75:    t13 = (t13 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5033);
    t12 = 1;
    if (3U == 3U)
        goto LAB88;

LAB89:    t12 = 0;

LAB90:    if (t12 == 1)
        goto LAB85;

LAB86:    t11 = (unsigned char)0;

LAB87:    if (t11 == 1)
        goto LAB82;

LAB83:    t10 = (unsigned char)0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5052);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(120, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB96:    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t7 = (t0 + 5036);
    xsi_report(t7, 16U, (unsigned char)3);
    goto LAB81;

LAB82:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t10 = t18;
    goto LAB84;

LAB85:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB87;

LAB88:    t13 = 0;

LAB91:    if (t13 < 3U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB89;

LAB93:    t13 = (t13 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5056);
    t12 = 1;
    if (3U == 3U)
        goto LAB106;

LAB107:    t12 = 0;

LAB108:    if (t12 == 1)
        goto LAB103;

LAB104:    t11 = (unsigned char)0;

LAB105:    if (t11 == 1)
        goto LAB100;

LAB101:    t10 = (unsigned char)0;

LAB102:    if (t10 == 0)
        goto LAB98;

LAB99:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5075);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(130, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB95:    goto LAB94;

LAB97:    goto LAB95;

LAB98:    t7 = (t0 + 5059);
    xsi_report(t7, 16U, (unsigned char)3);
    goto LAB99;

LAB100:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t10 = t18;
    goto LAB102;

LAB103:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB105;

LAB106:    t13 = 0;

LAB109:    if (t13 < 3U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB107;

LAB111:    t13 = (t13 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5079);
    t12 = 1;
    if (3U == 3U)
        goto LAB124;

LAB125:    t12 = 0;

LAB126:    if (t12 == 1)
        goto LAB121;

LAB122:    t11 = (unsigned char)0;

LAB123:    if (t11 == 1)
        goto LAB118;

LAB119:    t10 = (unsigned char)0;

LAB120:    if (t10 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5111);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(140, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB132:    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t7 = (t0 + 5082);
    xsi_report(t7, 29U, (unsigned char)3);
    goto LAB117;

LAB118:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t10 = t18;
    goto LAB120;

LAB121:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t11 = t15;
    goto LAB123;

LAB124:    t13 = 0;

LAB127:    if (t13 < 3U)
        goto LAB128;
    else
        goto LAB126;

LAB128:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB125;

LAB129:    t13 = (t13 + 1);
    goto LAB127;

LAB130:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5115);
    t12 = 1;
    if (3U == 3U)
        goto LAB142;

LAB143:    t12 = 0;

LAB144:    if (t12 == 1)
        goto LAB139;

LAB140:    t11 = (unsigned char)0;

LAB141:    if (t11 == 1)
        goto LAB136;

LAB137:    t10 = (unsigned char)0;

LAB138:    if (t10 == 0)
        goto LAB134;

LAB135:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5147);
    xsi_report(t2, 39U, (unsigned char)0);
    xsi_set_current_line(152, ng0);

LAB150:    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB131:    goto LAB130;

LAB133:    goto LAB131;

LAB134:    t7 = (t0 + 5118);
    xsi_report(t7, 29U, (unsigned char)3);
    goto LAB135;

LAB136:    t7 = (t0 + 1512U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t10 = t18;
    goto LAB138;

LAB139:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t11 = t15;
    goto LAB141;

LAB142:    t13 = 0;

LAB145:    if (t13 < 3U)
        goto LAB146;
    else
        goto LAB144;

LAB146:    t5 = (t3 + t13);
    t6 = (t2 + t13);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB143;

LAB147:    t13 = (t13 + 1);
    goto LAB145;

LAB148:    goto LAB2;

LAB149:    goto LAB148;

LAB151:    goto LAB149;

}


extern void work_a_3455515378_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3455515378_2372691052_p_0};
	xsi_register_didat("work_a_3455515378_2372691052", "isim/control_unit_tb_isim_beh.exe.sim/work/a_3455515378_2372691052.didat");
	xsi_register_executes(pe);
}
