// product.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"fizzbuzz.h"
std::string fizzbuzz(int num)
{
	

	int remainderOf3 = num % 3 ;
	int remainderOf5 = num % 5 ;



	if (remainderOf3 == 0 && remainderOf5 == 0) {
		return "fizzbuzz";
	}
	else if (remainderOf3 == 0) {
		return "3";
	}
	else if (remainderOf5 == 0) {
		return "5";
	}

	return "NULL";
}
