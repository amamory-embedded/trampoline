/*Instance of task t5*/

//#include "test_instances.h"
#include "embUnit.h"
#include "tpl_os.h"
//#include "tpl_os_generated_configuration.h"

DeclareEvent(Task5_Event1);
DeclareEvent(Task5_Event2);
DeclareEvent(Task5_Event3);
DeclareEvent(Task5_Event4);
DeclareEvent(Task5_Event5);
DeclareEvent(Task5_Event6);
DeclareEvent(Task5_Event7);
DeclareEvent(Task5_Event8);

/*test case:test the reaction of the system called with 
 an activation of a task*/
static void test_t5_instance(void)
{
	int result_inst_1, result_inst_2, result_inst_3, result_inst_4, result_inst_5, result_inst_6, result_inst_7, result_inst_8;
	
	result_inst_1 = ClearEvent(Task5_Event1);
	result_inst_2 = ClearEvent(Task5_Event2);
	result_inst_3 = ClearEvent(Task5_Event3);
	result_inst_4 = ClearEvent(Task5_Event4);
	result_inst_5 = ClearEvent(Task5_Event5);
	result_inst_6 = ClearEvent(Task5_Event6);
	result_inst_7 = ClearEvent(Task5_Event7);
	result_inst_8 = ClearEvent(Task5_Event8);
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_1); 
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_2);
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_3); 
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_4);
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_5); 
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_6);
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_7); 
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_8);
	TerminateTask();
}

/*create the test suite with all the test cases*/
TestRef TaskManagementTest_seq14_t5_instance(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
		new_TestFixture("test_t5_instance",test_t5_instance)
	};
	EMB_UNIT_TESTCALLER(TaskManagementTest,"TaskManagementTest_sequence14",NULL,NULL,fixtures);
	
	return (TestRef)&TaskManagementTest;
}