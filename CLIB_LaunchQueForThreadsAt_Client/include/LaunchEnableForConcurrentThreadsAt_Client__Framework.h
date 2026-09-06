#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Client_LaunchEnableForConcurrentThreadsAt_Client__Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Client_LaunchEnableForConcurrentThreadsAt_Client__Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_Client__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Client__Global.h"
namespace CLIBLaunchQueAtClient {
    class LaunchEnableForConcurrentThreadsAt_Client__Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_Client__Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_Client__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Client_Global_and_Settings();
        class LaunchEnableForConcurrentThreadsAt_Client__App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App();
        class LaunchEnableForConcurrentThreadsAt_Client__Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global();
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__Global();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Client__Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Client__App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Framework__App;
        static class LaunchEnableForConcurrentThreadsAt_Client__Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Client__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Client__Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__App();
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Client__Global();
        static class LaunchEnableForConcurrentThreadsAt_Client__App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__App();
        static class LaunchEnableForConcurrentThreadsAt_Client__Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Client__Global();
    };
};
#endif