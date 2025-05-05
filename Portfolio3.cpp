#include "Portfolio3Header.h"

#include <sstream>
#include <iostream>
#include <vector>

using namespace std;
int main() {
	cout << "Provide grid layout (size with amount of rows and columns): ";
	int rowinput;
	cin >> rowinput;
	int columninput;
	cin >> columninput;

	cout << "Provide a number (of generation or generations) to emulate: ";
	int generationinput;
	cin >> generationinput;


	//get rid of content on the line
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Provide birth count: ";
	string userinputline;
	getline(cin, userinputline);

	// parse the string (no hard coded integers, allows the program to be more customizable)
	istringstream parsestring(userinputline);

	vector<int>birthcountslist;
		int var2;
		while (parsestring >> var2) {
		birthcountslist.push_back(var2);


	}

		cout << "Input surival count number: ";
		getline(cin, userinputline);
		istringstream var1(userinputline);
		vector<int> survivevar;
		while (var1 >> var2) {
			survivevar.push_back(var2);

		}
		// main emulation code block (also a constructor of class Port3 from header file)

		
		//Port3 emulationblock(rowinput, columninput, generationinput, survivevar);
		//emulationblock.changegridatrandom();  

		//for (int generationvar = 0; generationvar < generationinput; ++generationvar) {
			//cout << "Current generation tracker: " << generationvar;
			//emulationblock.cout();
			//emulationblock.gouponegen();
		//} 

		// fix issue above (rowinput keeps on highlighting red for error)


		
	





}