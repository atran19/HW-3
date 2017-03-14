/////////////////
//Anna Tran
//ex03_01
//CS 273
/////////////////

#include "ex03_01.h"
#include <stdexcept>
#include<iostream>
#include <string>
#include"stdafx.h"
using namespace std;


int read_int(const string &prompt, int low, int high)
{
	cin.exceptions(ios_base::failbit);
	int num = 0;
	if (low >= high)
	{
		throw std::invalid_argument (& ex);
	}
	while (true) { // Loop until valid input
	
		try {
		cout << prompt;
			cin >> num;
			if (num<low || num>high)
			{
				throw range_error("e");
			}
			return num;
			
		}
		catch (ios_base::failure& ex) {
			cout << "Bad numeric string -- try again\n";
			// Reset the error flag
			cin.clear();
			// Skip current input line
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
		catch (std::invalid_argument& ex) {
			cout << "Invalid number" << endl;
			cin >> num;
		}
		catch (const char *e)
		{
			cout << "Exception has occured" << e << endl;
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');

		}

		
	}
	
}



