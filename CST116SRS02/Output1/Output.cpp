// Output1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double west_revenue{ 36364.87 };
	std::cout << "West:" << "$" << west_revenue << std::endl;

	double midwest_revenue{ 12431.33 };
	std::cout << "Midwest:" << "$" << midwest_revenue << std::endl;

	double east_revenue{ 127690.50 };
	std::cout << "East:" << "$" << east_revenue << std::endl;

	double south_revenue{ 9200.00 };
	std::cout << "South:" << "$" << south_revenue << std::endl;

    //West: $ 36,364.87
	//Midwest : $ 12,431.33
	//East : $ 127,690.50
	//South : $  9,200.00

    return 0;
}

