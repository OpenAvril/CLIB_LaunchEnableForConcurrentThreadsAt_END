#include "pch.h"
    class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
    bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework();
    std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

    std::cout << "started Registers - DEFINE" << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Registers - DEFINE." << std::endl;

    std::cout << "started Registers - SUBSTANTIATE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Registers - SUBSTANTIATE." << std::endl;

    std::cout << "started Registers - INITIALISE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Registers - INITIALISE." << std::endl;

    std::cout << "started Program - INSTANTIATION." << std::endl;
    stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
    stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
    stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Program - INSTANTIATION." << std::endl;

    std::cout << "" << std::endl;
    std::cout << "        ,     \\      /      ," << std::endl;
    std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
    std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
    std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
    std::cout << "|              |\\../|               |" << std::endl;
    std::cout << "|               \\VV/                |" << std::endl;
    std::cout << "|        MIT Launch Que .dll        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
    std::cout << "|  /    V          ))        V   \\  |" << std::endl;
    std::cout << "|/                //               \\| " << std::endl;
    std::cout << "`                 V                 '" << std::endl;
    std::cout << "" << std::endl;
    return (void*)stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework();
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_FUNCT_request_Wait_launch(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_FUNCT_terminate_Progaram()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_FUNCT_thread_End(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_End(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework(), (uint8_t)*bytes);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_REG_get_coreId_To_launch()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_uint8_t_To_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] = false;
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_REG_get_Flag_Active()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] == false) {
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE());
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] = false;
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] == false) {
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes)));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] = false;
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_REG_get_Flag_Idle()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] == false) {
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] = false;
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(true));
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_REG_get_State_launchBit()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] == false) {
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0)));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] = false;
            return LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char*  byteBool)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytesThreadId), byteBool);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] = false;
            stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
    {
        stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = false;
        for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); memberFunctionId++)
        {
            if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[memberFunctionId] == true)
            {
                stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = true;
            }
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = NULL;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework();
        while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework() == NULL) {}
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[11]();
        while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) { }
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
    {
        return _stat_REG_flag_isMemberFunctionINSTANTIATED;
    }