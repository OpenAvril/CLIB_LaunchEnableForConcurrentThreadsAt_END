#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global.h"
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS_Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        void dyn_CLASS_create_Architecture(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_and_Settings(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId);
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId);
    private:
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App;
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId);
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId);
    };
};
#endif