#include "../include/LaunchEnableForConcurrentThreadsAt_Client__App.h"
#include <iostream>
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App__Control* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Control;
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__Execute* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Ececute;
// public.
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::LaunchEnableForConcurrentThreadsAt_Client__App() {
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App();
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App();
    }
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::~LaunchEnableForConcurrentThreadsAt_Client__App() {
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Ececute;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Client__thread_Start(LaunchEnableForConcurrentThreadsAt_Client__Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Client__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Global__ptr_FLAG_thread_2STATE_ACTIVE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Client__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Client__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Global__number_Implemented_Threads());
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Client__thread_Client(LaunchEnableForConcurrentThreadsAt_Client__Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Client__Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Global__ptr_FLAG_thread_2STATE_IDLE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Client__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Client__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Client__Global__number_Implemented_Threads());
    }
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App__Control* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__Control() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control();
    }
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__Execute* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__Execute() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__Execute();
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App() {
	    std::cout << "entered dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client__App() {
	    std::cout << "entered dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App() {
	    std::cout << "entered dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__App() {
        std::cout << "entered stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
        std::cout << "exiting stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App() {
        std::cout << "entered stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__Execute();
        std::cout << "exiting stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App() {
        std::cout << "entered stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__Execute();
        std::cout << "exiting stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App()." << std::endl;
    }
// private.
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Control = nullptr;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Ececute = nullptr;
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Control = new CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App__Control();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control() == nullptr) { }
    }
    void CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Ececute = new CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__Execute();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__Execute() == nullptr) { }
    }
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App__Control* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__App__WriteEnable_Control() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Control;
    }
    CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__Execute* CLIBLaunchQueAtClient::LaunchEnableForConcurrentThreadsAt_Client__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Client__Execute() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Client__App__Ececute;
    }