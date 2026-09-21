#ifndef CLIB_LoggingThread_H
#define CLIB_LoggingThread_H
#include "../include/LoggingThread_Framework.h"
#include <array>
#include <cstdint>
#include <list>
using namespace writeQue;
extern "C" {
    namespace writeQue {
        class LoggingThread {
        public:
            static std::list<void*>* generateHandles(uint8_t threadId, std::byte MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte> MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
            static unsigned char* CLIB_LoggingThread_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId, uint8_t dataClusterId);
            static void CLIB_LoggingThread_App_FUNCT_terminate_Program(uint8_t threadId, uint8_t dataClusterId);
            static void CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes);
        private:
            static void* CLIB_LoggingThread_App_FUNCT_generate_Program(uint8_t threadId, uint8_t dataClusterId);
            static bool CLIB_LoggingThread_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
            static void CLIB_LoggingThread_stat_PGM_boot1_DEFINE_array_of_ptr_DataCluster_Framework(uint8_t threadId);
            static void CLIB_LoggingThread_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_DataCluster_Framework(uint8_t threadId);
            static void CLIB_LoggingThread_stat_PGM_boot3_INITIALISE_array_of_ptr_DataCluster_Framework(uint8_t threadId, std::byte MAX_NUMBER_OF_DATA_CLUSTERS);
            static void CLIB_LoggingThread_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static void CLIB_LoggingThread_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static std::array<bool, 5>* CLIB_LoggingThread_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static std::list<void*>* CLIB_LoggingThread_stat_PGM_get_array_of_ptr_DataCluster(uint8_t threadId);
            static class writeQue::LoggingThread_Framework* CLIB_LoggingThread_stat_PGM_get_ptr_DataCluster(uint8_t threadId, uint8_t dataClusterId);
        };
    }
}
#endif
