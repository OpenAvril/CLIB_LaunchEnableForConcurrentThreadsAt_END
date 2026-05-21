
#include "../include/LaunchEnableForConcurrentThreadsAt_Client.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Client_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Client_Global.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Client_Framework.h"
#include <iostream>
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Global* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::_stat_CLASS_ptr_Global;
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Control* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::_stat_CLASS_ptr_LaunchConcurrency_Control;
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::LaunchEnableForConcurrentThreadsAt_Client()
{
    boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Client();
    boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Client();
    boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client();
    boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Client();
}
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::~LaunchEnableForConcurrentThreadsAt_Client()
{
    delete _stat_CLASS_ptr_Global;
    delete _stat_CLASS_ptr_LaunchConcurrency_Control;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::app_thread_Start(LaunchEnableForConcurrentThreadsAt_Client_Framework* obj, uint8_t concurrentThreadID)
{
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Request(obj, concurrentThreadID);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Activate(obj);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::app_thread_Client(LaunchEnableForConcurrentThreadsAt_Client_Framework* obj, uint8_t concurrentThreadID)
{
    while (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_flag_praisinglaunch() == true)
    {

    }
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index());
    if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
    }
    else
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() + 1);

        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
        {
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Client(obj, concurrentThreadID);
    }
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;

	std::cout << "exiting boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
    stat_CLASS_boot1_DEFINE_Global();
    stat_CLASS_boot1_DEFINE_WriteEnable_Control();
	std::cout << "exiting boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
    stat_CLASS_boot3_INITIALISE_Global();
    stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
	std::cout << "exiting boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;

	std::cout << "exiting boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
    
	std::cout << "exiting boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;

	std::cout << "exiting boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;

	std::cout << "exiting boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Client()
{
	std::cout << "entered boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;

	std::cout << "exiting boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Client()." << std::endl;
}
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Global* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::dyn_CLASS_get_ptr_Global()
{
    return stat_CLASS_get_ptr_Global();
}
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Control* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::dyn_CLASS_get_ptr_LaunchConcurrency_Control()
{
    return stat_CLASS_get_ptr_LaunchConcurrency_Control();
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::stat_CLASS_boot1_DEFINE_Global()
{
    _stat_CLASS_ptr_Global = NULL;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = NULL;
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::stat_CLASS_boot3_INITIALISE_Global()
{
    _stat_CLASS_ptr_Global = new CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Global();
    while (stat_CLASS_get_ptr_Global() == NULL) { }
}
void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = new CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Control();
    while (stat_CLASS_get_ptr_LaunchConcurrency_Control() == NULL) { }
}
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Global* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::stat_CLASS_get_ptr_Global()
{
    return _stat_CLASS_ptr_Global;
}
CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client_Control* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client::stat_CLASS_get_ptr_LaunchConcurrency_Control()
{
	return _stat_CLASS_ptr_LaunchConcurrency_Control;
}