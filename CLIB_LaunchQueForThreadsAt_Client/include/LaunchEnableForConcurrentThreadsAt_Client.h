#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Client_LAUNCHENABLEFORCONCURRENTTHREADSAT_Client_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Client_LAUNCHENABLEFORCONCURRENTTHREADSAT_Client_H
#include <cstdint>
namespace CLIBLaunchQueAtClient
{
    class LaunchEnableForConcurrentThreadsAt_Client
    {
    public:
        LaunchEnableForConcurrentThreadsAt_Client();
        virtual ~LaunchEnableForConcurrentThreadsAt_Client();
        void app_thread_Start(class LaunchEnableForConcurrentThreadsAt_Client_Framework* obj, uint8_t concurrentThreadID);
        void app_thread_Client(class LaunchEnableForConcurrentThreadsAt_Client_Framework* obj, uint8_t concurrentThreadID);
        static void boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Client();
        static void boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Client();
        static void boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client();
        static void boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Client();
        void boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Client();
        void boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client();
        void boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client();
        void boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Client();
        class LaunchEnableForConcurrentThreadsAt_Client_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_Client_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Client_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_Client_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
        static LaunchEnableForConcurrentThreadsAt_Client_Global* stat_CLASS_get_ptr_Global();
        static LaunchEnableForConcurrentThreadsAt_Client_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}
#endif
