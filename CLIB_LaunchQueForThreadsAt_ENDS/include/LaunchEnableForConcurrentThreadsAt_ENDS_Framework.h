#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_ENDS_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Global.h"
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS_Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_ENDS_Global_and_Settings();
        class LaunchEnableForConcurrentThreadsAt_ENDS_App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        class LaunchEnableForConcurrentThreadsAt_ENDS_Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global();
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Global();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_ENDS_App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App;
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Global();
        static class LaunchEnableForConcurrentThreadsAt_ENDS_App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_App();
        static class LaunchEnableForConcurrentThreadsAt_ENDS_Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Global();
    };
};
#endif