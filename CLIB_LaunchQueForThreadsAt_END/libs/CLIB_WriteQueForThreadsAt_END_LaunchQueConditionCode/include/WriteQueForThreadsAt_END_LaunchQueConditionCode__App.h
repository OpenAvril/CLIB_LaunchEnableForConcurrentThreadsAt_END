#ifndef CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode__App_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__APP_H
#define CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode__App_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__APP_H
#include "../include/WriteQueForThreadsAt_END_LaunchQueConditionCode__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerLaunchQue_ConditionCode
{
    class WriteQueForThreadsAt_END_LaunchQueConditionCode__App
    {
    public:
        WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        virtual ~WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        void dyn_APP_FUNCT_write_End(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj, uint8_t coreId);
        WriteQueForThreadsAt_END_LaunchQueConditionCode__Control* dyn_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__Control();
        void REG_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        void REG_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteQueForThreadsAt_END_LaunchQueConditionCode__App(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        static void CLASS_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        static void CLASS_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        static void REG_boot0_DECLARE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
    private:
        static WriteQueForThreadsAt_END_LaunchQueConditionCode__Control* _stat_CLASS_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__Control();
        static WriteQueForThreadsAt_END_LaunchQueConditionCode__Control* stat_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__App__Control();
    };
}
#endif
