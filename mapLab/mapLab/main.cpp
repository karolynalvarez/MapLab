using namespace std;
#include <iostream>
#include <string>
#include "Map.h"

void GoNorth( )

int main()
{
	Map map = Map("Home")
		int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "Choose an option " << endl;
		cout << "0) Exit" << endl;
		cout << "1) Get current location info" << endl;
		cout << "2) Go North " << endl;

		cin >> choice
			switch (choice) {
			case 0: break;
			case 1: cout << map._currentLocation->GetLocationInfo() << endl;
			default: cout << "Please enter a valid option" << endl; break;
			}
			
			system("pause")
	}
		 
	return 0;


}

voidGoNorth(Map &map)
{
	Location newLocation = Location("North of home");
	map._currentLocation =&newLocation;  
}