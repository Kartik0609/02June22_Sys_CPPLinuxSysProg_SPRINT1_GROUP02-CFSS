#include <cppunit/config/SourcePrefix.h>
#include <string>
#include<algorithm>

#include "client.h"

CPPUNIT_TEST_SUITE_REGISTRATION( User );

void User::setUp()
{
	cname = "Kartik Sharma";
	cphno = 9414828207;
	ipadd = "127.0.0.1";
	filename = "ActivatedClient.txt";

    
}

void User::getFileName_UT_sunny() {
		std::string Name = "ActivatedClient.txt";
		std::string Name2 = getFileName();
		
		CPPUNIT_ASSERT_EQUAL(Name, Name2);
 }


void User::getIpAdd_UT_sunny() {
		std::string Name = "127.0.0.1";
		std::string Name2 = getIpAdd();
		
		CPPUNIT_ASSERT_EQUAL(Name, Name2);
 }



void User::getCName_UT_rainy() {
		std::string Name = "Kartik Sharma";
		std::string Name2 = getCName();
		
		CPPUNIT_ASSERT_EQUAL(Name, Name2);
 }
 

	void User::getCPhno_UT_sunny(){
		long int num = 9414828207;
		long int num2 = getCPhno();
		CPPUNIT_ASSERT_EQUAL(num,num2 );
}
