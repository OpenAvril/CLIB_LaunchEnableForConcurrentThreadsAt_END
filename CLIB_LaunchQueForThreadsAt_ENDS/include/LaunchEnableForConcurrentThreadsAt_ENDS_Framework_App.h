#ifndef CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_H
#define CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute.h"
#include <cstdint>
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App();
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadId);
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadId);
        class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(uint8_t threadId);
        class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        void dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        void dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        static void stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        static void stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId);
        static void stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    private:
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control;
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_WriteEnable_Control(uint8_t threadId);
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
    };
}
#endif