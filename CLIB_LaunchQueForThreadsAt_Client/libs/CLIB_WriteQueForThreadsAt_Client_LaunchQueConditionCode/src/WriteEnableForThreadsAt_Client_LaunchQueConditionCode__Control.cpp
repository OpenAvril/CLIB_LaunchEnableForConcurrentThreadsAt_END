#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework.h"
#include "../include/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global.h"
#include <array>
#include <iostream>
#include <iterator>
    bool* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE;
    bool* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
    bool* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE;
    bool* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE;
    std::list<uint64_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId;
    std::list<uint64_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId;
    std::list<uint64_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId;
    std::list<uint8_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE;
    uint8_t* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index;
    uint8_t* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index;
// public.
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control() {

    }
    CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::~WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control() {
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING;
            delete _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId;
            delete _stat_REG_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE;
            delete _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index;
            delete _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index;
        }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__dynamicIn(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING()) {

            }
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__dynamicOut(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index(false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING()) {

            }
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_Activate(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WAIT());
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_ShiftQueValues(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj, uint8_t coreId_A, uint8_t coreId_B) {
        auto temp_A = static_cast<uint64_t>(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_SortQue(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj) {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_IDLE())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WAIT())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
            }
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeQue_Update(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj) {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__2bitFLAG_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj) {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control()" << std::endl;
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE();
        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj) {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ptr_QUE_Of_ThreadID_To_WRITE(obj);
        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control()" << std::endl;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj) {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control()" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadIdd();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control()" << std::endl;
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE();
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE();
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING();
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() {
        return stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() {
        return stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index();
    }
    std::array<bool, 2> CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_2ibt_FLAG_WriteState(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint64_t CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint64_t CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint64_t CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(uint8_t slotID) {
        auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }

    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(FLAGState);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(FLAGState);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE(FLAGState);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING(FLAGState);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2ibt_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState) {
        stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState(concurrentThreadID, new2bitState);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount){
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID){
        stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(slotID, newID);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue) {
        stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(newValue);
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index(uint8_t newValue) {
       stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index(newValue);
    }
// private.
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE()
    {
        _stat_REG_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index = nullptr;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE = true;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING = true;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE = true;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING = true;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState() == nullptr) {}
        _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE->at(2) = { true, true };
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId = new std::list<uint64_t>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId(WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId = new std::list<uint64_t>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId(CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId = new std::list<uint64_t>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ptr_QUE_Of_ThreadID_To_WRITE(CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework* obj)
    {
        _stat_REG_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite() == nullptr) {}
        stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->begin();
            std::advance(temp, threadId);
            *temp = UINT8_MAX;
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index = UINT8_MAX;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index = UINT8_MAX;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE = false;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING = false;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE = false;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING = false;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState() == nullptr) {}
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()->at(0) = { false, false };
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()->at(1) = { false, true };
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()->at(2) = { true, false };
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadIdd() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ptr_QUE_Of_ThreadID_To_WRITE() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint8_t>(threadId);
        }
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index = 0;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index = 0;
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE;
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE;
    }
    bool CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState() {
        return _stat_REG_CONST_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__2bitFLAG_STATE;
    }
    std::list<uint64_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId;
    }
    std::list<uint64_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIDLE_Count_For_ThreadId;
    }
    std::list<uint64_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWAIT_Count_For_ThreadId;
    }
    std::list<uint8_t>* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite() {
        return _stat_REG_QUE_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__ThreadID_To_WRITE;
    }
    uint8_t* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() {
        return _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index;
    }
    uint8_t* CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index() {
        return _stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_ONE(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_ONE = newFLAG;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__isWriteClientThreadRELASE_REMAINING(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__FLAG_Control__isWriteClientThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__3STATE_FLAG_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        *temp = concurrentThreadID;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue)  {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index = newValue;
    }
    void CLIBWriteQueAtClient_LaunchQueConditionCode::WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index(uint8_t newValue)  {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control__writeCycle_Try_WriteClientThreadId_Index = newValue;
    }