#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_ENDS.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global.h"
#include "../libs/CLIB_WriteQueForThreadsAt_lqDataCluster/include/lqClusterAccess.h"
#include <iostream>
using namespace CLIBLaunchQueAtENDS;
    static CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_ENDS;
    static std::array<bool, 2>* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Native;
    static std::array<bool, 10>* CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
// Native.
    // public.
    void* lq::Native::generateHandle(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "entered app_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId);
		std::cout << "done Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global Meta-Data and Settings." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_and_Settings(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		std::cout << "done LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global Meta-Data and Settings." << std::endl;

		std::cout << "started IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "done IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_create_Architecture(threadId, reinterpret_cast<std::byte*>(CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_uint8_t_To_ByteArray(threadId, *CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_number_Implemented_Threads(threadId))));
		std::cout << "started Registers - DEFINE" << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId);
		std::cout << "done Registers - DEFINE." << std::endl;
		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId));
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "started Registers - INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId);
		std::cout << "done Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(threadId);
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId)->dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(threadId);
		std::cout << "done Program - INSTANTIATION." << std::endl;

        std::cout << "" << std::endl;
        std::cout << "        ,     \\      /      ," << std::endl;
        std::cout << "       / \\    )\\ _ /(     / \\ " << std::endl;
        std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
        std::cout << "_ / _\\_ \\@  @/ _/__\\__" << std::endl;
        std::cout << "|              |\\../|               |" << std::endl;
        std::cout << "|               \\VV/                |" << std::endl;
        std::cout << "|        MIT Launch Que .dll        |" << std::endl;
        std::cout << "|_________|" << std::endl;
        std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
        std::cout << "|  /    V          ))        V   \\  |" << std::endl;
        std::cout << "|/                //               \\| " << std::endl;
        std::cout << "`                 V                 '" << std::endl;
        std::cout << "" << std::endl;
    return (void*)CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId);
    }
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_terminate_Progaram(uint8_t threadId)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0)) {
            //todo terminaite classes.
            //CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(threadId);
            delete CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_ENDS;
            delete CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Native;
            delete CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(1) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
    // private.
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)); memberFunctionId++) {
            if (CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(memberFunctionId)) {
                CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0) = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(memberFunctionId);
                break;
            }
        }
    }
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_ENDS = nullptr;
    }
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_ENDS = new CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId);
        while (CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId) == nullptr) {}
    }
    CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework* lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Native(uint8_t threadId) {
        return CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_ENDS;
    }
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Native = nullptr;
    }
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Native = new std::array<bool, 2>();
        while (CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId) == nullptr) { }
        for (int index = 0; index < CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->size(); index++) {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(index) = true;
        }
    }
    void lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        for (int index = 0; index < CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->size(); index++) {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(index) = true;
        }
    }
    std::array<bool, 2>* lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        return CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Native;
    }
// Control.
    // public.
    void lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_request_Wait_launch(uint8_t threadId, unsigned char* bytes)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_Start(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId), CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(1) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
    }
    void lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_thread_End(uint8_t threadId, unsigned char* bytes)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_ENDS_thread_End(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId), (uint8_t)*bytes);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(2) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
    }
    unsigned char* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_coreId_To_launch(uint8_t threadId)
    {
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(3) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_uint8_t_To_ByteArray(threadId, *result);
    }
    unsigned char* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_Active(uint8_t threadId)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(4) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(5) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_Idle(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(6) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_State_launchBit(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(7) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    void lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesThreadId, unsigned char*  byteBool) {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0)) {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_ENDS_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_ByteArray_To_uint8_t(threadId, bytesThreadId), byteBool);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(8) = !CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(8);
            CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(threadId);
        }
    }
    // private.
    void lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_app_FUNCT_Calc_IsAllINSTANTIATED_Control(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)); memberFunctionId++) {
            if (CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(memberFunctionId)) {
                CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(0) = CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(memberFunctionId);
                break;
            }
        }
    }
   CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_For_Control(uint8_t threadId) {
        return CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_ENDS;
    }
    std::array<bool, 10>* lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(uint8_t threadId) {
        return CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
    }