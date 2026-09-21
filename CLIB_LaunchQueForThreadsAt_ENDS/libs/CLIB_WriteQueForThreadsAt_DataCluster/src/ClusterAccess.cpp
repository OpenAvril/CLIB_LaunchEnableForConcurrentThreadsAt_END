#include "../include/ClusterAccess.h"
#include "../include/ClusterAccess_Framework_App.h"
#include "../include/ClusterAccess_Framework_App_Control.h"
#include "../include/ClusterAccess_Framework_Global.h"
#include <iostream>
	static std::list<void*>* stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_ClusterAccess_array_of_DataCluster_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	 std::list<void*>* wq::ClusterAccess::generateHandles(uint8_t threadId, std::byte MAX_NUMBER_OF_DATA_CLUSTERS, std::list<std::byte> MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_generateAllLibrariesWithin(threadId)." << std::endl;
	 	stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster = nullptr;
	 	CLIB_ClusterAccess_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId);
	 	CLIB_ClusterAccess_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId);

	 	std::cout << "thread " << std::to_string(threadId) << " :: started Architecture array_of_ptr_DataCluster_Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
	 	CLIB_ClusterAccess_stat_PGM_boot1_DEFINE_array_of_ptr_DataCluster_Framework(threadId);
	 	CLIB_ClusterAccess_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_DataCluster_Framework(threadId);
		CLIB_ClusterAccess_stat_PGM_boot3_INITIALISE_array_of_ptr_DataCluster_Framework(threadId, MAX_NUMBER_OF_DATA_CLUSTERS);
		std::cout << "thread " << std::to_string(threadId) << " :: done Architecture array_of_ptr_DataCluster_Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		auto* DEFAULT = *CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->begin();
		CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->resize(static_cast<uint8_t>(MAX_NUMBER_OF_DATA_CLUSTERS));
		for (uint8_t handleId = 1; handleId < static_cast<uint8_t>(MAX_NUMBER_OF_DATA_CLUSTERS); handleId++) {
			CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->assign(handleId, DEFAULT);
			auto temp = CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->begin();
			std::advance(temp, threadId);
			auto* tempObj = static_cast<ClusterAccess_Framework*>(*temp);
			auto numberofThreads = MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY.begin();
			std::advance(numberofThreads, handleId);
			tempObj->dyn_CLASS_get_ptr_ClusterAccess_Global(threadId)->dyn_REG_set_ClusterAccess_number_Of_Implemented_Threads(threadId, *numberofThreads);
			tempObj->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_CLASS_get_ptr_ClusterAccess_App_Control(threadId)->dyn_REG_boot3_INITIALISE_ClusterAccess_Framework_App_Control_For_New_Access_Count(threadId, tempObj);
		}
	 	return stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_generateAllLibrariesWithin(threadId)." << std::endl;
	}
	unsigned char* wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId, uint8_t dataClusterId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		bool* result = nullptr;
		result = new bool(threadId);
		*result = true;
		if (!CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			*result = CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
		}
		else {
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(1) = !CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		return ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_MsbBoolean_To_MsbByteArray(threadId, *result);
	}
	void wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_terminate_Program(uint8_t threadId, uint8_t dataClusterId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_terminate_Program(threadId)." << std::endl;
		if (!CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			delete stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster;
			delete stat_REG_ptr_ClusterAccess_array_of_DataCluster_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(2) = !CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_terminate_Program(threadId)." << std::endl;
	}
	void wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_write_End(threadId)." << std::endl;
		if (!CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {

			CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_APP_FUNCT_write_End(threadId, wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId), ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_MsbByteArray_To_Msbuint8_t(threadId, bytes));
			CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_CLASS_get_ptr_ClusterAccess_App_Control(threadId)->dyn_REG_set_FLAG_ClusterAccess_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId, true);
			CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_CLASS_get_ptr_ClusterAccess_App_Control(threadId)->dyn_REG_set_FLAG_ClusterAccess_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId, true);
		}
		else {
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(3) = !CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_write_End(threadId)." << std::endl;

	}
	void wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_write_Start(threadId)." << std::endl;
		if (!CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
			CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId), ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_MsbByteArray_To_Msbuint8_t(threadId, bytes));
		}
		else {
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(4) = !CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId);
		}
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_write_Start(threadId)." << std::endl;
	}
