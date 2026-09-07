#ifndef CLIB_LaunchEnableForConcurrentThreadsAt_END__App_LaunchEnableForConcurrentThreadsAt_END__App_H
#define CLIB_LaunchEnableForConcurrentThreadsAt_END__App_LaunchEnableForConcurrentThreadsAt_END__App_H
#include "../include/LaunchEnableForConcurrentThreadsAt_END__App__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_END__Execute.h"
#include <cstdint>
namespace CLIBLaunchQueAtEND {
    class LaunchEnableForConcurrentThreadsAt_END__App {
    public:
        LaunchEnableForConcurrentThreadsAt_END__App();
        virtual ~LaunchEnableForConcurrentThreadsAt_END__App();
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_END__thread_Start(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t concurrentThreadID);
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_END__thread_End(class LaunchEnableForConcurrentThreadsAt_END__Framework* obj, uint8_t concurrentThreadID);
        class LaunchEnableForConcurrentThreadsAt_END__App__Control* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__Control();
        class LaunchEnableForConcurrentThreadsAt_END__Execute* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__Execute();
        void dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App();
        void dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__App();
        void dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App();
        static void stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__App();
        static void stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App();
        static void stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App();
    private:
        static class LaunchEnableForConcurrentThreadsAt_END__App__Control* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Control;
        static class LaunchEnableForConcurrentThreadsAt_END__Execute* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_END__App__Ececute;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__Execute();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Execute();
        static class LaunchEnableForConcurrentThreadsAt_END__App__Control* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__App__WriteEnable_Control();
        static class LaunchEnableForConcurrentThreadsAt_END__Execute* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_END__Execute();
    };
}
#endif