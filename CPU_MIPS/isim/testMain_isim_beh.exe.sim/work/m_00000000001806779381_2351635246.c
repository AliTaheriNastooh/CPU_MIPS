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
static const char *ng0 = "C:/Users/ASUS/Desktop/My Project/CPU - computerArtituchtoreLab/CPU MIPS/fetch.v";
static int ng1[] = {0, 0};
static const char *ng2 = "input.dat";
static const char *ng3 = "r";
static const char *ng4 = "data_file handle was NULL";
static const char *ng5 = "%b\n";
static const char *ng6 = "file%d: %b";
static int ng7[] = {1, 0};



static void Initial_50_0(char *t0)
{
    char t3[8];
    char t13[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t35;

LAB0:    xsi_set_current_line(50, ng0);

LAB2:    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t4, 32, t5, 32);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(59, ng0);

LAB7:    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 3208);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    xsi_vlog_bit_copy(t3, 0, t12, 0, 32);
    *((int *)t13) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng5, 2, t0, (char)119, t3, 32);
    t14 = (t13 + 4);
    *((int *)t14) = 0;
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 32);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 2568);
    t6 = (t0 + 2568);
    t12 = (t6 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t3, t13, t14, t17, 2, 1, t20, 32, 1);
    t21 = (t3 + 4);
    t7 = *((unsigned int *)t21);
    t22 = (!(t7));
    t23 = (t13 + 4);
    t8 = *((unsigned int *)t23);
    t24 = (!(t8));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2568);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t3, 32, t12, t16, t19, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t4, 32, (char)118, t3, 32);
    xsi_set_current_line(64, ng0);

LAB10:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    *((int *)t13) = xsi_vlogfile_feof(*((unsigned int *)t4));
    t5 = (t13 + 4);
    *((int *)t5) = 0;
    memset(t3, 0, 8);
    t6 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t6) == 0)
        goto LAB11;

LAB13:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB14:    t14 = (t3 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t3);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB16:
LAB5:
LAB1:    return;
LAB3:    xsi_set_current_line(54, ng0);

LAB6:    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(56, ng0);
    xsi_vlog_finish(1);
    goto LAB5;

LAB8:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t13);
    t26 = (t9 - t10);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t13), t27);
    goto LAB9;

LAB11:    *((unsigned int *)t3) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(64, ng0);

LAB17:    xsi_set_current_line(65, ng0);
    t15 = (t0 + 2888);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3208);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t33, 0, t20, 0, 32);
    *((int *)t34) = xsi_vlogfile_fscanf(*((unsigned int *)t17), ng5, 2, t0, (char)119, t33, 32);
    t21 = (t34 + 4);
    *((int *)t21) = 0;
    t23 = (t0 + 3208);
    xsi_vlogvar_assign_value(t23, t33, 0, 0, 32);
    t35 = (t0 + 3048);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t4, 32, t5, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 2568);
    t6 = (t0 + 2568);
    t12 = (t6 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t3, t13, t14, t17, 2, 1, t20, 32, 1);
    t21 = (t3 + 4);
    t7 = *((unsigned int *)t21);
    t22 = (!(t7));
    t23 = (t13 + 4);
    t8 = *((unsigned int *)t23);
    t24 = (!(t8));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2568);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t3, 32, t12, t16, t19, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t4, 32, (char)118, t3, 32);
    goto LAB10;

LAB18:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t13);
    t26 = (t9 - t10);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t13), t27);
    goto LAB19;

}

static void Always_82_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4944);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(88, ng0);

LAB10:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB8:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(85, ng0);

LAB9:    xsi_set_current_line(86, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 2248);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB8;

}

static void Always_95_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4960);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);

LAB5:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2568);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t16, 32, 2);
    t17 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t17, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000001806779381_2351635246_init()
{
	static char *pe[] = {(void *)Initial_50_0,(void *)Always_82_1,(void *)Always_95_2};
	xsi_register_didat("work_m_00000000001806779381_2351635246", "isim/testMain_isim_beh.exe.sim/work/m_00000000001806779381_2351635246.didat");
	xsi_register_executes(pe);
}
