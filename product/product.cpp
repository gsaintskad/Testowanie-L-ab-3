// product.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"fizzbuzz.h"
std::string fizzbuzz(int inp_num)
{
	long double num = static_cast<long double>(inp_num);

	long double remainderOf3 = num / 3 - static_cast<int>(num / 3);
	long double remainderOf5 = num / 5 - static_cast<int>(num / 5);



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
