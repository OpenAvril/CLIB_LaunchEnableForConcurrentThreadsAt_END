#ifndef CLIB_ClusterAccess_FRAMEWORK_APP_H
#define CLIB_ClusterAccess_FRAMEWORK_APP_H
#include "../include/ClusterAccess_Framework_App_Control.h"
#include <cstdint>
namespace wq {
    class ClusterAccess_Framework_App {
    public:
        ClusterAccess_Framework_App(uint8_t threadId);
        virtual ~ClusterAccess_Framework_App();
        void dyn_APP_FUNCT_write_End(uint8_t threadId, class ClusterAccess_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(uint8_t threadId, class ClusterAccess_Framework* obj, uint8_t coreId);
        class ClusterAccess_Framework_App_Control* dyn_CLASS_get_ptr_ClusterAccess_App_Control(uint8_t threadId);
        void REG_boot1_DEFINE_ClusterAccess_App(uint8_t threadId, class ClusterAccess_Framework* obj);
        void REG_boot2_SUBSTANTIATE_ClusterAccess_App(uint8_t threadId, class ClusterAccess_Framework* obj);
        void REG_boot3_INITIALISE_ClusterAccess_App(uint8_t threadId, class ClusterAccess_Framework* obj);
        static void CLASS_boot0_DECLARE_ClusterAccess_App(uint8_t threadId);
        static void CLASS_boot1_DEFINE_ClusterAccess_App(uint8_t threadId);
        static void CLASS_boot3_INITIALISE_ClusterAccess_App(uint8_t threadId);
        static void REG_boot0_DECLARE_ClusterAccess_App(uint8_t threadId);
    private:
        static class ClusterAccess_Framework_App_Control* _stat_CLASS_ptr_ClusterAccess_App_Control;
        static void stat_CLASS_boot1_DEFINE_ClusterAccess_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_ClusterAccess_App_Control(uint8_t threadId);
        static class ClusterAccess_Framework_App_Control* stat_CLASS_get_ptr_ClusterAccess_App_Control(uint8_t threadId);
    };
}
#endif
