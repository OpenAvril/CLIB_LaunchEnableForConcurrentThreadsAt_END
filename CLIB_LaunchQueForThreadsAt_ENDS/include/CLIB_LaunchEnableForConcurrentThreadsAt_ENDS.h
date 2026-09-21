#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_H
extern "C" {
    namespace CLIBLaunchQueAtENDS {
        class CLIB_LaunchEnableForConcurrentThreadsAt_ENDS {
        public:
            static void* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_FUNCT_generate_Program();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_FUNCT_request_Wait_launch(unsigned char* bytes);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_FUNCT_terminate_Progaram();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_FUNCT_thread_End(unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_get_coreId_To_launch();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_get_Flag_Active();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_get_Flag_Idle();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_get_FLAG_isPGM_INSTANTIATED();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_get_State_launchBit();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char* byteBool);
        private:
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
            static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
            static bool* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED();
        };
    }
}
#endif