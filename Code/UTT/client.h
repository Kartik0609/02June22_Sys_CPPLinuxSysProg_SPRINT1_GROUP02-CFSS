#pragma once

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <thread>
#include <vector>
#include <algorithm>
#include <cppunit/extensions/HelperMacros.h>

using namespace std;




class User : public CPPUNIT_NS::TestFixture
{
	
	CPPUNIT_TEST_SUITE( User );
	CPPUNIT_TEST( getCName_UT_rainy);
	CPPUNIT_TEST( getCPhno_UT_sunny );
	CPPUNIT_TEST( getIpAdd_UT_sunny );
	CPPUNIT_TEST( getFileName_UT_sunny);
	CPPUNIT_TEST_SUITE_END();
protected:
	string cname;
	long int cphno;
	string ipadd;
	string filename;
public:
	void setUp();
	

	void setValues(char n,long int p, string i,string f) { cname=n; cphno=p; ipadd = i; filename = f;}
	long int getCPhno() { return cphno; }
	string getCName() { return cname; }
	string getIpAdd(){return ipadd;}
	string getFileName(){return filename;}

	protected:
	void getCName_UT_rainy();
	void getCPhno_UT_sunny();
	void getIpAdd_UT_sunny();
	void getFileName_UT_sunny();

};
