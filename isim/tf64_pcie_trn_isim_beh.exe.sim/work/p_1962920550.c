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
extern char *IEEE_P_2592010699;



char *work_p_1962920550_sub_13920297062405826100_3538083707(char *t1, char *t2, char *t3, char *t4)
{
    char t6[24];
    char t31[16];
    char t33[16];
    char t38[16];
    char t50[16];
    char t52[16];
    char t66[16];
    char t68[16];
    char *t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    char *t39;
    int t40;
    int t41;
    char *t42;
    int t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    int t57;
    char *t58;
    int t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    char *t88;
    int t89;
    char *t90;
    int t91;
    char *t92;
    char *t93;
    int t94;
    unsigned int t95;

LAB0:    t7 = (t6 + 4U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 12U);
    *((char **)t9) = t4;
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t11 - 7);
    t13 = (t4 + 4U);
    t14 = *((int *)t13);
    t15 = (t4 + 8U);
    t16 = *((int *)t15);
    xsi_vhdl_check_range_of_slice(t11, t14, t16, 7, 0, -1);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t19 = (t3 + t18);
    t20 = (t4 + 0U);
    t21 = *((int *)t20);
    t22 = (t21 - 15);
    t23 = (t4 + 4U);
    t24 = *((int *)t23);
    t25 = (t4 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t21, t24, t26, 15, 8, -1);
    t27 = (t22 * 1U);
    t28 = (0 + t27);
    t29 = (t3 + t28);
    t32 = ((IEEE_P_2592010699) + 4000);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 7;
    t35 = (t34 + 4U);
    *((int *)t35) = 0;
    t35 = (t34 + 8U);
    *((int *)t35) = -1;
    t36 = (0 - 7);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t35 = (t38 + 0U);
    t39 = (t35 + 0U);
    *((int *)t39) = 15;
    t39 = (t35 + 4U);
    *((int *)t39) = 8;
    t39 = (t35 + 8U);
    *((int *)t39) = -1;
    t40 = (8 - 15);
    t37 = (t40 * -1);
    t37 = (t37 + 1);
    t39 = (t35 + 12U);
    *((unsigned int *)t39) = t37;
    t30 = xsi_base_array_concat(t30, t31, t32, (char)97, t19, t33, (char)97, t29, t38, (char)101);
    t39 = (t4 + 0U);
    t41 = *((int *)t39);
    t37 = (t41 - 23);
    t42 = (t4 + 4U);
    t43 = *((int *)t42);
    t44 = (t4 + 8U);
    t45 = *((int *)t44);
    xsi_vhdl_check_range_of_slice(t41, t43, t45, 23, 16, -1);
    t46 = (t37 * 1U);
    t47 = (0 + t46);
    t48 = (t3 + t47);
    t51 = ((IEEE_P_2592010699) + 4000);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 23;
    t54 = (t53 + 4U);
    *((int *)t54) = 16;
    t54 = (t53 + 8U);
    *((int *)t54) = -1;
    t55 = (16 - 23);
    t56 = (t55 * -1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t30, t31, (char)97, t48, t52, (char)101);
    t54 = (t4 + 0U);
    t57 = *((int *)t54);
    t56 = (t57 - 31);
    t58 = (t4 + 4U);
    t59 = *((int *)t58);
    t60 = (t4 + 8U);
    t61 = *((int *)t60);
    xsi_vhdl_check_range_of_slice(t57, t59, t61, 31, 24, -1);
    t62 = (t56 * 1U);
    t63 = (0 + t62);
    t64 = (t3 + t63);
    t67 = ((IEEE_P_2592010699) + 4000);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 31;
    t70 = (t69 + 4U);
    *((int *)t70) = 24;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t71 = (24 - 31);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t72;
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t49, t50, (char)97, t64, t68, (char)101);
    t73 = (0 - 7);
    t72 = (t73 * -1);
    t72 = (t72 + 1);
    t74 = (1U * t72);
    t75 = (8 - 15);
    t76 = (t75 * -1);
    t76 = (t76 + 1);
    t77 = (1U * t76);
    t78 = (t74 + t77);
    t79 = (16 - 23);
    t80 = (t79 * -1);
    t80 = (t80 + 1);
    t81 = (1U * t80);
    t82 = (t78 + t81);
    t83 = (24 - 31);
    t84 = (t83 * -1);
    t84 = (t84 + 1);
    t85 = (1U * t84);
    t86 = (t82 + t85);
    t0 = xsi_get_transient_memory(t86);
    memcpy(t0, t65, t86);
    t70 = (t66 + 0U);
    t87 = *((int *)t70);
    t88 = (t66 + 4U);
    t89 = *((int *)t88);
    t90 = (t66 + 8U);
    t91 = *((int *)t90);
    t92 = (t2 + 0U);
    t93 = (t92 + 0U);
    *((int *)t93) = t87;
    t93 = (t92 + 4U);
    *((int *)t93) = t89;
    t93 = (t92 + 8U);
    *((int *)t93) = t91;
    t94 = (t89 - t87);
    t95 = (t94 * t91);
    t95 = (t95 + 1);
    t93 = (t92 + 12U);
    *((unsigned int *)t93) = t95;

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *work_p_1962920550_sub_13920297062405936089_3538083707(char *t1, char *t2, char *t3)
{
    char t5[24];
    char t6[16];
    char t25[16];
    char t27[16];
    char t32[16];
    char t40[16];
    char t42[16];
    char t52[16];
    char t54[16];
    char t64[16];
    char t66[16];
    char t76[16];
    char t78[16];
    char t88[16];
    char t90[16];
    char t100[16];
    char t102[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t53;
    char *t55;
    char *t56;
    int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t65;
    char *t67;
    char *t68;
    int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t77;
    char *t79;
    char *t80;
    int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t91;
    char *t92;
    int t93;
    unsigned int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t101;
    char *t103;
    char *t104;
    int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    char *t138;
    int t139;
    char *t140;
    int t141;
    char *t142;
    char *t143;
    int t144;
    unsigned int t145;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 63;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 63);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t5 + 4U);
    t11 = (t3 != 0);
    if (t11 == 1)
        goto LAB3;

