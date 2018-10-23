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
static const char *ng0 = "C:/Users/152/Downloads/Lab 4/player.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {300U, 0U};
static unsigned int ng4[] = {100U, 0U};



static void Always_37_0(char *t0)
{
    char t6[8];
    char t17[8];
    char t28[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 3792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t36, t6, 8);

LAB12:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t2) == 0)
        goto LAB28;

LAB30:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB31:    memset(t17, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t22 = (t16 & t15);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t5) != 0)
        goto LAB34;

LAB35:    t13 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t13);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB36;

LAB37:    memcpy(t36, t17, 8);

LAB38:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t2) != 0)
        goto LAB51;

LAB52:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB53;

LAB54:    memcpy(t36, t6, 8);

LAB55:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t2) == 0)
        goto LAB71;

LAB73:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB74:    memset(t17, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t22 = (t16 & t15);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t5) != 0)
        goto LAB77;

LAB78:    t13 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t13);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB79;

LAB80:    memcpy(t36, t17, 8);

LAB81:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB89;

LAB90:
LAB91:
LAB69:
LAB48:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2680);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t21) == 0)
        goto LAB13;

LAB15:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB16:    memset(t28, 0, 8);
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB20:    t37 = *((unsigned int *)t6);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t6 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB19:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB21:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t6 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t6);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB23;

LAB24:    xsi_set_current_line(40, ng0);

LAB27:    xsi_set_current_line(41, ng0);
    t74 = ((char*)((ng1)));
    t75 = (t0 + 2680);
    xsi_vlogvar_assign_value(t75, t74, 0, 0, 1);
    goto LAB26;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t17) = 1;
    goto LAB35;

LAB34:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB35;

LAB36:    t18 = (t0 + 2680);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t28, 0, 8);
    t21 = (t20 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t20);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t21) != 0)
        goto LAB41;

LAB42:    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t17 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t28) = 1;
    goto LAB42;

LAB41:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB42;

LAB43:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t17 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t17);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB45;

LAB46:    xsi_set_current_line(44, ng0);
    t51 = ((char*)((ng2)));
    t68 = (t0 + 2680);
    xsi_vlogvar_assign_value(t68, t51, 0, 0, 1);
    goto LAB48;

LAB49:    *((unsigned int *)t6) = 1;
    goto LAB52;

LAB51:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB52;

LAB53:    t12 = (t0 + 2840);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    memset(t17, 0, 8);
    t19 = (t18 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t18);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t19) == 0)
        goto LAB56;

LAB58:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;

LAB59:    memset(t28, 0, 8);
    t21 = (t17 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t21) != 0)
        goto LAB62;

LAB63:    t37 = *((unsigned int *)t6);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t6 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB56:    *((unsigned int *)t17) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t28) = 1;
    goto LAB63;

LAB62:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB63;

LAB64:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t6 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t6);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB66;

LAB67:    xsi_set_current_line(46, ng0);

LAB70:    xsi_set_current_line(47, ng0);
    t51 = ((char*)((ng1)));
    t68 = (t0 + 2840);
    xsi_vlogvar_assign_value(t68, t51, 0, 0, 1);
    goto LAB69;

LAB71:    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t17) = 1;
    goto LAB78;

LAB77:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB78;

LAB79:    t18 = (t0 + 2840);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t28, 0, 8);
    t21 = (t20 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t20);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t21) != 0)
        goto LAB84;

LAB85:    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t17 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB81;

LAB82:    *((unsigned int *)t28) = 1;
    goto LAB85;

LAB84:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB85;

LAB86:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t17 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t17);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB88;

LAB89:    xsi_set_current_line(50, ng0);
    t51 = ((char*)((ng2)));
    t68 = (t0 + 2840);
    xsi_vlogvar_assign_value(t68, t51, 0, 0, 1);
    goto LAB91;

}

static void Always_54_1(char *t0)
{
    char t7[8];
    char t23[8];
    char t27[8];
    char t35[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4840);
    *((int *)t2) = 1;
    t3 = (t0 + 4040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t35, t7, 8);

LAB12:    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t5) != 0)
        goto LAB31;

LAB32:    t8 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB33;

LAB34:    memcpy(t35, t7, 8);

LAB35:    t49 = (t35 + 4);
    t68 = *((unsigned int *)t49);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB48;

LAB49:
LAB50:
LAB27:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 2360);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    t24 = (t21 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB13:    t25 = (t22 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB15;

LAB16:    memset(t27, 0, 8);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t28) != 0)
        goto LAB20;

LAB21:    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t7 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB12;

LAB14:    t26 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB16;

LAB18:    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB20:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB22:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t7 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t7);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);

LAB28:    xsi_set_current_line(59, ng0);
    t73 = (t0 + 2360);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = ((char*)((ng1)));
    memset(t77, 0, 8);
    xsi_vlog_unsigned_add(t77, 32, t75, 10, t76, 32);
    t78 = (t0 + 2360);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 10);
    goto LAB27;

LAB29:    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB31:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB33:    t14 = (t0 + 2360);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t20 = ((char*)((ng4)));
    memset(t23, 0, 8);
    t21 = (t19 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB37;

LAB36:    t22 = (t20 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t19) > *((unsigned int *)t20))
        goto LAB38;

LAB39:    memset(t27, 0, 8);
    t25 = (t23 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t25) != 0)
        goto LAB43;

LAB44:    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t28 = (t7 + 4);
    t34 = (t27 + 4);
    t39 = (t35 + 4);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t39);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t24 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t27) = 1;
    goto LAB44;

LAB43:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB44;

LAB45:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t35) = (t47 | t48);
    t40 = (t7 + 4);
    t41 = (t27 + 4);
    t51 = *((unsigned int *)t7);
    t52 = (~(t51));
    t53 = *((unsigned int *)t40);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t41);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t63 & t61);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB47;

LAB48:    xsi_set_current_line(62, ng0);

LAB51:    xsi_set_current_line(63, ng0);
    t50 = (t0 + 2360);
    t67 = (t50 + 56U);
    t73 = *((char **)t67);
    t74 = ((char*)((ng1)));
    memset(t77, 0, 8);
    xsi_vlog_unsigned_minus(t77, 32, t73, 10, t74, 32);
    t75 = (t0 + 2360);
    xsi_vlogvar_assign_value(t75, t77, 0, 0, 10);
    goto LAB50;

}

static void Cont_68_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 4856);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_69_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 4872);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003748813356_4286724315_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_54_1,(void *)Cont_68_2,(void *)Cont_69_3};
	xsi_register_didat("work_m_00000000003748813356_4286724315", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003748813356_4286724315.didat");
	xsi_register_executes(pe);
}
