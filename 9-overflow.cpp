#include <iostream>
#include <Windows.h>
#include <climits> // Include this header for INT_MAX

using namespace std;

int main() {
    int i = 1;
    while (1) {
        cout << i << endl;
        Sleep(1000);
        // sleep means that the program will wait for the time that we specify in milliseconds
        if (i > INT_MAX / 2) { // Check for potential overflow
            cout << "Overflow will occur on next iteration." << endl;
        }
        i *= 2;
    }

    // the program will run forever because the condition will always be true
    // the program will run until the variable i reach the maximum value that the integer can hold
    // when the variable i reach the maximum value, it will overflow and the value will be negative
    // overflow is a situation where the value of a variable exceeds the maximum value that the data type can hold
    return 0;
}