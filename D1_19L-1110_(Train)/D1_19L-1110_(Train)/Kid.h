#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Person.h"
using namespace std;

class Kid:public Person
{
private:
	string BFormNumber;
public:
	Kid(string name="", int age=18, char gender=' ', string bForm=""):Person(name, age, gender)
	{
		BFormNumber=bForm;
	}
	Kid(const Kid& right)
	{
		if (this != &right)
		{
			this->name=right.name;
			this->age=right.age;
			this->gender=right.gender;
			this->BFormNumber=right.BFormNumber;
		}
	}
	~Kid()
	{
		BFormNumber="";
	}
	void SetPersonInfo(string name, int age, char gender, string bForm)
	{
		this->name=name;
		this->age=age;
		this->gender=gender;
		BFormNumber=bForm;
	}
	string GetBFormNo()	{return BFormNumber;}

};