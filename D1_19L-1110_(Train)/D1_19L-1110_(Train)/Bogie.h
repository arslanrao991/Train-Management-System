#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Person.h"
#include "Adult.h"
#include "Kid.h"
using namespace std;

class Bogie
{
private:
	int bogieID;
	Bogie* nextBogie;
	Person* adults;
	Person* kids;
	string familyName;
	int noOfAdults;
	int noOfKids;
public:
	Bogie(int id=10001)
	{
		bogieID=id;
		familyName ="";
		adults=nullptr;
		kids=nullptr;
		noOfAdults=0;
		noOfKids=0;
	}
	Bogie(const Bogie& right)
	{
		if (this != & right)
		{
			this->familyName=right.familyName;
			this->adults=right.adults;
			this->kids=right.kids;
			this->noOfAdults=right.noOfAdults;
			this->noOfKids=right.noOfKids;
		}
	}
	~Bogie()
	{
		if (adults != nullptr)
		{
			delete []adults;
			adults=nullptr;
		}
		if (kids != nullptr)
		{
			delete []kids;
			kids=nullptr;
		}
	}
	Bogie* GetNextBogie()	{return nextBogie;}
	int GetBogieID()		{return bogieID;}
	void SetBogieID(int id)
	{
		this->bogieID=id;
	}
	void SetNextBogie(Bogie* nextBogie)
	{
		this->nextBogie=nextBogie;
	}
	void AddNextBogie(Bogie* nextBogie)
	{
		this->nextBogie=nextBogie;
	}
	void AddPassengersDetails(Adult* adults, Kid* kids, int adultsNo, int kidsNo,string familyName)
	{
		this->familyName=familyName;
		this->adults=adults;
		this->kids=kids;
		this->noOfAdults=adultsNo;
		this->noOfKids=kidsNo;
	}
	void RemovePassengers()
	{
		delete []adults;
		delete []kids;
		adults=nullptr;
		kids=nullptr;
		this->noOfAdults=0;
		this->noOfKids=0;
		familyName="";
	}

	int CheckPassengerExists(int id)
	{
		if (id != this->GetBogieID())
			return (this->GetNextBogie()->CheckPassengerExists(id));
		else if(id == this->GetBogieID())
		{
			if (this->familyName != "")
				return 1;
		}
		return -1;
	}
	void AddPassengersQuantity(int noOfAults, int noOfKids)
	{
		this->noOfAdults=noOfAdults;
		this->noOfKids=noOfKids;
	}
	string GetFamilyName()	{return familyName;}
	int GetNoOfAdults()		{return noOfAdults;}
	int GetNoOfKids()		{return noOfKids;}	
	Person* GetAdults()		{return adults;}
	Person* GetKids()		{return kids;}
};