// private.
	void* wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_generate_Program(uint8_t threadId, uint8_t dataClusterId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_generate_Program(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_create_ClusterAccess_Global_and_Settings(threadId);
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_Global(threadId)->dyn_REG_boot1_DEFINE_ClusterAccess_Global(threadId);
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_ClusterAccess_Global(threadId);
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_Global(threadId)->dyn_REG_boot3_INITIALISE_ClusterAccess_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_create_ClusterAccess_Architecture(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: started Registers - DEFINE" << std::endl;
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_CLASS_get_ptr_ClusterAccess_App_Control(threadId)->dyn_REG_boot1_DEFINE_ClusterAccess_Framework_App_Control(threadId, CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId));
		std::cout << "thread " << std::to_string(threadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: started Registers - SUBSTANTIATE." << std::endl;
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_CLASS_get_ptr_ClusterAccess_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_ClusterAccess_Framework_App_Control(threadId,CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId));
		std::cout << "thread " << std::to_string(threadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: started Registers - INITIALISE." << std::endl;
		CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId)->dyn_CLASS_get_ptr_ClusterAccess_App(threadId)->dyn_CLASS_get_ptr_ClusterAccess_App_Control(threadId)->dyn_REG_boot3_INITIALISE_ClusterAccess_Framework_App_Control(threadId,CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId));
		std::cout << "thread " << std::to_string(threadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: started Architecture array_of_DataCluster_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: done Architecture array_of_DataCluster_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(threadId) << " :: " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |        OpenAvril - WriteQue       |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : ClusterAccess_App_FUNCT_generate_Program(threadId)." << std::endl;
		return (void*)CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId, dataClusterId);
	}
	bool wq::ClusterAccess::CLIB_ClusterAccess_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
		CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(index)) {
				CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0) = CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: <= bool : CLIB_ClusterAccess_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
		return CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(0);
	}
	void wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_boot1_DEFINE_array_of_ptr_DataCluster_Framework(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_PGM_boot1_DEFINE_array_of_ptr_DataCluster_Framework(threadId)." << std::endl;
		stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster = nullptr;
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_PGM_boot1_DEFINE_array_of_ptr_DataCluster_Framework(threadId)." << std::endl;
	}
	void wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_DataCluster_Framework(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_DataCluster_Framework(threadId)." << std::endl;
	 	stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster = new std::list<void*>();
	 	CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->resize(1);
	 	for (uint8_t dataClusterId = 0; dataClusterId < static_cast<uint8_t>(stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster->size()); dataClusterId++) {
	 		auto temp = CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->begin();
	 		std::advance(temp, dataClusterId);
	 		*temp = wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_generate_Program(threadId, dataClusterId);
	 	}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_PGM_boot2_SUBSTANTIATE_array_of_ptr_DataCluster_Framework(threadId)." << std::endl;
	 }
	void wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_boot3_INITIALISE_array_of_ptr_DataCluster_Framework(uint8_t threadId, std::byte MAX_NUMBER_OF_DATA_CLUSTERS) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_PGM_boot3_INITIALISE_array_of_ptr_DataCluster_Framework(threadId)." << std::endl;
	 	auto DEFAULT = CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->begin();
	 	for (uint8_t dataClusterId = 0; dataClusterId < static_cast<uint8_t>(MAX_NUMBER_OF_DATA_CLUSTERS); dataClusterId++) {
	 		CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)->push_back(*DEFAULT);
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_PGM_boot3_INITIALISE_array_of_ptr_DataCluster_Framework(threadId)." << std::endl;
	}
	void wq::ClusterAccess::CLIB_ClusterAccess_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		stat_REG_ptr_ClusterAccess_array_of_DataCluster_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->size()); memberFunctionId++) {
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	void wq::ClusterAccess::CLIB_ClusterAccess_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->size()); memberFunctionId++) {
			CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(threadId) << " :: exiting LIB :: wq : ClusterAccess : CLIB_ClusterAccess_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(threadId)." << std::endl;
	}
	std::array<bool, 5>* wq::ClusterAccess::CLIB_ClusterAccess_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId) {
		return stat_REG_ptr_ClusterAccess_array_of_DataCluster_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<void*>* wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(uint8_t threadId) {
	 	std::cout << "thread " << std::to_string(threadId) << " :: <= std::list<void*>* : CLIB_ClusterAccess_stat_PGM_get_array_of_ptr_DataCluster(threadId)." << std::endl;
		return stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster;
	}
	class wq::ClusterAccess_Framework* wq::ClusterAccess::CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(uint8_t threadId, uint8_t dataClusterId)	{
		auto temp = stat_REG_ptr_ClusterAccess_array_of_ptr_DataCluster->begin();
		std::advance(temp, dataClusterId);
	 	std::cout << "thread " << std::to_string(threadId) << " :: <= class : CLIB_ClusterAccess_stat_PGM_get_ptr_DataCluster(threadId)." << std::endl;
		return reinterpret_cast<wq::ClusterAccess_Framework*>(*temp);
	}