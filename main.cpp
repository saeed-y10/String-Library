// clsString Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsString.h"

int main()
{
	clsString String1("Mohammed Abu-Hadhoud");

	cout << clsString::CountVowels("Mohammed Abu-Hadhoud") << endl;

	cout << clsString::CountWord("SAEED SAEED SAEED,  SA", "SAEED");
	
	return 0;
}
