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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ASUS/Desktop/My Project/CPU - computerArtituchtoreLab/CPU MIPS/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static int ng13[] = {1, 0};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static int ng16[] = {10, 0};
static int ng17[] = {12, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t8[8];
    char t40[8];
    char t47[8];
    char t50[8];
    char t53[8];
    char t87[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB69;

LAB68:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t4) < *((unsigned int *)t2))
        goto LAB70;

LAB71:    memset(t40, 0, 8);
    t13 = (t8 + 4);
    t9 = *((unsigned int *)t13);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t14 = (t11 & t10);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t13) != 0)
        goto LAB75;

LAB76:    t22 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = (!(t16));
    t18 = *((unsigned int *)t22);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB77;

LAB78:    memcpy(t53, t40, 8);

LAB79:    t77 = (t53 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t53);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB91;

LAB92:
LAB93:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB9:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB11:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB13:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB15:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB17:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB34;

LAB35:
LAB36:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB33;

LAB19:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB37;

LAB38:
LAB39:    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB40;

LAB41:
LAB42:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t40) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t40 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t8, 0, 8);
    t39 = (t8 + 4);
    t41 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t8) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB47;

LAB46:    t44 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t8, 0, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(46, ng0);

LAB48:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB50;

LAB49:    if (t20 != 0)
        goto LAB51;

LAB52:    t21 = (t8 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(51, ng0);

LAB57:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB55:    goto LAB33;

LAB29:    xsi_set_current_line(56, ng0);

LAB58:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB62;

LAB59:    if (t20 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t8) = 1;

LAB62:    t21 = (t8 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(61, ng0);

LAB67:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB65:    goto LAB33;

LAB31:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB33;

LAB34:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB36;

LAB37:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB39;

LAB40:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB42;

LAB43:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB45;

LAB47:    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t8) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB46;

LAB50:    *((unsigned int *)t8) = 1;
    goto LAB52;

LAB51:    t13 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(48, ng0);

LAB56:    xsi_set_current_line(49, ng0);
    t22 = ((char*)((ng13)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t22, 0, 0, 1);
    goto LAB55;

LAB61:    t13 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(58, ng0);

LAB66:    xsi_set_current_line(59, ng0);
    t22 = ((char*)((ng13)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t22, 0, 0, 1);
    goto LAB65;

LAB69:    t12 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB71;

LAB70:    *((unsigned int *)t8) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t40) = 1;
    goto LAB76;

LAB75:    t21 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB76;

LAB77:    t39 = (t0 + 1368U);
    t41 = *((char **)t39);
    t39 = ((char*)((ng17)));
    memset(t47, 0, 8);
    t46 = (t41 + 4);
    t48 = (t39 + 4);
    t20 = *((unsigned int *)t41);
    t23 = *((unsigned int *)t39);
    t24 = (t20 ^ t23);
    t25 = *((unsigned int *)t46);
    t26 = *((unsigned int *)t48);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t46);
    t30 = *((unsigned int *)t48);
    t33 = (t29 | t30);
    t34 = (~(t33));
    t35 = (t28 & t34);
    if (t35 != 0)
        goto LAB83;

LAB80:    if (t33 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t47) = 1;

LAB83:    memset(t50, 0, 8);
    t51 = (t47 + 4);
    t36 = *((unsigned int *)t51);
    t37 = (~(t36));
    t38 = *((unsigned int *)t47);
    t42 = (t38 & t37);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t51) != 0)
        goto LAB86;

LAB87:    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t50);
    t54 = (t44 | t45);
    *((unsigned int *)t53) = t54;
    t55 = (t40 + 4);
    t56 = (t50 + 4);
    t57 = (t53 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB79;

LAB82:    t49 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t50) = 1;
    goto LAB87;

LAB86:    t52 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB87;

LAB88:    t63 = *((unsigned int *)t53);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t53) = (t63 | t64);
    t65 = (t40 + 4);
    t66 = (t50 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t40);
    t6 = (t69 & t68);
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t50);
    t31 = (t72 & t71);
    t73 = (~(t6));
    t74 = (~(t31));
    t75 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t75 & t73);
    t76 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t76 & t74);
    goto LAB90;

LAB91:    xsi_set_current_line(68, ng0);

LAB94:    xsi_set_current_line(69, ng0);
    t83 = (t0 + 1768);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng1)));
    memset(t87, 0, 8);
    t88 = (t85 + 4);
    t89 = (t86 + 4);
    t90 = *((unsigned int *)t85);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t88);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t88);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB98;

LAB95:    if (t99 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t87) = 1;

LAB98:    t103 = (t87 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t87);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB99;

LAB100:
LAB101:    goto LAB93;

LAB97:    t102 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(70, ng0);

LAB102:    xsi_set_current_line(71, ng0);
    t109 = ((char*)((ng13)));
    t110 = (t0 + 1928);
    xsi_vlogvar_assign_value(t110, t109, 0, 0, 1);
    goto LAB101;

}


extern void work_m_00000000002079431489_0886308060_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000002079431489_0886308060", "isim/testMain_isim_beh.exe.sim/work/m_00000000002079431489_0886308060.didat");
	xsi_register_executes(pe);
}
