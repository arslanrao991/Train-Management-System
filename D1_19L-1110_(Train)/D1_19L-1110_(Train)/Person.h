#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Person
{
protected:
	string name;
	int age;
	char gender;
public:
	Person(string name="", int age=18, char gender=' ')
	{
		this->name=name;
		this->age=age;
		this->gender=gender;
	}
	Person(const Person& right)
	{
		if (this != & right)
		{
			this->name=right.name;
			this->age=right.age;
			this->gender=right.gender;
		}
	}
	string GetName()	{return name;}
	int GetAge()		{return age;}
	char GetGender()	{return gender;}
	virtual ~Person()
	{
		name="";
		age=0;
		gender=' ';
	}
	virtual void SetPersonInfo()
	{;}
};