#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_LaunchEnableForConcurrentThreadsAt_ENDS__Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_LaunchEnableForConcurrentThreadsAt_ENDS__Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS__Global.h"
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS__Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_ENDS_Global_and_Settings();
        class LaunchEnableForConcurrentThreadsAt_ENDS__App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        class LaunchEnableForConcurrentThreadsAt_ENDS__Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global();
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Global();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS__Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_ENDS__App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Framework__App;
        static class LaunchEnableForConcurrentThreadsAt_ENDS__Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS__Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS__Global();
        static class LaunchEnableForConcurrentThreadsAt_ENDS__App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__App();
        static class LaunchEnableForConcurrentThreadsAt_ENDS__Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS__Global();
    };
};
#endif