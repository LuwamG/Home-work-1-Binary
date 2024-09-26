#include <iostream>
using namespace std;

long convertToBinary(int number) { // Function to convert decimal to binary representation
    if (number < 0) {
        cout << "Error! The number is negative." << endl;
        return -1;
    }

    long binary = 0;
    int reminder;
    int i = 1;

    while (number != 0) {
        reminder = number % 2;
        number = number / 2;
        binary = binary + reminder * i;
        i = i * 10;
    }
    return binary;
}
     
int main() {
    int number;
    cout << "Enter a positive decimal number: ";
    cin >> number;

    long binary = convertToBinary(number); // Call the function
    if (binary != -1) { 
        cout << number << " in binary representation is " << binary << endl;
    }

    return 0;
}
