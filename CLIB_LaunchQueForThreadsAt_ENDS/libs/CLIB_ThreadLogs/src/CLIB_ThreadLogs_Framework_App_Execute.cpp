#include "../include/CLIB_ThreadLogs_Framework_App_Execute.h"
#include "../libs/CLIB_WriteQueForThreadsAt_DataCluster/include/ClusterAccess.h"
#include <iostream>

#include "CLIB_ThreadLogs_Framework_Global.h"
void* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_DataCluster;
// public.
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::~CLIB_ThreadLogs_Framework_App_Execute() {
        delete _stat_PGM_CLIB_WriteQueForThreadsAt_DataCluster;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId);
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_DataCluster(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        const uint8_t* dataClusterId = new uint8_t(0);
        stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_DataCluster(threadId, *dataClusterId);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
// private.
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_DataCluster(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
        _stat_PGM_CLIB_WriteQueForThreadsAt_DataCluster = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_DataCluster(uint8_t threadId, uint8_t dataClusterId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
        std::byte* MAX_NUMBER_OF_DATA_CLUSTERS = new std::byte();
        std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY = new std::list<std::byte>;
        *MAX_NUMBER_OF_DATA_CLUSTERS = static_cast<std::byte>(1);
        MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->resize(static_cast<uint8_t>(*MAX_NUMBER_OF_DATA_CLUSTERS));
        MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->assign(0, static_cast<std::byte>(4));
        _stat_PGM_CLIB_WriteQueForThreadsAt_DataCluster = wq::ClusterAccess::generateHandles(threadId, *MAX_NUMBER_OF_DATA_CLUSTERS, *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        const uint8_t* dataClusterId = new uint8_t(0);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        unsigned char* bytes_DEFAULT = CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, 255);
        //wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program();
        unsigned char* tempA1 =  wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId, *dataClusterId);
        wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_terminate_Program(threadId, *dataClusterId);
        wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(threadId, *dataClusterId, bytes_DEFAULT);
        wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(threadId, *dataClusterId, bytes_DEFAULT);
        std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_get_ptr_WriteQueForThreadsAt_WriteQue_DataCluster(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: <= PGM : stat_PGM_get_ptr_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
        return _stat_PGM_CLIB_WriteQueForThreadsAt_DataCluster;
    }