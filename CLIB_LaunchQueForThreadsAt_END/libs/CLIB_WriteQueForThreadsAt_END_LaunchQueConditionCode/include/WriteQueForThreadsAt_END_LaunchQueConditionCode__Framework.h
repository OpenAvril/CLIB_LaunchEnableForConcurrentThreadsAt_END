#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerLaunchQue_ConditionCode_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerLaunchQue_ConditionCode_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework_H
#include "../include/WriteQueForThreadsAt_END_LaunchQueConditionCode__App.h"
#include "../include/WriteQueForThreadsAt_END_LaunchQueConditionCode__Global.h"
namespace CLIBWriteQueAtServerLaunchQue_ConditionCode
{
    class WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework
    {
    public:
        WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework();
        virtual ~WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
        WriteQueForThreadsAt_END_LaunchQueConditionCode__App* dyn_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        WriteQueForThreadsAt_END_LaunchQueConditionCode__Global* dyn_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework(WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Global();
        static void stat_REG_boot0_DECLARE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework();
    private:
        static WriteQueForThreadsAt_END_LaunchQueConditionCode__App* _stat_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework__App;
        static WriteQueForThreadsAt_END_LaunchQueConditionCode__Global* _stat_CLASS_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteQueForThreadsAt_END_LaunchQueConditionCode__Global();
        static WriteQueForThreadsAt_END_LaunchQueConditionCode__App* stat_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__App();
        static WriteQueForThreadsAt_END_LaunchQueConditionCode__Global* stat_CLASS_get_ptr_WriteQueForThreadsAt_END_LaunchQueConditionCode__Global();
    };
}
#endif