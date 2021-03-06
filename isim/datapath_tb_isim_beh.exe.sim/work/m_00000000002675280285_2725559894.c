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
static const char *ng0 = "D:/activeHdlProjects/mips-alu/ALU/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static int ng8[] = {31, 0};
static int ng9[] = {16, 0};
static int ng10[] = {15, 0};
static int ng11[] = {0, 0};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {8U, 0U};



static void Always_12_0(char *t0)
{
    char t10[8];
    char t19[8];
    char t20[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(16, ng0);

LAB26:    xsi_set_current_line(17, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(20, ng0);

LAB27:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB29;

LAB28:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 4294967295U);
    t9 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t10, 32, t9, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t4, 32, t19, 32);
    t21 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(24, ng0);

LAB30:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB31;

LAB32:
LAB33:    t41 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t41, t10, 0, 0, 32, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(28, ng0);

LAB34:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB35;

LAB36:
LAB37:    t41 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t41, t10, 0, 0, 32, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(32, ng0);

LAB38:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB39;

LAB40:
LAB41:    t21 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t21, t10, 0, 0, 32, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(36, ng0);

LAB42:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1768);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t21 = ((char*)((ng8)));
    t24 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t10, t19, t20, ((int*)(t9)), 2, t21, 32, 1, t24, 32, 1);
    t41 = (t10 + 4);
    t11 = *((unsigned int *)t41);
    t33 = (!(t11));
    t42 = (t19 + 4);
    t12 = *((unsigned int *)t42);
    t34 = (!(t12));
    t43 = (t33 && t34);
    t44 = (t20 + 4);
    t13 = *((unsigned int *)t44);
    t45 = (!(t13));
    t46 = (t43 && t45);
    if (t46 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng10)));
    t21 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t10, t19, t20, ((int*)(t8)), 2, t9, 32, 1, t21, 32, 1);
    t24 = (t10 + 4);
    t11 = *((unsigned int *)t24);
    t6 = (!(t11));
    t41 = (t19 + 4);
    t12 = *((unsigned int *)t41);
    t33 = (!(t12));
    t34 = (t6 && t33);
    t42 = (t20 + 4);
    t13 = *((unsigned int *)t42);
    t43 = (!(t13));
    t45 = (t34 && t43);
    if (t45 == 1)
        goto LAB45;

LAB46:    goto LAB25;

LAB19:    xsi_set_current_line(41, ng0);

LAB47:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB48:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_greater(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(49, ng0);

LAB52:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB53:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_greater(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(57, ng0);

LAB57:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB58:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_greater(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB29:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB28;

LAB31:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t21 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB33;

LAB35:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t21 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB37;

LAB39:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB41;

LAB43:    t14 = *((unsigned int *)t20);
    t47 = (t14 + 0);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t19);
    t48 = (t15 - t16);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t3, t4, t47, *((unsigned int *)t19), t49, 0LL);
    goto LAB44;

LAB45:    t14 = *((unsigned int *)t20);
    t46 = (t14 + 0);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t19);
    t47 = (t15 - t16);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t46, *((unsigned int *)t19), t48, 0LL);
    goto LAB46;

LAB49:    xsi_set_current_line(43, ng0);

LAB51:    xsi_set_current_line(44, ng0);
    t9 = ((char*)((ng1)));
    t21 = (t0 + 2088);
    t24 = (t21 + 56U);
    t41 = *((char **)t24);
    memset(t20, 0, 8);
    t42 = (t20 + 4);
    t44 = (t41 + 4);
    t16 = *((unsigned int *)t41);
    t17 = (t16 >> 0);
    *((unsigned int *)t20) = t17;
    t18 = *((unsigned int *)t44);
    t22 = (t18 >> 0);
    *((unsigned int *)t42) = t22;
    t23 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t23 & 2147483647U);
    t25 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t25 & 2147483647U);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t20, 31, t9, 1);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t19, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB48;

LAB54:    xsi_set_current_line(51, ng0);

LAB56:    xsi_set_current_line(52, ng0);
    t9 = (t0 + 2088);
    t21 = (t9 + 56U);
    t24 = *((char **)t21);
    memset(t20, 0, 8);
    t41 = (t20 + 4);
    t42 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t17 = (t16 >> 1);
    *((unsigned int *)t20) = t17;
    t18 = *((unsigned int *)t42);
    t22 = (t18 >> 1);
    *((unsigned int *)t41) = t22;
    t23 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t23 & 2147483647U);
    t25 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t25 & 2147483647U);
    t44 = ((char*)((ng1)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t44, 1, t20, 31);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t19, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB53;

LAB59:    xsi_set_current_line(59, ng0);

LAB61:    xsi_set_current_line(60, ng0);
    t9 = (t0 + 2088);
    t21 = (t9 + 56U);
    t24 = *((char **)t21);
    memset(t20, 0, 8);
    t41 = (t20 + 4);
    t42 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t17 = (t16 >> 1);
    *((unsigned int *)t20) = t17;
    t18 = *((unsigned int *)t42);
    t22 = (t18 >> 1);
    *((unsigned int *)t41) = t22;
    t23 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t23 & 2147483647U);
    t25 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t25 & 2147483647U);
    t44 = (t0 + 2088);
    t50 = (t44 + 56U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t54 = (t51 + 4);
    t26 = *((unsigned int *)t51);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t52) = t28;
    t29 = *((unsigned int *)t54);
    t30 = (t29 >> 31);
    t31 = (t30 & 1);
    *((unsigned int *)t53) = t31;
    xsi_vlogtype_concat(t19, 32, 32, 2U, t52, 1, t20, 31);
    t55 = (t0 + 2088);
    xsi_vlogvar_assign_value(t55, t19, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB58;

}

static void Always_67_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);

LAB14:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(68, ng0);

LAB13:    xsi_set_current_line(69, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

}


extern void work_m_00000000002675280285_2725559894_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Always_67_1};
	xsi_register_didat("work_m_00000000002675280285_2725559894", "isim/datapath_tb_isim_beh.exe.sim/work/m_00000000002675280285_2725559894.didat");
	xsi_register_executes(pe);
}
