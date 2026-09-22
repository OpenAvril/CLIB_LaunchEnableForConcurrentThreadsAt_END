#ifndef OPENEPICENTRE_BACKENDSUBUNTU_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute_H
#define OPENEPICENTRE_BACKENDSUBUNTU_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute_H
#include <cstdint>
#include <list>
namespace CLIBLaunchQueAtENDS {
    class LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute {
    public:
        LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        virtual ~LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        void dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute(uint8_t threadId);

    private:
        static std::list<void*>* _stat_PGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster;
        static void stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(uint8_t threadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static std::list<void*>* stat_PGM_get_array_of_ptrPGM_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueDataCluster(uint8_t threadId);


    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute_H