#ifndef CLIB_lqClusterAccess_FRAMEWORK_H
#define CLIB_lqClusterAccess_FRAMEWORK_H
#include "../include/lqClusterAccess_Framework_App.h"
#include "../include/lqClusterAccess_Framework_Global.h"
namespace wq {
    class lqClusterAccess_Framework {
    public:
        lqClusterAccess_Framework(uint8_t threadId);
        virtual ~lqClusterAccess_Framework();
        void dyn_CLASS_create_lqClusterAccess_Architecture(uint8_t threadId);
        void dyn_CLASS_create_lqClusterAccess_Global_and_Settings(uint8_t threadId);
        class lqClusterAccess_Framework_App* dyn_CLASS_get_ptr_lqClusterAccess_App(uint8_t threadId);
        class lqClusterAccess_Framework_Global* dyn_CLASS_get_ptr_lqClusterAccess_Global(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_lqClusterAccess_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_lqClusterAccess_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(uint8_t threadId);
    private:
        static class lqClusterAccess_Framework_App* _stat_CLASS_get_ptr_lqClusterAccess_Framework_App;
        static class lqClusterAccess_Framework_Global* _stat_CLASS_ptr_lqClusterAccess_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_lqClusterAccess_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_lqClusterAccess_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_lqClusterAccess_App(uint8_t threadId);
        static void pr_stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(uint8_t threadId);
        static class lqClusterAccess_Framework_App* stat_CLASS_get_ptr_lqClusterAccess_App(uint8_t threadId);
        static class lqClusterAccess_Framework_Global* stat_CLASS_get_ptr_lqClusterAccess_Global(uint8_t threadId);
    };
}
#endif