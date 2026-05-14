# Import / Export Wrapper(s).
## Client.
---
### Native C++ Libraries.
#### CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll.
##### Header.
````
#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_CLIENT_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_CLIENT_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_CLIENT_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_CLIENT_H
extern "C"
{
    namespace CLIBLaunchQueAtCLIENT
    {
        class CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_request_Wait_launch(unsigned char* bytes);
            static void app_FUNCT_terminate_Progaram();
            static void app_FUNCT_thread_CLIENT(unsigned char* bytes);
            static unsigned char* app_REG_get_coreId_To_launch();
            static unsigned char* app_REG_get_Flag_Active();
            static unsigned char* app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes);
            static unsigned char* app_REG_get_Flag_Idle();
            static unsigned char* app_REG_get_State_launchBit();
            static void app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char* byteBool);
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
#include <iostream>
#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_CLIENT.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_CLIENT_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_CLIENT_Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_CLIENT_Global.h"
CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
    bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
    void* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
    std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

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
    unsigned char* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_FUNCT_get_flag_isPGM_INSTANTIATED()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_FUNCT_request_Wait_launch(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(), CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
        }
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_FUNCT_terminate_Progaram()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
        }
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_FUNCT_thread_CLIENT(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_CLIENT(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(), (uint8_t)*bytes);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
        }
    }
    unsigned char* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_REG_get_coreId_To_launch()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] == false) {
            return CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_uint8_t_To_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] = false;
            return CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    unsigned char* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_REG_get_Flag_Active()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] == false) {
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE());
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] = false;
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] == false) {
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes)));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] = false;
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_REG_get_Flag_Idle()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] == false) {
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] = false;
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(true));
        }
    }
    unsigned char* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_REG_get_State_launchBit()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] == false) {
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0)));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] = false;
            return LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char*  byteBool)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytesThreadId), byteBool);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] = false;
            stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT = NULL;
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT = new CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
        while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework() == NULL) {}
    }
    CLIBLaunchQueAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[11]();
        while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) { }
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* CLIBLaunchQueAtCLIENT::CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
    {
        return _stat_REG_flag_isMemberFunctionINSTANTIATED;
    }
````

