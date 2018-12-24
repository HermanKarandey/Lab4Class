#ifndef KOMAHA_H
#define KOMAHA_H
#include <iostream>
#include "string"
using namespace std;

class Komaha
{
	int Speed;
	string Name;
	int Weight;
	//int * mas;

public:
	int Number_of_paws;
	string Name_of_House;
	Komaha()
	{
		Speed = 12000;
		Name = "Misha";
		Weight = 25;
	}
	Komaha(int Sp, string Na, int Wei, int Cool, int Pool)
	{
		Speed = Sp;
		Name = Na;
		Weight = Wei;
		Cool = Cool;
		Pool = Pool;
	}
	~Komaha()
	{
		Speed = 0;
	}
	int getSpeed();
	string getName();
	int getWeight();
	int getCool();
	int getPool();
protected:
	int Cool;
	int Pool;
};

class Class
{
public:
	Class();
	~Class();
};

#endif // Komaha_H