#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time*clock =  new Time(18, 30,22);

	cout << "Standrard:\n";
	clock->printStandrard();
	cout << "\nUniversal:\n";
	clock->printUniversal();
	cout << '\n';
	cout << "\nNEW Standrard:\n";
	clock->setHour(5).setMinute(3).setSecond(8).printStandrard();
	cout << "\nNEW Universal:\n";
	clock->setHour(9).setMinute(19).setSecond(3).printUniversal();
	cout << '\n';
	delete clock;
	system("pause");
}