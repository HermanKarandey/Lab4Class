#include "Class.h"
#include  <iostream>

using namespace std;

int main(void)
{

	
	
		Komaha * First_Komaha = new Komaha(1100, "Misha", 25, 1, 2);
		Komaha * Second_Komaha = new Komaha(12000, "Sasha", 10, 1, 2);
		Komaha * Third_Komaha = new Komaha(10000, "Vanya", 35, 1, 2);



		First_Komaha->Name_of_House = "UK";
		First_Komaha->Number_of_paws = 6;


		Second_Komaha->Name_of_House = "UA";
		Second_Komaha->Number_of_paws = 6;


		Third_Komaha->Name_of_House = "USA";
		Third_Komaha->Number_of_paws = 6;



		cout << First_Komaha->getSpeed() << endl
			<< First_Komaha->getCool() << endl
			<< First_Komaha->getPool() << endl
			<< First_Komaha->getWeight() << endl
			<< First_Komaha->getName() << endl
			<< First_Komaha->Name_of_House << endl
			<< First_Komaha->Number_of_paws << endl;

		cout << endl;



		cout << Second_Komaha->getSpeed() << endl
			<< Second_Komaha->getCool() << endl
			<< Second_Komaha->getPool() << endl
			<< Second_Komaha->getWeight() << endl
			<< Second_Komaha->getName() << endl
			<< Second_Komaha->Name_of_House << endl
			<< Second_Komaha->Number_of_paws << endl;

		cout << endl;

		cout << Third_Komaha->getSpeed() << endl
			<< Third_Komaha->getCool() << endl
			<< Third_Komaha->getPool() << endl
			<< Third_Komaha->getWeight() << endl
			<< Third_Komaha->getName() << endl
			<< Third_Komaha->Name_of_House << endl
			<< Third_Komaha->Number_of_paws << endl;

		delete First_Komaha;
		delete Second_Komaha;
		delete Third_Komaha;


		system("pause");


		return 0;
	}





