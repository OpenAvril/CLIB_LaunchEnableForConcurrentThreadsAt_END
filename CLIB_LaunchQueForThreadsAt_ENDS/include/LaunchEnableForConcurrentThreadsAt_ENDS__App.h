#ifndef CLIB_LaunchEnableForConcurrentThreadsAt_ENDS__App_LaunchEnableForConcurrentThreadsAt_ENDS__App_H
#define CLIB_LaunchEnableForConcurrentThreadsAt_ENDS__App_LaunchEnableForConcurrentThreadsAt_ENDS__App_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__App__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__Execute.h"
#include <cstdint>
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS__App {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS__App();
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS__App();
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__thread_Start(class LaunchEnableForConcurrentThreadsAt_ENDS__Framework* obj, uint8_t concurrentThreadID);
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS__thread_End(class LaunchEnableForConcurrentThreadsAt_ENDS__Framework* obj, uint8_t concurrentThreadID);
        class LaunchEnableForConcurrentThreadsAt_ENDS__App__Control* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control();
        class LaunchEnableForConcurrentThreadsAt_ENDS__Execute* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
        void dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        void dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        void dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        static void stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        static void stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        static void stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
    private:
        static class LaunchEnableForConcurrentThreadsAt_ENDS__App__Control* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Control;
        static class LaunchEnableForConcurrentThreadsAt_ENDS__Execute* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_ENDS__App__Ececute;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
        static class LaunchEnableForConcurrentThreadsAt_ENDS__App__Control* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__App__WriteEnable_Control();
        static class LaunchEnableForConcurrentThreadsAt_ENDS__Execute* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS__Execute();
    };
}
#endif