#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::_stat_CLASS_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control;
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App();
    }
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::~WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::REG_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::dyn_APP_FUNCT_write_Client(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control();
    }

    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control = nullptr;
    }

    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control = new class CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control() == nullptr) {}
    }
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control;
    }