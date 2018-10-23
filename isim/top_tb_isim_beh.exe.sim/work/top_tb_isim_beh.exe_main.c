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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002062825992_4196211228_init();
    work_m_00000000000257465540_3598138731_init();
    work_m_00000000003748813356_4286724315_init();
    work_m_00000000002464432566_3566486687_init();
    work_m_00000000001296686433_3823007873_init();
    work_m_00000000003147614700_3115858369_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003147614700_3115858369");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
