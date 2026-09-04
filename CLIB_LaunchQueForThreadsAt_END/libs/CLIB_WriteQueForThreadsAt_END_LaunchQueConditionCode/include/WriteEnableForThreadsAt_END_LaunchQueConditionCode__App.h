#ifndef CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__APP_H
#include "../include/WriteEnableForThreadsAt_END_LaunchQueConditionCode__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerLaunchQue_ConditionCode
{
    class WriteEnableForThreadsAt_END_LaunchQueConditionCode__App
    {
    public:
        WriteEnableForThreadsAt_END_LaunchQueConditionCode__App();
        virtual ~WriteEnableForThreadsAt_END_LaunchQueConditionCode__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_END_LaunchQueConditionCode__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App(WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App(WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App(WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App(WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App();
    private:
        static WriteEnableForThreadsAt_END_LaunchQueConditionCode__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__Control();
        static WriteEnableForThreadsAt_END_LaunchQueConditionCode__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerLaunchQue_ConditionCode__App__Control();
    };
}
#endif
