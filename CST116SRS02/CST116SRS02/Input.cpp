// CST116SRS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double score1;

	std::cout << "Enter a number: ";
    std::cin >> score1;

	std::cout<< std::scientific << score1;
	
    return 0;
}

