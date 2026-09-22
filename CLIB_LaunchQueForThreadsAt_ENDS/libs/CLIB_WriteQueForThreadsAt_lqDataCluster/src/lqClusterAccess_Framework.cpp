#include "../include/lqClusterAccess_Framework.h"
#include <iostream>
	wq::lqClusterAccess_Framework_App* wq::lqClusterAccess_Framework::_stat_CLASS_get_ptr_lqClusterAccess_Framework_App;
	wq::lqClusterAccess_Framework_Global* wq::lqClusterAccess_Framework::_stat_CLASS_ptr_lqClusterAccess_Framework_Global;
// public.
	wq::lqClusterAccess_Framework::lqClusterAccess_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : lqClusterAccess_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : lqClusterAccess_Framework(threadId)." << std::endl;
	}
	wq::lqClusterAccess_Framework::~lqClusterAccess_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: wq : lqClusterAccess_Framework : lqClusterAccess_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_lqClusterAccess_Framework_App;
		delete _stat_CLASS_ptr_lqClusterAccess_Framework_Global;
		std::cout << "thread "  << 0 << " :: entered LIB :: wq : lqClusterAccess_Framework : lqClusterAccess_Framework(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::dyn_CLASS_create_lqClusterAccess_Architecture(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : dyn_CLASS_create_lqClusterAccess_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_lqClusterAccess_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_lqClusterAccess_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : dyn_CLASS_create_lqClusterAccess_Architecture(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::dyn_CLASS_create_lqClusterAccess_Global_and_Settings(uint8_t threadId)
	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : dyn_CLASS_create_lqClusterAccess_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_lqClusterAccess_Global(threadId);
		stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : dyn_CLASS_create_lqClusterAccess_Global_and_Settings(threadId)." << std::endl;
	}
	wq::lqClusterAccess_Framework_App* wq::lqClusterAccess_Framework::dyn_CLASS_get_ptr_lqClusterAccess_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_lqClusterAccess_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_lqClusterAccess_App(threadId);
	}
	wq::lqClusterAccess_Framework_Global* wq::lqClusterAccess_Framework::dyn_CLASS_get_ptr_lqClusterAccess_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_lqClusterAccess_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_lqClusterAccess_Global(threadId);
	}
	void wq::lqClusterAccess_Framework::stat_CLASS_boot1_DEFINE_lqClusterAccess_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot1_DEFINE_lqClusterAccess_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_lqClusterAccess_App(threadId);
		stat_CLASS_boot1_DEFINE_lqClusterAccess_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot1_DEFINE_lqClusterAccess_Framework(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::stat_CLASS_boot3_INITIALISE_lqClusterAccess_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot3_INITIALISE_lqClusterAccess_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_lqClusterAccess_App(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot3_INITIALISE_lqClusterAccess_Framework(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(threadId)." << std::endl;
	}
// private.
	void wq::lqClusterAccess_Framework::stat_CLASS_boot1_DEFINE_lqClusterAccess_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot1_DEFINE_lqClusterAccess_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_lqClusterAccess_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot1_DEFINE_lqClusterAccess_App(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::stat_CLASS_boot1_DEFINE_lqClusterAccess_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot1_DEFINE_lqClusterAccess_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_lqClusterAccess_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot1_DEFINE_lqClusterAccess_Global(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::stat_CLASS_boot3_INITIALISE_lqClusterAccess_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot3_INITIALISE_lqClusterAccess_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_lqClusterAccess_Framework_App = new class wq::lqClusterAccess_Framework_App(threadId);
		while (stat_CLASS_get_ptr_lqClusterAccess_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : stat_CLASS_boot3_INITIALISE_lqClusterAccess_App(threadId)." << std::endl;
	}
	void wq::lqClusterAccess_Framework::pr_stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : pr_stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_lqClusterAccess_Framework_Global = new class wq::lqClusterAccess_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_lqClusterAccess_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : lqClusterAccess_Framework : pr_stat_CLASS_boot3_INITIALISE_lqClusterAccess_Global(threadId)." << std::endl;
	}
	wq::lqClusterAccess_Framework_App* wq::lqClusterAccess_Framework::stat_CLASS_get_ptr_lqClusterAccess_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_lqClusterAccess_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_lqClusterAccess_Framework_App;
	}
	wq::lqClusterAccess_Framework_Global* wq::lqClusterAccess_Framework::stat_CLASS_get_ptr_lqClusterAccess_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_lqClusterAccess_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_lqClusterAccess_Framework_Global;
	}