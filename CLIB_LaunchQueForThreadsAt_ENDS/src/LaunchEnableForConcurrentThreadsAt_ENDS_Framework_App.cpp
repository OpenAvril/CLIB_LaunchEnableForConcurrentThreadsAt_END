#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework.h"
#include <iostream>
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App_Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control;
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Ececute;
// public.
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::LaunchEnableForConcurrentThreadsAt_ENDS_App() {
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::~LaunchEnableForConcurrentThreadsAt_ENDS_App() {
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Ececute;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Global_ptr_FLAG_thread_2STATE_ACTIVE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Global_number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Global_number_Implemented_Threads());
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Global_ptr_FLAG_thread_2STATE_IDLE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Global_number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Global_number_Implemented_Threads());
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App_Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control();
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Execute() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App() {
	    std::cout << "entered dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_App() {
	    std::cout << "entered dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App() {
	    std::cout << "entered dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_App() {
        std::cout << "entered stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
        std::cout << "exiting stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App() {
        std::cout << "entered stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
        std::cout << "exiting stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App() {
        std::cout << "entered stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
        std::cout << "exiting stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App()." << std::endl;
    }
// private.
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control = nullptr;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Ececute = nullptr;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App_Control();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control() == nullptr) { }
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Ececute = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Execute() == nullptr) { }
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App_Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control;
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Execute() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Ececute;
    }