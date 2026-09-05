#include "../include/LaunchEnableForConcurrentThreadsAt_END__App__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_END__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_END__Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_END__Global.h"
#include <cstdint>
#include <iostream>
    std::list<uint64_t>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
    std::list<uint64_t>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
    std::list<bool>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
// public.
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control();
        stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control();
    }
    CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::~LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_SortQue(CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t number_Implemented_Threads) {
        for (uint8_t concurrentThreadId_A = 0; concurrentThreadId_A < number_Implemented_Threads - 2; concurrentThreadId_A++) {
            for (uint8_t concurrentThreadId_B = concurrentThreadId_A + 1; concurrentThreadId_B < number_Implemented_Threads - 1; concurrentThreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_ACTIVE()) {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_IDLE()) {
                        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_ShiftQueValues(obj, concurrentThreadId_A, concurrentThreadId_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_ACTIVE()) {
                        if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadId_A) > obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_ShiftQueValues(obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_IDLE()) {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__ptr_FLAG_thread_2STATE_IDLE()) {
                        if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadId_A) < obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_ShiftQueValues(obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
            }
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchQue_Update(CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t number_Implemented_Threads) {
        for (uint8_t index = 0; index < number_Implemented_Threads; index++) {
            switch (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(index)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(index, 0);
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(index, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(index) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(index, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(index) + 1);
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(index, 0);
                    break;
                }
                default: 
                    break;
            }
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        std::cout << "entered dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID();
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID();
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore();
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_for_Que_Of_CoreTolaunch();
        std::cout << "exiting dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__App__Control(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj) {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID(obj);
        std::cout << "testpoint: ALPHA." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID(obj);
        std::cout << "testpoint: BRAVO." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore(obj);
        std::cout << "testpoint: CHARLIE." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_for_Que_Of_CoreTolaunch(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        std::cout << "entered dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID();
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID();
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore();
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_for_Que_Of_CoreTolaunch();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
    uint64_t CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint64_t CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    bool CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    uint8_t CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newState;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrentThreadId;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        std::cout << "entered stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control() {
        std::cout << "entered stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App__Control()" << std::endl;
    }
// private.
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_END__App__Control__launchEnable_ShiftQueValues(CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B) {
        uint32_t* temp_Int = nullptr;
        uint8_t* temp_UnnsignedChar = nullptr;
        *temp_Int = UINT32_MAX;
        *temp_UnnsignedChar = UINT8_MAX;
        *temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B, *temp_Int);
        *temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B, *temp_Int);
        *temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B, *temp_UnnsignedChar);
        delete temp_Int;
        delete temp_UnnsignedChar;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID = nullptr;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID = nullptr;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_for_Que_Of_CoreTolaunch() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_for_Que_Of_CoreTolaunch = nullptr;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj) {
        std::cout << "testpoint: ALPHA - ALPHA." << std::endl;
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID = new std::list<uint64_t>();
        std::cout << "testpoint: ALPHA - BRAVO." << std::endl;
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID() == nullptr) {}
        std::cout << "testpoint: ALPHA - CHARLIE." << std::endl;
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->resize(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        std::cout << "testpoint: ALPHA - DELTA." << std::endl;
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->size(); index++) {
            std::cout << "testpoint: ALPHA - ECHO loop." << std::endl;
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "testpoint: ALPHA - FOXTROT." << std::endl;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID = new std::list<uint64_t>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->resize(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->resize(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
            std::advance(temp, index);
            *temp = true;
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_for_Que_Of_CoreTolaunch(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->resize(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_END__Global__number_Implemented_Threads());
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->begin();
            std::advance(temp, index);
            *temp = UINT8_MAX;
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
            std::advance(temp, index);
            *temp = false;
        }
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__ptr_list_for_Que_Of_CoreTolaunch() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->begin();
            std::advance(temp, index);
            *temp = static_cast<uint8_t>(index);
        }
    }
    std::list<uint64_t>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<uint64_t>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_END__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newState;
    }
    void CLIBLaunchQueAtEND::LaunchEnableForConcurrentThreadsAt_END__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_END__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_END__ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrentThreadId;
    }