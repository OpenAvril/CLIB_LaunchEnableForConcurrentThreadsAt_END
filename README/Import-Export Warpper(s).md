# Import / Export Wrapper(s).
## Client.
---
### Native C++ Libraries.
#### CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll.
##### Header.
````
#ifndef LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API 
extern "C"
{
	namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
	{
		class LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API CLIBLaunchEnableForConcurrentThreadsAtCLIENT
		{
		public:
			static void* app_FUNCT_generate_Program();
			static bool app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_request_Wait_launch(void* obj, unsigned char* bytes);
			static void app_FUNCT_terminate_Progaram();
			static void app_FUNCT_thread_End(void* obj, unsigned char* bytes);
			static unsigned char* app_REG_get_coreId_To_launch(void* obj);
			static bool app_REG_get_Flag_Active(void* obj);
			static bool app_REG_get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes);
			static bool app_REG_get_Flag_Idle(void* obj);
			static bool app_REG_get_State_launchBit(void* obj);
			static void app_REG_set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue);

		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
			static void stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
			static class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif
````
##### Source.
````
#include "pch.h"
    class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
    bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
    std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

    std::cout << "started Registers - DEFINE" << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
    std::cout << "done Registers - DEFINE." << std::endl;

    std::cout << "started Registers - SUBSTANTIATE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
    std::cout << "done Registers - SUBSTANTIATE." << std::endl;

    std::cout << "started Registers - INITIALISE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
    std::cout << "done Registers - INITIALISE." << std::endl;

    std::cout << "started Program - INSTANTIATION." << std::endl;
    stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
    stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
    stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
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
    return (void*)stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
            return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
        }
        return true;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_FUNCT_request_Wait_launch(void* obj, unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_FUNCT_terminate_Progaram()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_FUNCT_thread_End(void* obj, unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj), (uint8_t)*bytes);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_REG_get_coreId_To_launch(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_uint8_t_To_ByteArray(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] = false;
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_REG_get_Flag_Active(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] = false;
            return true;
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_REG_get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] = false;
            return true;
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_REG_get_Flag_Idle(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] = false;
            return true;
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_REG_get_State_launchBit(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] = false;
            return true;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::app_REG_set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] == false) {
            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytes), newValue);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] = false;
            stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT = NULL;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
        while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework() == NULL) {}
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[11]();
        while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) { }
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
    {
        return _stat_REG_flag_isMemberFunctionINSTANTIATED;
    }
````

---
### Java Imports.
#### JavaLIBLaunchQue_Client.java.
````

````

---
### C# Imports.
#### CsharpLIBLaunchQue_Client.cs.
````

````


## Server.
---

### Native C++ Libraries.
#### CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll.
##### Header.
````
#ifndef LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API 
extern "C"
{
	namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
	{
		class LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER
		{
		public:
			static void* app_FUNCT_generate_Program();
			static bool app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_request_Wait_launch(void* obj, unsigned char* bytes);
			static void app_FUNCT_terminate_Progaram();
			static void app_FUNCT_thread_End(void* obj, unsigned char* bytes);
			static unsigned char* app_REG_get_coreId_To_launch(void* obj);
			static bool app_REG_get_Flag_Active(void* obj);
			static bool app_REG_get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes);
			static bool app_REG_get_Flag_Idle(void* obj);
			static bool app_REG_get_State_launchBit(void* obj);
			static void app_REG_set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue);

		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static void stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif
````
##### Source.
````
#include "pch.h"
    class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
    std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

    std::cout << "started Registers - DEFINE" << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
    std::cout << "done Registers - DEFINE." << std::endl;

    std::cout << "started Registers - SUBSTANTIATE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
    std::cout << "done Registers - SUBSTANTIATE." << std::endl;

    std::cout << "started Registers - INITIALISE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
    std::cout << "done Registers - INITIALISE." << std::endl;

    std::cout << "started Program - INSTANTIATION." << std::endl;
    stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
    stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
    stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
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
    return (void*)stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
            return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
        }
        return true;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_request_Wait_launch(void* obj, unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_terminate_Progaram()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_thread_End(void* obj, unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj), (uint8_t)*bytes);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
        }
    }
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_coreId_To_launch(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_uint8_t_To_ByteArray(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] = false;
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_Active(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] = false;
            return true;
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] = false;
            return true;
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_Idle(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] = false;
            return true;
        }
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_State_launchBit(void* obj)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] == false) {
            return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] = false;
            return true;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] == false) {
            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytes), newValue);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] = false;
            stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = NULL;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
        while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework() == NULL) {}
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[11]();
        while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) { }
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
    {
        return _stat_REG_flag_isMemberFunctionINSTANTIATED;
    }
````

---
### Java Imports.
#### JavaLIBLaunchQue_Server.java.
````

````

---
### C# Imports.
#### CsharpLIBLaunchQue_Server.cs.
````

````
