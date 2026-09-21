#ifndef CLIB_LoggingThread_FRAMEWORK_APP_H
#define CLIB_LoggingThread_FRAMEWORK_APP_H
#include "../include/LoggingThread_Framework_App_Control.h"
#include <cstdint>
namespace writeQue {
    class LoggingThread_Framework_App {
    public:
        LoggingThread_Framework_App(uint8_t threadId);
        virtual ~LoggingThread_Framework_App();
        void dyn_APP_FUNCT_write_End(uint8_t threadId, class LoggingThread_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(uint8_t threadId, class LoggingThread_Framework* obj, uint8_t coreId);
        class LoggingThread_Framework_App_Control* dyn_CLASS_get_ptr_LoggingThread_App_Control(uint8_t threadId);
        void REG_boot1_DEFINE_LoggingThread_App(uint8_t threadId, class LoggingThread_Framework* obj);
        void REG_boot2_SUBSTANTIATE_LoggingThread_App(uint8_t threadId, class LoggingThread_Framework* obj);
        void REG_boot3_INITIALISE_LoggingThread_App(uint8_t threadId, class LoggingThread_Framework* obj);
        static void CLASS_boot0_DECLARE_LoggingThread_App(uint8_t threadId);
        static void CLASS_boot1_DEFINE_LoggingThread_App(uint8_t threadId);
        static void CLASS_boot3_INITIALISE_LoggingThread_App(uint8_t threadId);
        static void REG_boot0_DECLARE_LoggingThread_App(uint8_t threadId);
    private:
        static class LoggingThread_Framework_App_Control* _stat_CLASS_ptr_LoggingThread_App_Control;
        static void stat_CLASS_boot1_DEFINE_LoggingThread_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LoggingThread_App_Control(uint8_t threadId);
        static class LoggingThread_Framework_App_Control* stat_CLASS_get_ptr_LoggingThread_App_Control(uint8_t threadId);
    };
}
#endif
