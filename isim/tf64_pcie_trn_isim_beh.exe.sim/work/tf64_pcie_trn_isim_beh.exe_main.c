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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *WORK_P_1962920550;
char *IEEE_P_3620187407;
char *UNISIM_P_3222816464;
char *IEEE_P_2717149903;
char *STD_TEXTIO;
char *UNISIM_P_0947159679;
char *IEEE_P_1367372525;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_01134461147037251260_3918560042_init();
    work_m_16541823861846354283_2073120511_init();
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_1962920550_init();
    unisim_p_0947159679_init();
    work_a_3957547837_3212880686_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    ieee_p_1242562249_init();
    unisim_a_1717296735_4086321779_init();
    unisim_a_2988077518_2751630626_init();
    unisim_a_0350208134_1521797606_init();
    unisim_a_1552978168_3127021579_init();
    unisim_a_2211589156_2274105955_init();
    unisim_a_2680519808_1064626918_init();
    unisim_a_3378150793_3307266578_init();
    unisim_a_1910905580_3307266578_init();
    unisim_a_3120128138_3752513572_init();
    unisim_a_2545276020_3752513572_init();
    unisim_a_3449702363_3752513572_init();
    unisim_a_4260287656_3676810390_init();
    unisim_a_1145277486_3676810390_init();
    unisim_a_1173348096_3676810390_init();
    unisim_a_0105042994_3676810390_init();
    unisim_a_4264168962_3676810390_init();
    unisim_a_2203725902_3676810390_init();
    unisim_a_1686195848_3676810390_init();
    unisim_a_3384037652_3676810390_init();
    unisim_a_2601622252_3672491681_init();
    unisim_a_4061581304_3672491681_init();
    unisim_a_1299783153_3672491681_init();
    unisim_a_1537588970_3672491681_init();
    unisim_a_1287325314_3672491681_init();
    unisim_a_2753725996_3634591992_init();
    unisim_a_3939638487_3634591992_init();
    unisim_a_0605070311_3634591992_init();
    unisim_a_1914855989_3634591992_init();
    unisim_a_0477301571_3634591992_init();
    unisim_a_3887248172_3634591992_init();
    unisim_a_3324992752_3634591992_init();
    unisim_a_3636338420_3634591992_init();
    unisim_a_0876970627_3634591992_init();
    unisim_a_2301618968_3634591992_init();
    unisim_a_2622885206_3731405331_init();
    unisim_a_0900199298_3731405331_init();
    unisim_a_3055263662_1392679692_init();
    work_a_3770368277_0632001823_init();
    work_a_0801372011_3212880686_init();
    work_a_0831953484_3212880686_init();
    work_a_1568067852_0632001823_init();
    work_a_2983369558_3212880686_init();
    work_a_2967974866_3212880686_init();
    work_a_3227574289_3212880686_init();
    work_a_1985438023_3212880686_init();
    work_a_3364376518_3212880686_init();
    work_a_0726315585_3212880686_init();
    work_a_0162384627_3212880686_init();
    work_a_2592518733_3212880686_init();
    unisim_a_1999830346_2124988481_init();
    unisim_a_3493333946_1375363856_init();
    unisim_a_2562466605_1496654361_init();
    unisim_a_2269815139_3403034321_init();
    unisim_a_1769350033_2693788048_init();
    work_a_0552005939_0632001823_init();
    work_a_2849313306_3212880686_init();
    work_a_2490483168_3212880686_init();
    work_a_2829900751_3212880686_init();
    work_a_1153333255_3212880686_init();


    xsi_register_tops("work_m_01134461147037251260_3918560042");
    xsi_register_tops("work_m_16541823861846354283_2073120511");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_1962920550 = xsi_get_engine_memory("work_p_1962920550");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
