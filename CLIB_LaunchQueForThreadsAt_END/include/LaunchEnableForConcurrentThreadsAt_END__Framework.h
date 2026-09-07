#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_END_LaunchEnableForConcurrentThreadsAt_END__Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_END_LaunchEnableForConcurrentThreadsAt_END__Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_END__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_END__Global.h"
namespace CLIBLaunchQueAtEND {
    class LaunchEnableForConcurrentThreadsAt_END__Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_END__Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_END__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_END_Global_and_Settings();
        class LaunchEnableForConcurrentThreadsAt_END__App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App();
        class LaunchEnableForConcurrentThreadsAt_END__Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global();
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Global();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_END__Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_END__App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Framework__App;
        static class LaunchEnableForConcurrentThreadsAt_END__Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_END__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_END__Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__App();
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_END__Global();
        static class LaunchEnableForConcurrentThreadsAt_END__App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__App();
        static class LaunchEnableForConcurrentThreadsAt_END__Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END__Global();
    };
};
#endif