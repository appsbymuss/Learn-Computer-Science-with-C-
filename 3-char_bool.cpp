#include <iostream>
#include <iomanip>
// iomanip library is used for manipulating the input and output

using namespace std;

int main() {
    char my_char = 'A';
// char is a data type that is used to store a single character , we use single quotes to store a character
// we use double quotes to store a string
// ASCII is a character encoding standard used in computers and other devices , also used to represent characters in computers as numbers
// ASCII stands for American Standard Code for Information Interchange
// ASCII code contains 256 characters in it
// there s also UNI code that contains 1.1 million characters , used to represent characters in all languages also used to represent emojis
// UNICODE is a character encoding standard that has widespread acceptance
// UNICODE stands for Universal Coded Character Set
// UNICODE is a superset of ASCII
// UNICODE is a standard that defines the way that characters are represented in text files, web pages, and other types of documents
    char my_char2 = 65;
// we can store the ASCII code of a character in a char variable
// we can store the ASCII code of a character in an int variable
    int my_int = 'a';
// bool is a data type that is used to store a boolean value , it can be either true or false
    bool isMyInt = false;
    bool my_bool = true;
// 0 is used to represent false , 1 is used to represent true
    bool my_bool2 = 0;
    bool my_bool3 = 1;
    cout << my_char << endl;
    cout << my_char2 << endl;
    cout << my_int << endl;
    cout << isMyInt << endl;
    cout << my_bool << endl;
    cout << boolalpha << my_bool2 << endl;
    cout << boolalpha << my_bool3 << endl;
// boolalpha is used to print the boolean value as true or false
    return 0;
}

// comments is a text that is used to explain the code , it is not executed by the compiler
// there are two types of comments in C++ , single line comments and multi-line comments
// single line comments start with // and end with the end of the line
// multi-line comments start with /* and end with */