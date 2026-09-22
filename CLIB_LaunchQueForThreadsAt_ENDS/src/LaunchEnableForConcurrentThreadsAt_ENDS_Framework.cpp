#include "../include/LaunchEnableForConcurrentThreadsAt_ENDS_Framework.h"
#include <iostream>
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App;
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global;
// public.
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::~LaunchEnableForConcurrentThreadsAt_ENDS_Framework() {
		std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : ~LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App;
		delete _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global;
		std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : ~LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_CLASS_create_Architecture(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global_and_Settings(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId);
		pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId);
	}
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Globaldyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		return stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId);
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;	}

	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId);
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
// private.
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App = new class CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global = new class CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : LaunchEnableForConcurrentThreadsAt_ENDS_Framework : boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
	}
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App;
	}
	CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global* CLIBLaunchQueAtENDS::LaunchEnableForConcurrentThreadsAt_ENDS_Framework::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework(threadId)." << std::endl;
		return _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global;
	}