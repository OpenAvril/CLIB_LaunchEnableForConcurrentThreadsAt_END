#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__App__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__Framework.h"
#include <iostream>
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App__Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control;
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Ececute;
// public.
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::LaunchEnableForConcurrentThreadsAt_ENDS__App() {
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::~LaunchEnableForConcurrentThreadsAt_ENDS__App() {
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Ececute;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__thread_Start(LaunchEnableForConcurrentThreadsAt_ENDS__Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Global__ptr_FLAG_thread_2STATE_ACTIVE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Global__number_Implemented_Threads());
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__thread_End(LaunchEnableForConcurrentThreadsAt_ENDS__Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS__Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Global__ptr_FLAG_thread_2STATE_IDLE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS__Global__number_Implemented_Threads());
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App__Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control();
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__Execute() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App() {
	    std::cout << "entered dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS__App() {
	    std::cout << "entered dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App() {
	    std::cout << "entered dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__App() {
        std::cout << "entered stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
        std::cout << "exiting stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App() {
        std::cout << "entered stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
        std::cout << "exiting stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App() {
        std::cout << "entered stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
        std::cout << "exiting stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App()." << std::endl;
    }
// private.
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control = nullptr;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Ececute = nullptr;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App__Control();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control() == nullptr) { }
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Ececute = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__Execute() == nullptr) { }
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App__Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control;
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__Execute() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Ececute;
    }