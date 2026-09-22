#include "../CLIB_LaunchQueForThreadsAt_ENDS/include/CLIB_LaunchEnableForConcurrentThreadsAt_ENDS.h"
#include "../CLIB_LaunchQueForThreadsAt_ENDS/include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global.h"
#include <iostream>
#include <thread>

int main() {
    std::cout << "Running..." << std::endl;
    auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new std::byte();
    *MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<std::byte>(4);
    auto* threadId = new uint8_t(0);
    unsigned char* byteDEFAULT = LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_uint8_t_To_ByteArray(0,static_cast<uint8_t>(0));
    std::cout << "SIMULATION Start." << std::endl;
    lq::Native::generateHandle(*threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);

    std::cout << "SIMULATION start instantiation." << std::endl;
    lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_terminate_Progaram(*threadId);
    auto byte_uint8_t = LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_uint8_t_To_ByteArray(*threadId, 255);
    lq::Native::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_terminate_Progaram(*threadId);
    lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_request_Wait_launch(*threadId, byte_uint8_t);
    lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_FUNCT_thread_End(*threadId, byte_uint8_t);
    unsigned char * tampA0 = lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_coreId_To_launch(*threadId);
    unsigned char * tampA1 = lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_Active(*threadId);
    unsigned char * tampA2 = lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_ConcurrentCoreState(*threadId, byte_uint8_t);
    unsigned char * tampA3 = lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_Flag_Idle(*threadId);
    unsigned char * tampA4 = lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_FLAG_isPGM_INSTANTIATED(*threadId);
    unsigned char * tampA5 = lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_get_State_launchBit(*threadId);
    lq::Control::CLIB_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App_REG_set_Flag_ConcurrentCoreState(*threadId, byte_uint8_t, byte_uint8_t);
    std::cout << "SIMULATION end instantiation." << std::endl;

    std::cout << "SIMULATION Start." << std::endl;

    std::cout << "SIMULATION End." << std::endl;
    return 0;
}