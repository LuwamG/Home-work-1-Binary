// Binary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <cmath>
using namespace std;

	int number;
	long binary=0;
	int reminder;
	int	i=1;
	long convertToBinary(int number) {

		while (number >= 0) {
			reminder = number % 2;
			number = number / 2;
			binary = binary + reminder * i;
			i = i * 10;
		}
		return binary;
	}
	int main() {
		int number;
		int binary;
		cout << "Enter a postive decimal number: ";
		cin >> number;
		if (number < 0) {
			cout << "Error! the number is negative." << endl;
		}
		binary = convertToBinary(number);
		cout << number << " in binary representation is " << binary << endl;
		return 0;
	}

