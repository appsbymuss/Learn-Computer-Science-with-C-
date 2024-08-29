#include <iostream>
// ios library is used for input and output
//#include is a preprocessor directive that tells the compiler to include the iostream library before compiling the program
using namespace std;
// using namespace std is used to avoid writing std:: before cout and endl
// namespace is a declarative region that provides a scope to the identifiers (names of the types, functions, variables etc) inside it
// std is a namespace that contains the standard C++ library

// main() is the entry point of the program
int main() {
    cout << "Hello, World!" << endl;
    // cout is an object of ostream class which is used to print the output
    // << is the insertion operator which is used to insert the output
    // endl is used to insert a new line
    //; is used to terminate the statement
    return 0;
    // return 0 is used to exit the program
}
// The output of the program is "Hello, World!" followed by a new line
// to compile the program, use the command g++ Hello_world.cpp -o Hello_world
// to run the program, use the command ./Hello_world
// g++ is a compiler that compiles the program
// -o is an option that is used to specify the output file name
// ./ is used to run the program
// Hello_world is the name of the output file
// the error who raised in compling the program we call it compiltion error
// the error who raised in running the program we call it runtime error
// the error who raised in logic of the program we call it logical error
// the error who raised in syntax of the program we call it syntax error
// the error who raised in the program we call it bug
// we need to read the error message to know the type of the error also how to fix it
// :line number is the line number in the code that caused the error
// :error message is a description of the error that occurred