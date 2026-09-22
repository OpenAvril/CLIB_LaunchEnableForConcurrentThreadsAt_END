#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework.h"
#include <iostream>
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control;
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Ececute;
// public.
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId);
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId);
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId);
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::~LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Ececute;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(uint8_t threadId,LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, 0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control_launchQue_Update(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_number_Implemented_Threads(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control_launchEnable_SortQue(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_number_Implemented_Threads(threadId));
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(uint8_t threadId, LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control_launchQue_Update(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_number_Implemented_Threads(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control_launchEnable_SortQue(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_number_Implemented_Threads(threadId));
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(threadId)." << std::endl;
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)." << std::endl;
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(threadId);
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId);
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(threadId);
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(threadId);
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App : stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
    }
// private.
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(uint8_t threadId) {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control = nullptr;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Ececute = nullptr;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(uint8_t threadId) {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId);
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(threadId) == nullptr) { }
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Ececute = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId) == nullptr) { }
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(threadId)." << std::endl;
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control;
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Ececute;
    }