### Java Imports.
#### CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.java.
````
package main.IO;
import com.sun.jna.Pointer;
import engine.Global;
import lib.JavaLIBLaunchQue_Client;
public class LaunchQue_Client 
{
    // public.
    public LaunchQue_Client()
    {

    }
    public static Pointer app_FUNCT_generate_Program()
    {
        Pointer temp;
        temp = (Pointer)null;
        try {
            temp = JavaLIBLaunchQue_Client.INSTANCE.app_FUNCT_generate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return temp;
    }
    public static boolean app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            temp = JavaLIBLaunchQue_Client.INSTANCE.app_FUNCT_get_flag_isPGM_INSTNATIATED();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static void app_FUNCT_request_Wait_launch(int threadId)
    {
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_FUNCT_request_Wait_launch(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_terminate_Progaram()
    {
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_FUNCT_terminate_Progaram();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_thread_End(int threadId)
    {
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_FUNCT_thread_End(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static int app_REG_get_coreId_To_launch()
    {
        byte[] temp;
        temp = new byte[4];
        try {
            temp = JavaLIBLaunchQue_Client.INSTANCE.app_REG_get_coreId_To_launch();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbInt(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_Flag_Active()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_REG_get_Flag_Active();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_Flag_ConcurrentCoreState(int threadId)
    {
        byte[] temp;
        temp = new byte[1];
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_REG_get_Flag_ConcurrentCoreState(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_Flag_Idle()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_REG_get_Flag_Idle();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return true;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_State_launchBit()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            temp = JavaLIBLaunchQue_Client.INSTANCE.app_REG_get_State_launchBit();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return true;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static void app_REG_set_Flag_ConcurrentCoreState(int concurrentThreadId, boolean state)
    {
        try {
            JavaLIBLaunchQue_Client.INSTANCE.app_REG_set_Flag_ConcurrentCoreState(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(concurrentThreadId)), Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbBoolean_To_LsbByteArray(state)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
}
````

---
## Server.
### Native C++ Libraries.
#### CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll.
##### Header.
````
#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_SERVER_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_SERVER_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_SERVER_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_SERVER_H
extern "C"
{
    namespace CLIBLaunchQueAtSERVER
    {
        class CLIB_LaunchEnableForConcurrentThreadsAt_SERVER
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_request_Wait_launch(unsigned char* bytes);
            static void app_FUNCT_terminate_Progaram();
            static void app_FUNCT_thread_SERVER(unsigned char* bytes);
            static unsigned char* app_REG_get_coreId_To_launch();
            static unsigned char* app_REG_get_Flag_Active();
            static unsigned char* app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes);
            static unsigned char* app_REG_get_Flag_Idle();
            static unsigned char* app_REG_get_State_launchBit();
            static void app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char* byteBool);
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
#include <iostream>
#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_SERVER_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_SERVER_Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_SERVER_Global.h"
CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
    void* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
    std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

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
    unsigned char* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_get_flag_isPGM_INSTANTIATED()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_request_Wait_launch(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(), CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
        }
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_terminate_Progaram()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
        }
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_thread_SERVER(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_SERVER(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(), (uint8_t)*bytes);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
        }
    }
    unsigned char* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_coreId_To_launch()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] == false) {
            return CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_uint8_t_To_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] = false;
            return CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    unsigned char* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_Active()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] == false) {
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE());
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] = false;
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] == false) {
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes)));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] = false;
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_Idle()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] == false) {
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] = false;
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(true));
        }
    }
    unsigned char* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_State_launchBit()
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] == false) {
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0)));
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] = false;
            return LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char*  byteBool)
    {
        if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytesThreadId), byteBool);
        }
        else {
            stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] = false;
            stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = NULL;
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = new CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
        while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework() == NULL) {}
    }
    CLIBLaunchQueAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
    {
        _stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[11]();
        while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) { }
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
        {
            _stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
    {
        return _stat_REG_flag_isMemberFunctionINSTANTIATED;
    }
````

### Java Imports.
#### LaunchQue_Server.java.
````
package main.IO;
import com.sun.jna.Pointer;
import engine.Global;
import lib.JavaLIBLaunchQue_Server;
public class LaunchQue_Server
{
// public.
    public LaunchQue_Server()
    {

    }
    public static Pointer app_FUNCT_generate_Program()
    {
        Pointer temp;
        temp = (Pointer)null;
        try {
            temp = JavaLIBLaunchQue_Server.INSTANCE.app_FUNCT_generate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return temp;
    }
    public static boolean app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            temp = JavaLIBLaunchQue_Server.INSTANCE.app_FUNCT_get_flag_isPGM_INSTNATIATED();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static void app_FUNCT_request_Wait_launch(int threadId)
    {
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_FUNCT_request_Wait_launch(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_terminate_Progaram()
    {
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_FUNCT_terminate_Progaram();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_thread_End(int threadId)
    {
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_FUNCT_thread_End(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static int app_REG_get_coreId_To_launch()
    {
        byte[] temp;
        temp = new byte[4];
        try {
            temp = JavaLIBLaunchQue_Server.INSTANCE.app_REG_get_coreId_To_launch();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbInt(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_Flag_Active()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_REG_get_Flag_Active();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_Flag_ConcurrentCoreState(int threadId)
    {
        byte[] temp;
        temp = new byte[1];
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_REG_get_Flag_ConcurrentCoreState(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_Flag_Idle()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_REG_get_Flag_Idle();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return true;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static boolean app_REG_get_State_launchBit()
    {
        byte[] temp;
        temp = new byte[1];
        try {
            temp = JavaLIBLaunchQue_Server.INSTANCE.app_REG_get_State_launchBit();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return true;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return true;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static void app_REG_set_Flag_ConcurrentCoreState(int concurrentThreadId, boolean state)
    {
        try {
            JavaLIBLaunchQue_Server.INSTANCE.app_REG_set_Flag_ConcurrentCoreState(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(concurrentThreadId)), Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbBoolean_To_LsbByteArray(state)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
}
````

---
---
---
