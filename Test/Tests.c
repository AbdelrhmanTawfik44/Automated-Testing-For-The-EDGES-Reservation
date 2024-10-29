#include "Tests.h"

/* Test Code to test the Sign Up */
/*
static struct User_Input_Type Test1_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	26,
	23,
	10,
	1998,
	Male,
	Masters_Student
	},
	{
		{
			"EdgesAcademy",
			"Edges123"
		},
	"Edges123"
	}
};

/* Test Code to test the Sign Up */
/*/static struct User_Input_Type Test2_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Rania",
	54,
	31,
	12,
	1970,
	Female,
	PHD_Holder
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_"
		},
	"Edges_123_$$"
	}
};

/* init function for Test Suite 1*/
/*/static unsigned char test1_start(void)
{
	unsigned char RET = Add_Account(&Test1_User);
	Test1_User.PersonalInfo_Form.id = current_user_test-1;
	DBM_PrintUsers();
	return !RET;
}

/* Closure Function For Test Suite 1*/
/*static unsigned char test1_end(void)
{
	unsigned char RET = Delete_Account(current_user_test-1);
	DBM_PrintUsers();
	return !RET;
}

/* init function for Test Suite 2*/
/*static unsigned char test2_start(void)
{
	unsigned char RET = Add_Account(&Test2_User);
	Test2_User.PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* Closure Function For Test Suite 1*/
/*static unsigned char test2_end(void)
{
	unsigned char RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/************************************************************************************
* Test ID                : TestCase 1
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ahmed
*                          Age                          -> 26
*                          DOB_day                      -> 01
*                          DOB_Month                    -> 02
*                          DOB_Year                     -> 1999
*                          Educational_Status           -> Masters_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy
*                          Password                     -> Edges123
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
/*static void TestCase1(void)
{
	unsigned int Test_id = Test1_User.PersonalInfo_Form.id;
	
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test1_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test1_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test1_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test1_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test1_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test1_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test1_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test1_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test1_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test1_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 2
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Rania
*                          Age                          -> 54
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1970
*                          Educational_Status           -> PHD_Holder
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy2024
*                          Password                     -> Edges_123_$$
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB shouldn't be updated with the previous inputs
* Reason                 : Password inputs mismatch so the suite willn't initiallize 
*************************************************************************************/
/*static void TestCase2(void)
{
	unsigned int Test_id = Test2_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test2_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test2_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test2_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test2_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test2_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test2_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test2_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test2_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test2_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test2_User.PersonalInfo_Form.id);
}
*/




























static void TestCase1(void)
{

	unsigned char excepected = Main_App_Runner();
	unsigned char acutal = ERROR;
	CU_ASSERT_EQUAL(acutal, excepected);
}


void Main_Test_Runner(void)
{
	/* initialize the Registry */
	CU_initialize_registry();

	/* Adding Test Suite to the Registry */
	CU_pSuite suite_positive = CU_add_suite("Creaet Valid Account");


	/* Adding Test Cases to the Test Suite*/
	CU_add_test(suite_positive, "Creaet Valid Account", TestCase1);
	// this suite is expected to fail and not to run due to to the invalid creation of the account 


	/* Running the Test Suite through Basic Console */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	/* Running the Test Suite through Console interactive */
	 // CU_console_run_tests();

	/* Clear the registry after test finished */
	CU_cleanup_registry();
}
