# Import / Export Wrapper(s).
## Client.
---
### Native C++ Libraries.
#### CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE.dll.
##### Header.
````
#ifndef CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_CLIB_WRITEENABLEFORTHREADSAT_CLIENTOUTPUTRECEIVE_H
#define CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_CLIB_WRITEENABLEFORTHREADSAT_CLIENTOUTPUTRECEIVE_H
extern "C"
{
    namespace CLIBWriteQueAtCLIENTOUTPUTRECEIVE
    {
        class CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_terminate_Program();
            static void app_FUNCT_write_End(unsigned char* bytes);
            static void app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_Framework();
            static void stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework* stat_CLASS_get_ptr_Framework();
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
#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE.h"
#include "../include/WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE.h"
#include "../include/WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework.h"
#include "../include/WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Global.h"
class CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;

	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
		return CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE = NULL;
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE = new class CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtCLIENTOUTPUTRECEIVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE_Framework* CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE;
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtCLIENTOUTPUTRECEIVE::CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECEIVE::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

#### CLIB_WriteQueForThreadsAt_CLIENTINPUTSEND.dll.
##### Header.
````
#ifndef CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND_CLIB_WRITEENABLEFORTHREADSAT_CLIENTINPUTSEND_H
#define CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND_CLIB_WRITEENABLEFORTHREADSAT_CLIENTINPUTSEND_H
extern "C"
{
    namespace CLIBWriteQueAtCLIENTINPUTSEND
    {
        class CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_terminate_Program();
            static void app_FUNCT_write_End(unsigned char* bytes);
            static void app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_Framework();
            static void stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework* stat_CLASS_get_ptr_Framework();
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
#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND.h"
#include "../include/WriteEnableForThreadsAt_CLIENTINPUTSEND.h"
#include "../include/WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework.h"
#include "../include/WriteEnableForThreadsAt_CLIENTINPUTSEND_Global.h"
class CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;

	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
		return CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND = NULL;
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND = new class CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework* CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND;
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtCLIENTINPUTSEND::CLIB_WriteEnableForThreadsAt_CLIENTINPUTSEND::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

### Java Imports.
#### WriteQueCLIENTINPUTSEND.java.
````
package main.IO;
import com.sun.jna.Pointer;
import engine.Global;
import lib.JavaLIBWriteQueCLIENTOUTPUTRECIEVE;
public class WriteQueCLIENTINPUTSEND
{
    public WriteQueCLIENTINPUTSEND()
    {

    }
    public static Pointer app_FUNCT_generate_Program()
    {
        try {
            return JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_generate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return (Pointer)null;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return (Pointer)null;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static Boolean app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        byte[] temp;
        temp = new byte[1];
        temp[0] = Byte.MAX_VALUE;
        try {
            temp = JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_get_flag_isPGM_INSTNATIATED();
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
    public static void app_FUNCT_terminate_Program()
    {
        try {
            JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_terminate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_End(int threadId)
    {
        try {
            JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_write_End(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_Start(int threadId)
    {
        try {
            JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_write_Start(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
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

#### WriteQueCLIENTOUTPUTRECIEVE.java.
````
import com.sun.jna.Pointer;
import engine.Global;
import lib.JavaLIBWriteQueCLIENTOUTPUTRECIEVE;
public class WriteQueCLIENTOUTPUTRECIEVE
{
    public WriteQueCLIENTOUTPUTRECIEVE()
    {

    }
    public static Pointer app_FUNCT_generate_Program()
    {
        try {
            return JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_generate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return (Pointer)null;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return (Pointer)null;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static Boolean app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        byte[] temp;
        temp = new byte[1];
        temp[0] = Byte.MAX_VALUE;
        try {
            temp = JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_get_flag_isPGM_INSTNATIATED();
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
    public static void app_FUNCT_terminate_Program()
    {
        try {
            JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_terminate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_End(int threadId)
    {
        try {
            JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_write_End(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_Start(int threadId)
    {
        try {
            JavaLIBWriteQueCLIENTOUTPUTRECIEVE.INSTANCE.app_FUNCT_write_Start(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
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
#### CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE.dll.
##### Header.
````
#ifndef CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_CLIB_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE_H
#define CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_CLIB_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE_H
extern "C"
{
    namespace CLIBWriteQueAtSERVERINPUTRECEIVE
    {
        class CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_terminate_Program();
            static void app_FUNCT_write_End(unsigned char* bytes);
            static void app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_Framework();
            static void stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* stat_CLASS_get_ptr_Framework();
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
#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE.h"
#include "../include/WriteEnableForThreadsAt_SERVERINPUTRECEIVE.h"
#include "../include/WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework.h"
#include "../include/WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global.h"
class CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECEIVE;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;

	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
		return CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECEIVE;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECEIVE = NULL;
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECEIVE = new class CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECEIVE;
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

#### CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.dll.
##### Header.
````
#ifndef CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND_CLIB_WRITEENABLEFORTHREADSAT_SERVEROUTPUTSEND_H
#define CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND_CLIB_WRITEENABLEFORTHREADSAT_SERVEROUTPUTSEND_H
extern "C"
{
    namespace CLIBWriteQueAtSERVEROUTPUTSEND
    {
        class CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_terminate_Program();
            static void app_FUNCT_write_End(unsigned char* bytes);
            static void app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_Framework();
            static void stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* stat_CLASS_get_ptr_Framework();
            static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
            static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
            static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
            static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
        };
    }
}
#endif

````
#### Source.
````
#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.h"
#include "../include/WriteEnableForThreadsAt_SERVEROUTPUTSEND.h"
#include "../include/WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework.h"
#include "../include/WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global.h"
class CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;

	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
		return CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND = NULL;
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND = new class CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND;
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

### Java Imports.
#### WriteQue_SERVERINPUTRECIEVE.java.
````
package main.IO;
import com.sun.jna.Pointer;
import engine.Global;
import lib.JavaLIBWriteQueSERVERINPUTRECIEVE;
public class WriteQue_SERVERINPUTRECIEVE
{
    public WriteQue_SERVERINPUTRECIEVE()
    {

    }
    public static Pointer app_FUNCT_generate_Program()
    {
        try {
            return JavaLIBWriteQueSERVERINPUTRECIEVE.INSTANCE.app_FUNCT_generate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return (Pointer)null;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return (Pointer)null;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static Boolean app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        byte[] temp;
        temp = new byte[1];
        temp[0] = Byte.MAX_VALUE;
        try {
            temp = JavaLIBWriteQueSERVERINPUTRECIEVE.INSTANCE.app_FUNCT_get_flag_isPGM_INSTNATIATED();
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
    public static void app_FUNCT_terminate_Program()
    {
        try {
            JavaLIBWriteQueSERVERINPUTRECIEVE.INSTANCE.app_FUNCT_terminate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_End(int threadId)
    {
        try {
            JavaLIBWriteQueSERVERINPUTRECIEVE.INSTANCE.app_FUNCT_write_End(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_Start(int threadId)
    {
        try {
            JavaLIBWriteQueSERVERINPUTRECIEVE.INSTANCE.app_FUNCT_write_Start(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
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

#### WriteQue_SERVEROUTPUTSEND.java.
````
package main.IO;
import com.sun.jna.Pointer;
import engine.Global;
import lib.JavaLIBWriteQueSERVEROUTPUTSEND;
public class WriteQue_SERVEROUTPUTSEND {
    public WriteQue_SERVEROUTPUTSEND() {

    }
    public static Pointer app_FUNCT_generate_Program()
    {
        try {
            return JavaLIBWriteQueSERVEROUTPUTSEND.INSTANCE.app_FUNCT_generate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
            return (Pointer)null;
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
            return (Pointer)null;
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static Boolean app_FUNCT_get_flag_isPGM_INSTNATIATED()
    {
        byte[] temp;
        temp = new byte[1];
        temp[0] = Byte.MAX_VALUE;
        try {
            temp = JavaLIBWriteQueSERVEROUTPUTSEND.INSTANCE.app_FUNCT_get_flag_isPGM_INSTNATIATED();
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
    public static void app_FUNCT_terminate_Program()
    {
        try {
            JavaLIBWriteQueSERVEROUTPUTSEND.INSTANCE.app_FUNCT_terminate_Program();
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_End(int threadId)
    {
        try {
            JavaLIBWriteQueSERVEROUTPUTSEND.INSTANCE.app_FUNCT_write_End(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
        } catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        } catch (UnsatisfiedLinkError e) {
            System.out.printf("NullPointerException.%n");
        } catch (NullPointerException e) {
            throw new NullPointerException("NullPointerException.%n");
        }
    }
    public static void app_FUNCT_write_Start(int threadId)
    {
        try {
            JavaLIBWriteQueSERVEROUTPUTSEND.INSTANCE.app_FUNCT_write_Start(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbInt_To_LsbByteArray(threadId)));
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
