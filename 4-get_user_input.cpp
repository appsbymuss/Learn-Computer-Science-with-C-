#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int my_age;
// when i declare a variable without initializing it , it will contain a garbage value
// other languages of programming initialize the variable with a default value "Garbage collection" , but in C++ it will contain a garbage value
// garbage value is a value that is stored in a variable that is not initialized

    cout << "Enter your age:\n";
// \n is special character that is used to insert a new line
// cout is an object of ostream class which is used to print the output
    cin >> my_age;
// cin is an object of istream class which is used to take the input
    cout << "Your age is: " << my_age << endl;
    return 0;
}