LAB2:    t12 = (t5 + 12U);
    *((char **)t12) = t6;
    t13 = (t6 + 0U);
    t14 = *((int *)t13);
    t10 = (t14 - 39);
    t15 = (t10 * 1U);
    t16 = (0 + t15);
    t17 = (t3 + t16);
    t18 = (t6 + 0U);
    t19 = *((int *)t18);
    t20 = (t19 - 47);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t23 = (t3 + t22);
    t26 = ((IEEE_P_2592010699) + 4000);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 39;
    t29 = (t28 + 4U);
    *((int *)t29) = 32;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t30 = (32 - 39);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t32 + 0U);
    t33 = (t29 + 0U);
    *((int *)t33) = 47;
    t33 = (t29 + 4U);
    *((int *)t33) = 40;
    t33 = (t29 + 8U);
    *((int *)t33) = -1;
    t34 = (40 - 47);
    t31 = (t34 * -1);
    t31 = (t31 + 1);
    t33 = (t29 + 12U);
    *((unsigned int *)t33) = t31;
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t17, t27, (char)97, t23, t32, (char)101);
    t33 = (t6 + 0U);
    t35 = *((int *)t33);
    t31 = (t35 - 55);
    t36 = (t31 * 1U);
    t37 = (0 + t36);
    t38 = (t3 + t37);
    t41 = ((IEEE_P_2592010699) + 4000);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 55;
    t44 = (t43 + 4U);
    *((int *)t44) = 48;
    t44 = (t43 + 8U);
    *((int *)t44) = -1;
    t45 = (48 - 55);
    t46 = (t45 * -1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t24, t25, (char)97, t38, t42, (char)101);
    t44 = (t6 + 0U);
    t47 = *((int *)t44);
    t46 = (t47 - 63);
    t48 = (t46 * 1U);
    t49 = (0 + t48);
    t50 = (t3 + t49);
    t53 = ((IEEE_P_2592010699) + 4000);
    t55 = (t54 + 0U);
    t56 = (t55 + 0U);
    *((int *)t56) = 63;
    t56 = (t55 + 4U);
    *((int *)t56) = 56;
    t56 = (t55 + 8U);
    *((int *)t56) = -1;
    t57 = (56 - 63);
    t58 = (t57 * -1);
    t58 = (t58 + 1);
    t56 = (t55 + 12U);
    *((unsigned int *)t56) = t58;
    t51 = xsi_base_array_concat(t51, t52, t53, (char)97, t39, t40, (char)97, t50, t54, (char)101);
    t56 = (t6 + 0U);
    t59 = *((int *)t56);
    t58 = (t59 - 7);
    t60 = (t58 * 1U);
    t61 = (0 + t60);
    t62 = (t3 + t61);
    t65 = ((IEEE_P_2592010699) + 4000);
    t67 = (t66 + 0U);
    t68 = (t67 + 0U);
    *((int *)t68) = 7;
    t68 = (t67 + 4U);
    *((int *)t68) = 0;
    t68 = (t67 + 8U);
    *((int *)t68) = -1;
    t69 = (0 - 7);
    t70 = (t69 * -1);
    t70 = (t70 + 1);
    t68 = (t67 + 12U);
    *((unsigned int *)t68) = t70;
    t63 = xsi_base_array_concat(t63, t64, t65, (char)97, t51, t52, (char)97, t62, t66, (char)101);
    t68 = (t6 + 0U);
    t71 = *((int *)t68);
    t70 = (t71 - 15);
    t72 = (t70 * 1U);
    t73 = (0 + t72);
    t74 = (t3 + t73);
    t77 = ((IEEE_P_2592010699) + 4000);
    t79 = (t78 + 0U);
    t80 = (t79 + 0U);
    *((int *)t80) = 15;
    t80 = (t79 + 4U);
    *((int *)t80) = 8;
    t80 = (t79 + 8U);
    *((int *)t80) = -1;
    t81 = (8 - 15);
    t82 = (t81 * -1);
    t82 = (t82 + 1);
    t80 = (t79 + 12U);
    *((unsigned int *)t80) = t82;
    t75 = xsi_base_array_concat(t75, t76, t77, (char)97, t63, t64, (char)97, t74, t78, (char)101);
    t80 = (t6 + 0U);
    t83 = *((int *)t80);
    t82 = (t83 - 23);
    t84 = (t82 * 1U);
    t85 = (0 + t84);
    t86 = (t3 + t85);
    t89 = ((IEEE_P_2592010699) + 4000);
    t91 = (t90 + 0U);
    t92 = (t91 + 0U);
    *((int *)t92) = 23;
    t92 = (t91 + 4U);
    *((int *)t92) = 16;
    t92 = (t91 + 8U);
    *((int *)t92) = -1;
    t93 = (16 - 23);
    t94 = (t93 * -1);
    t94 = (t94 + 1);
    t92 = (t91 + 12U);
    *((unsigned int *)t92) = t94;
    t87 = xsi_base_array_concat(t87, t88, t89, (char)97, t75, t76, (char)97, t86, t90, (char)101);
    t92 = (t6 + 0U);
    t95 = *((int *)t92);
    t94 = (t95 - 31);
    t96 = (t94 * 1U);
    t97 = (0 + t96);
    t98 = (t3 + t97);
    t101 = ((IEEE_P_2592010699) + 4000);
    t103 = (t102 + 0U);
    t104 = (t103 + 0U);
    *((int *)t104) = 31;
    t104 = (t103 + 4U);
    *((int *)t104) = 24;
    t104 = (t103 + 8U);
    *((int *)t104) = -1;
    t105 = (24 - 31);
    t106 = (t105 * -1);
    t106 = (t106 + 1);
    t104 = (t103 + 12U);
    *((unsigned int *)t104) = t106;
    t99 = xsi_base_array_concat(t99, t100, t101, (char)97, t87, t88, (char)97, t98, t102, (char)101);
    t107 = (32 - 39);
    t106 = (t107 * -1);
    t106 = (t106 + 1);
    t108 = (1U * t106);
    t109 = (40 - 47);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t111 = (1U * t110);
    t112 = (t108 + t111);
    t113 = (48 - 55);
    t114 = (t113 * -1);
    t114 = (t114 + 1);
    t115 = (1U * t114);
    t116 = (t112 + t115);
    t117 = (56 - 63);
    t118 = (t117 * -1);
    t118 = (t118 + 1);
    t119 = (1U * t118);
    t120 = (t116 + t119);
    t121 = (0 - 7);
    t122 = (t121 * -1);
    t122 = (t122 + 1);
    t123 = (1U * t122);
    t124 = (t120 + t123);
    t125 = (8 - 15);
    t126 = (t125 * -1);
    t126 = (t126 + 1);
    t127 = (1U * t126);
    t128 = (t124 + t127);
    t129 = (16 - 23);
    t130 = (t129 * -1);
    t130 = (t130 + 1);
    t131 = (1U * t130);
    t132 = (t128 + t131);
    t133 = (24 - 31);
    t134 = (t133 * -1);
    t134 = (t134 + 1);
    t135 = (1U * t134);
    t136 = (t132 + t135);
    t0 = xsi_get_transient_memory(t136);
    memcpy(t0, t99, t136);
    t104 = (t100 + 0U);
    t137 = *((int *)t104);
    t138 = (t100 + 4U);
    t139 = *((int *)t138);
    t140 = (t100 + 8U);
    t141 = *((int *)t140);
    t142 = (t2 + 0U);
    t143 = (t142 + 0U);
    *((int *)t143) = t137;
    t143 = (t142 + 4U);
    *((int *)t143) = t139;
    t143 = (t142 + 8U);
    *((int *)t143) = t141;
    t144 = (t139 - t137);
    t145 = (t144 * t141);
    t145 = (t145 + 1);
    t143 = (t142 + 12U);
    *((unsigned int *)t143) = t145;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}


extern void work_p_1962920550_init()
{
	static char *se[] = {(void *)work_p_1962920550_sub_13920297062405826100_3538083707,(void *)work_p_1962920550_sub_13920297062405936089_3538083707};
	xsi_register_didat("work_p_1962920550", "isim/tf64_pcie_trn_isim_beh.exe.sim/work/p_1962920550.didat");
	xsi_register_subprogram_executes(se);
}
