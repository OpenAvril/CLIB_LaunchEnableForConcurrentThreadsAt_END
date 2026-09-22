#ifndef CLIB_lqClusterAccess_FRAMEWORK_APP_H
#define CLIB_lqClusterAccess_FRAMEWORK_APP_H
#include "../include/lqClusterAccess_Framework_App_Control.h"
#include <cstdint>
namespace wq {
    class lqClusterAccess_Framework_App {
    public:
        lqClusterAccess_Framework_App(uint8_t threadId);
        virtual ~lqClusterAccess_Framework_App();
        void dyn_APP_FUNCT_write_End(uint8_t threadId, class lqClusterAccess_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(uint8_t threadId, class lqClusterAccess_Framework* obj, uint8_t coreId);
        class lqClusterAccess_Framework_App_Control* dyn_CLASS_get_ptr_lqClusterAccess_App_Control(uint8_t threadId);
        void REG_boot1_DEFINE_lqClusterAccess_App(uint8_t threadId, class lqClusterAccess_Framework* obj);
        void REG_boot2_SUBSTANTIATE_lqClusterAccess_App(uint8_t threadId, class lqClusterAccess_Framework* obj);
        void REG_boot3_INITIALISE_lqClusterAccess_App(uint8_t threadId, class lqClusterAccess_Framework* obj);
        static void CLASS_boot0_DECLARE_lqClusterAccess_App(uint8_t threadId);
        static void CLASS_boot1_DEFINE_lqClusterAccess_App(uint8_t threadId);
        static void CLASS_boot3_INITIALISE_lqClusterAccess_App(uint8_t threadId);
        static void REG_boot0_DECLARE_lqClusterAccess_App(uint8_t threadId);
    private:
        static class lqClusterAccess_Framework_App_Control* _stat_CLASS_ptr_lqClusterAccess_App_Control;
        static void stat_CLASS_boot1_DEFINE_lqClusterAccess_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_lqClusterAccess_App_Control(uint8_t threadId);
        static class lqClusterAccess_Framework_App_Control* stat_CLASS_get_ptr_lqClusterAccess_App_Control(uint8_t threadId);
    };
}
#endif
