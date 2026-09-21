#include "../include/LoggingThread_Framework.h"
#include <iostream>
	writeQue::LoggingThread_Framework_App* writeQue::LoggingThread_Framework::_stat_CLASS_get_ptr_LoggingThread_Framework_App;
	writeQue::LoggingThread_Framework_Global* writeQue::LoggingThread_Framework::_stat_CLASS_ptr_LoggingThread_Framework_Global;
// public.
	writeQue::LoggingThread_Framework::LoggingThread_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : LoggingThread_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : LoggingThread_Framework(threadId)." << std::endl;
	}
	writeQue::LoggingThread_Framework::~LoggingThread_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: writeQue : LoggingThread_Framework : LoggingThread_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_LoggingThread_Framework_App;
		delete _stat_CLASS_ptr_LoggingThread_Framework_Global;
		std::cout << "thread "  << 0 << " :: entered LIB :: writeQue : LoggingThread_Framework : LoggingThread_Framework(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::dyn_CLASS_create_LoggingThread_Architecture(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : dyn_CLASS_create_LoggingThread_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LoggingThread_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_LoggingThread_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : dyn_CLASS_create_LoggingThread_Architecture(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::dyn_CLASS_create_LoggingThread_Global_and_Settings(uint8_t threadId)
	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : dyn_CLASS_create_LoggingThread_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LoggingThread_Global(threadId);
		stat_CLASS_boot3_INITIALISE_LoggingThread_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : dyn_CLASS_create_LoggingThread_Global_and_Settings(threadId)." << std::endl;
	}
	writeQue::LoggingThread_Framework_App* writeQue::LoggingThread_Framework::dyn_CLASS_get_ptr_LoggingThread_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_LoggingThread_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_LoggingThread_App(threadId);
	}
	writeQue::LoggingThread_Framework_Global* writeQue::LoggingThread_Framework::dyn_CLASS_get_ptr_LoggingThread_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_LoggingThread_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_LoggingThread_Global(threadId);
	}
	void writeQue::LoggingThread_Framework::stat_CLASS_boot1_DEFINE_LoggingThread_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot1_DEFINE_LoggingThread_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LoggingThread_App(threadId);
		stat_CLASS_boot1_DEFINE_LoggingThread_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot1_DEFINE_LoggingThread_Framework(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::stat_CLASS_boot3_INITIALISE_LoggingThread_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot3_INITIALISE_LoggingThread_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_LoggingThread_App(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot3_INITIALISE_LoggingThread_Framework(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::stat_CLASS_boot3_INITIALISE_LoggingThread_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot3_INITIALISE_LoggingThread_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_LoggingThread_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot3_INITIALISE_LoggingThread_Global(threadId)." << std::endl;
	}
// private.
	void writeQue::LoggingThread_Framework::stat_CLASS_boot1_DEFINE_LoggingThread_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot1_DEFINE_LoggingThread_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_LoggingThread_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot1_DEFINE_LoggingThread_App(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::stat_CLASS_boot1_DEFINE_LoggingThread_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot1_DEFINE_LoggingThread_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_LoggingThread_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot1_DEFINE_LoggingThread_Global(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::stat_CLASS_boot3_INITIALISE_LoggingThread_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot3_INITIALISE_LoggingThread_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_LoggingThread_Framework_App = new class writeQue::LoggingThread_Framework_App(threadId);
		while (stat_CLASS_get_ptr_LoggingThread_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : stat_CLASS_boot3_INITIALISE_LoggingThread_App(threadId)." << std::endl;
	}
	void writeQue::LoggingThread_Framework::pr_stat_CLASS_boot3_INITIALISE_LoggingThread_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : pr_stat_CLASS_boot3_INITIALISE_LoggingThread_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_LoggingThread_Framework_Global = new class writeQue::LoggingThread_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_LoggingThread_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: writeQue : LoggingThread_Framework : pr_stat_CLASS_boot3_INITIALISE_LoggingThread_Global(threadId)." << std::endl;
	}
	writeQue::LoggingThread_Framework_App* writeQue::LoggingThread_Framework::stat_CLASS_get_ptr_LoggingThread_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_LoggingThread_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_LoggingThread_Framework_App;
	}
	writeQue::LoggingThread_Framework_Global* writeQue::LoggingThread_Framework::stat_CLASS_get_ptr_LoggingThread_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_LoggingThread_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_LoggingThread_Framework_Global;
	}