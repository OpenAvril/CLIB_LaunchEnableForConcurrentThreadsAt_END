#ifndef CLIB_lqClusterAccess_FRAMEWORK_GLOBAL_H
#define CLIB_lqClusterAccess_FRAMEWORK_GLOBAL_H
#include <array>
#include <cstdint>
namespace wq {
    class lqClusterAccess_Framework_Global {
    public:
        lqClusterAccess_Framework_Global(uint8_t threadId);
        ~lqClusterAccess_Framework_Global();
        void dyn_REG_boot0_DECLARE_lqClusterAccess_Global(uint8_t threadId);
        void dyn_REG_boot1_DEFINE_lqClusterAccess_Global(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_lqClusterAccess_Global(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_lqClusterAccess_Global(uint8_t threadId);
        std::array<bool,2> dyn_REG_get_ptr_CONST_lqClusterAccess_2bitFLAG_IDLE(uint8_t threadId);
        std::array<bool,2> dyn_REG_get_ptr_CONST_lqClusterAccess_2bitFLAG_WAIT(uint8_t threadId);
        std::array<bool,2> dyn_REG_get_ptr_CONST_lqClusterAccess_2bitFLAG_WRITE(uint8_t threadId);
        std::byte dyn_REG_get_lqClusterAccess_number_Of_Implemented_Threads(uint8_t threadId);
        void dyn_REG_set_lqClusterAccess_number_Of_Implemented_Threads(uint8_t threadId, std::byte MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static unsigned char* stat_APP_CONVERT_lqClusterAccess_Msbdouble_To_MsbByteArray(uint8_t threadId, double value);
        static unsigned char* stat_APP_CONVERT_lqClusterAccess_MsbDouble_To_MsbByteArray(uint8_t threadId, double value);
        static unsigned char* stat_APP_CONVERT_lqClusterAccess_Msb_uint8_t_to_MsbByteArray(uint8_t threadId, uint8_t value);
        static int stat_APP_CONVERT_lqClusterAccess_Bool_To_Int(uint8_t threadId, bool value);
        static unsigned char* stat_APP_CONVERT_lqClusterAccess_MsbBoolean_To_MsbByteArray(uint8_t threadId, bool value);
        static bool stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_MsbBoolean(uint8_t threadId, const unsigned char* byteArray);
        static double stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_MsbDouble(uint8_t threadId, const unsigned char* byteArray);
        static double stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_Msbdouble(uint8_t threadId, const unsigned char* byteArray);
        static uint8_t stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_Msbuint8_t(uint8_t threadId, const unsigned char* byteArray);
    private:
        static std::array<bool,2>* _stat_REG_CONST_lqClusterAccess_2bitFLAG_IDLE;
        static std::array<bool,2>* _stat_REG_CONST_lqClusterAccess_2bitFLAG_WAIT;
        static std::array<bool,2>* _stat_REG_CONST_lqClusterAccess_2bitFLAG_WRITE;
        static std::byte* _stat_REG_ptr_lqClusterAccess_number_Of_Implemented_Threads;
        static int pr_stat_APP_CONVERT_lqClusterAccess_Bool_To_Int(uint8_t threadId, bool value);
        static unsigned char* pr_stat_APP_CONVERT_lqClusterAccess_MsbBoolean_To_MsbByteArray(uint8_t threadId, bool value);
        static bool pr_stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_MsbBoolean(uint8_t threadId, const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_MsbDouble(uint8_t threadId, const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_Msbdouble(uint8_t threadId, const unsigned char* byteArray);
        static uint8_t pr_stat_APP_CONVERT_lqClusterAccess_MsbByteArray_To_Msbuint8_t(uint8_t threadId, const unsigned char* byteArray);
        static unsigned char* pr_stat_APP_CONVERT_lqClusterAccess_Msbdouble_To_MsbByteArray(uint8_t threadId, double value);
        static unsigned char* pr_stat_APP_CONVERT_lqClusterAccess_MsbDouble_To_MsbByteArray(uint8_t threadId, double value);
        static unsigned char* pr_stat_APP_CONVERT_lqClusterAccess_Msb_uint8_t_to_MsbByteArray(uint8_t threadId, uint8_t value);
        static void stat_REG_boot1_DEFINE_CONST_lqClusterAccess_2bitFLAG_IDLE(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CONST_lqClusterAccess_2bitFLAG_WAIT(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_CONST_lqClusterAccess_2bitFLAG_WRITE(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_ptr_lqClusterAccess_number_Of_Implemented_Threads(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_lqClusterAccess_2bitFLAG_IDLE(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_lqClusterAccess_2bitFLAG_WAIT(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_lqClusterAccess_2bitFLAG_WRITE(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_lqClusterAccess_number_Of_Implemented_Threads(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_CONST_lqClusterAccess_2bitFLAG_IDLE(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_CONST_lqClusterAccess_2bitFLAG_WAIT(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_CONST_lqClusterAccess_2bitFLAG_WRITE(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_ptr_lqClusterAccess_number_Of_Implemented_Threads(uint8_t threadId, std::byte MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_lqClusterAccess_2bitFLAG_IDLE(uint8_t threadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_lqClusterAccess_2bitFLAG_WAIT(uint8_t threadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_lqClusterAccess_2bitFLAG_WRITE(uint8_t threadId);
        static std::byte* stat_REG_get_ptr_lqClusterAccess_number_Of_Implemented_Threads(uint8_t threadId);
    };
}
#endif