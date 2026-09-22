#ifndef CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#define CLIB_LAUNCHQUEENDS_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework.h"
#include <array>
#include <cstdint>
using namespace CLIBLaunchQueAtENDS;
extern "C" {
    namespace lq {
        class Native {
        public:
            static void* generateHandle(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_terminate_Progaram(uint8_t threadId);
        private:
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
            static class CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
            static std::array<bool, 2>* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(uint8_t threadId);
        };
        class Control {
        public:
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_request_Wait_launch(uint8_t threadId, unsigned char* bytes);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_thread_End(uint8_t threadId, unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_coreId_To_launch(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_Active(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_Idle(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_State_launchBit(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesThreadId, unsigned char* byteBool);
        private:
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(uint8_t threadId);
            static class CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(uint8_t threadId);
            static std::array<bool, 10>* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(uint8_t threadId);
        };
    }
}
#endif