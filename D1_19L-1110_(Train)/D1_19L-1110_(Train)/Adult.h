#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Person.h"
using namespace std;

class Adult:public Person
{
private:
	string occupation;
	string qualification;
	string NIC;
public:
	Adult(string name="", int age=18, char gender=' ', string occupation="", string qulification="", string nic=""):Person(name, age, gender)
	{
		this->occupation=occupation;
		this->qualification=qualification;
		this->NIC=nic;
	}
	Adult(const Adult& right)
	{
		if (this != & right)
		{
			this->name=right.name;
			this->age=right.age;
			this->gender=right.gender;
			this->occupation=right.occupation;
			this->qualification=right.qualification;
			this->NIC=right.NIC;
		}
	}
	~Adult()
	{
		occupation="";
		qualification="";
		NIC="";
	}
	void SetPersonInfo(string name, int age, char gender, string occupation, string qualification, string nic)
	{
		this->name=name;
		this->age=age;
		this->gender=gender;
		this->occupation=occupation;
		this->qualification=qualification;
		this->NIC=nic;
	}
	string GetOccupation()		{return occupation;}
	string GetQualification()	{return qualification;}
	string GetNIC()				{return NIC;}
};