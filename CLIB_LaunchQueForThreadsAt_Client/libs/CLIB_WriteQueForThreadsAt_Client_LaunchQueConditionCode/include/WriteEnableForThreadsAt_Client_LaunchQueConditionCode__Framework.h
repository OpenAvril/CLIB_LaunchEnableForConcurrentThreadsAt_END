#ifndef CLIB_WRITEENABLEFORTHREADSAT_Client_LaunchQueConditionCode_WRITEENABLEFORTHREADSAT_Client_LaunchQueConditionCode__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_Client_LaunchQueConditionCode_WRITEENABLEFORTHREADSAT_Client_LaunchQueConditionCode__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global.h"
namespace CLIBWriteQueAtClient_LaunchQueConditionCode
{
    class WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework
    {
    public:
        WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework();
        virtual ~WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global_and_Settings();
        WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
        WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework();
    private:
        static WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework__App;
        static WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global();
        static WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
        static WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global();
    };
}
#endif