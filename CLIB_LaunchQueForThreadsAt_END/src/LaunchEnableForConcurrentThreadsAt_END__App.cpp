#include "../include/LaunchEnableForConcurrentThreadsAt_END__App.h"
#include "../CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode/CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode.h"
#include <iostream>
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Control;
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__Execute* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Ececute;
// public.
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::LaunchEnableForConcurrentThreadsAt_END__App() {
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App();
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App();
    }
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::~LaunchEnableForConcurrentThreadsAt_END__App() {
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Ececute;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_END__thread_Start(LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t concurrentThreadID) {
        CLIBWriteQueAtServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App_FUNCT_write_Start(LaunchEnableForConcurrentThreadsAt_END__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_END__Global__uint8_t_To_ByteArray(concurrentThreadID));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_ACTIVE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        CLIBWriteQueAtServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App_FUNCT_write_End(LaunchEnableForConcurrentThreadsAt_END__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_END__Global__uint8_t_To_ByteArray(concurrentThreadID));
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_END__thread_End(LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t concurrentThreadID) {
        CLIBWriteQueAtServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App_FUNCT_write_Start(LaunchEnableForConcurrentThreadsAt_END__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_END__Global__uint8_t_To_ByteArray(concurrentThreadID));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_IDLE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        CLIBWriteQueAtServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode::CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App_FUNCT_write_End(LaunchEnableForConcurrentThreadsAt_END__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_END__Global__uint8_t_To_ByteArray(concurrentThreadID));
    }
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control();
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App() {
	    std::cout << "entered boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
	    std::cout << "exiting boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__App() {
	    std::cout << "entered boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
	    std::cout << "exiting boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App() {
	    std::cout << "entered boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
	    std::cout << "exiting boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App() {
        std::cout << "entered boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
        std::cout << "exiting boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App() {
        std::cout << "entered boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__Execute();
        std::cout << "exiting boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App() {
        std::cout << "entered boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Execute();
        std::cout << "exiting boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    }
// private.
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Control = nullptr;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Ececute = nullptr;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Control = new CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control() == nullptr) { }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Ececute = new CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__Execute();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control() == nullptr) { }
    }
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__Execute* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__Execute() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Ececute;
    }