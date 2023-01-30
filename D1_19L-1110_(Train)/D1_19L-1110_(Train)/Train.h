#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "Bogie.h"
using namespace std;

class Train
{
private:
	Bogie* engine;
public:
	int totalBogies;
	Train()
	{
		engine=nullptr;
		totalBogies=0;
	}
	~Train()
	{
		Bogie* temp;
		if (this->GetEngine()->GetNextBogie() != nullptr)
		{
				
			for (int i=0;i<this->totalBogies-1;i++)
			{
				temp=this->GetEngine();
				for (int j=0;j<this->totalBogies-1;j++)
					temp=temp->GetNextBogie();
				this->totalBogies--;
				delete temp;
			}
		}
		if (engine != nullptr)
		{
			delete engine;
			engine=nullptr;
		}
	}
	Bogie* GetEngine()	{return engine;}
	int AddPassengersQuantity(Bogie* currentBogie, int id, int noOfAults, int noOfKids,string familyName,int i=0)
	{
		if (id != currentBogie->GetBogieID())
			return (AddPassengersQuantity(currentBogie->GetNextBogie(),id,noOfAults,noOfAults,familyName,i+1));
		else if (id==currentBogie->GetBogieID())
		{
			currentBogie->AddPassengersQuantity(noOfAults,noOfAults);
		}
		return 0;
	}
	int AddBogie(Bogie* bogieToBeAdded, Bogie* currentBogie, int i=0)
	{
		if (totalBogies == 0)
		{
			engine=bogieToBeAdded;
			engine->AddNextBogie(nullptr);
			totalBogies++;
			return 0;
		}
		else if (i<Train::totalBogies-1)
			return (AddBogie(bogieToBeAdded, currentBogie->GetNextBogie(),i+1));
		else
		{
			currentBogie->AddNextBogie(bogieToBeAdded);
			currentBogie->GetNextBogie()->AddNextBogie(nullptr);
			totalBogies++;
			return 0;
		}
		return 0;
	}
	int AddPassengers(int id,Bogie* currentBogie,Adult* adults, Kid* kids,int adultsNo,int kidsNo,string familyName,int i=0)
	{
		if (id != currentBogie->GetBogieID())
			return (AddPassengers(id, currentBogie->GetNextBogie(),adults,kids,adultsNo,kidsNo,familyName,i++));
		else if (id==currentBogie->GetBogieID())
		{
			currentBogie->AddPassengersDetails(adults,kids,adultsNo,kidsNo,familyName);
		}
		return 0;
	}
	int RemovePassengers(int id,Bogie* currentBogie,int i=0)
	{
		if (id != currentBogie->GetBogieID())
			return (RemovePassengers(id, currentBogie->GetNextBogie(),i+1));
		else if (id == currentBogie->GetBogieID())
			currentBogie->RemovePassengers();
		return 0;
	}
	int RemoveBogie(Bogie* currentBogie,int id)
	{
		if (id != currentBogie->GetNextBogie()->GetBogieID())
		{
			return (RemoveBogie(currentBogie->GetNextBogie(),id));
		}
		else if (id == currentBogie->GetNextBogie()->GetBogieID())
		{
			Bogie *temp;
			temp=(currentBogie->GetNextBogie());
			currentBogie->SetNextBogie(currentBogie->GetNextBogie()->GetNextBogie());
			totalBogies--;
			delete temp;
			return 0;
		}
		return 0;
	}
	int CheckPassengers(int id)
	{
		return (engine->CheckPassengerExists(id));
	}
	int SearchBogie(Bogie* currentBogie,int id=12345,int i=0)
	{
		if (id == currentBogie->GetBogieID())
		{
			return 1;
		}
		else if (i<Train::totalBogies-1)
		{
			return (SearchBogie(currentBogie->GetNextBogie(),id,i+1));
		}
		return 0;
	}
	Bogie* GetBogie(Bogie* currentBogie,int id=12345,int i=0)
	{
		if (id == currentBogie->GetBogieID())
		{
			return currentBogie;
		}
		else if (i<Train::totalBogies-1)
		{
			return (GetBogie(currentBogie->GetNextBogie(),id,i+1));
		}
		return currentBogie;
	}

};
