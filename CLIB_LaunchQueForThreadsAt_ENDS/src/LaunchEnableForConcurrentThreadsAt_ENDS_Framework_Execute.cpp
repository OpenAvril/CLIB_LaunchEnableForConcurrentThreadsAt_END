#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework.h"
#include "../libs/CLIB_WriteQueForThreadsAt_DataCluster/include/ClusterAccess.h"
#include <iostream>
    std::list<void*>* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::_stat_PGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster;
// public.
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::~LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        delete _stat_PGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        auto byte_uint8_t = LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_uint8_t_To_ByteArray(threadId, 255);
        auto clusterId = new uint8_t(1);
        //wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueConditionCode_App_FUNCT_generate_Program(threadId);
        unsigned char* tempA0 = wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId, *clusterId);
        wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_terminate_Program(threadId, *clusterId);
        wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(threadId, *clusterId, byte_uint8_t);
        wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(threadId, *clusterId, byte_uint8_t);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)." << std::endl;
    }
// private.
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(threadId)." << std::endl;
        _stat_PGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(threadId)." << std::endl;
        auto* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY = new std::list<std::byte>();
        MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->resize(1);
        MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->assign(0, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        _stat_PGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster = wq::ClusterAccess::generateHandles(threadId, static_cast<std::byte>(0), *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(threadId)." << std::endl;
    }
    std::list<void*>* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute::stat_PGM_get_array_of_ptrPGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(uint8_t threadId) {

        return _stat_PGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster;
    }
