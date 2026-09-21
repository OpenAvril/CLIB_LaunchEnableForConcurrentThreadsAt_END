#ifndef CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_LaunchEnableForConcurrentThreadsAt_ENDS_App_H
#define CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_App_LaunchEnableForConcurrentThreadsAt_ENDS_App_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Execute.h"
#include <cstdint>
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS_App {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS_App();
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS_App();
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(class LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadID);
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(class LaunchEnableForConcurrentThreadsAt_ENDS_Framework* obj, uint8_t concurrentThreadID);
        class LaunchEnableForConcurrentThreadsAt_ENDS_App_Control* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control();
        class LaunchEnableForConcurrentThreadsAt_ENDS_Execute* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
        void dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        void dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        void dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        static void stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        static void stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        static void stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
    private:
        static class LaunchEnableForConcurrentThreadsAt_ENDS_App_Control* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Control;
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Execute* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
        static class LaunchEnableForConcurrentThreadsAt_ENDS_App_Control* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_App_WriteEnable_Control();
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Execute* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Execute();
    };
}
#endif