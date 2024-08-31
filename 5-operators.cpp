#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x = 7;
// all operations have operands and operators
// operands are the values that are used in the operation
// operators are the symbols that are used to perform the operation
    cout << "Arithmetic Operators \n";
    // Arithmetic Operators
    cout << "Addition: x + 7 = " << x + 7 << endl; // Addition
    cout << "Subtraction: x - 7 = " << x - 7 << endl; // Subtraction
    cout << "Multiplication: x * 7 = " << x * 7 << endl; // Multiplication
    cout << "Division: x / 7 = " << x / 7 << endl; // Division
    cout << "Modulus: x % 7 = " << x % 7 << endl; // Modulus


    cout << "Comparison Operators \n";
    // Comparison Operators
    cout << "Equal: x == 7 = " << (x == 7) << endl; // Equal
    cout << "Not Equal: x != 7 = " << (x != 7) << endl; // Not Equal
    cout << "Greater Than: x > 7 = " << (x > 7) << endl; // Greater Than
    cout << "Less Than: x < 7 = " << (x < 7) << endl; // Less Than
    cout << "Greater Than or Equal: x >= 7 = " << (x >= 7) << endl; // Greater Than or Equal
    cout << "Less Than or Equal: x <= 7 = " << (x <= 7) << endl; // Less Than or Equal
// if we remove "()" , it will raise an error 
    cout << "Logical Operators \n";
    // Logical Operators
    cout << "true && true = " << (true && true) << endl; // AND
    cout << "true && false = " << (true && false) << endl; // AND
    cout << "true || true = " << (true || true) << endl; // OR
    cout << "true || false = " << (true || false) << endl; // OR
    cout << "!true = " << !true << endl; // NOT
    cout << "!false = " << !false << endl; // NOT

    cout << "post fix and pre fix \n";
    // post fix and pre fix
    // post fix is used to increment or decrement the value after using it
    cout << "Postfix Increment: x++ = " << x++ << endl; // Postfix Increment
    cout << "Postfix Decrement: x-- = " << x-- << endl; // Postfix Decrement
    // pre fix is used to increment or decrement the value before using it
    cout << "Prefix Increment: ++x = " << ++x << endl; // Prefix Increment
    cout << "Prefix Decrement: --x = " << --x << endl; // Prefix Decrement

// all operators have a precedence level we can use parenthesis to change the precedence level
    cout << (5+(6-3)*2/4) << endl;
    // (5+(6-3)*2/4) = (5+(3)*2/4) = (5+6/4) = (5+1) = 6
    int y = 5;
    int z = y = 6;
    //left to right associativity
    cout << z << ", " << y;
    // short hand operators
    int a ;
    a = x +5;
    a += 6; // a = a + 6
    a -= 6; // a = a - 6
    a *= 6; // a = a * 6
    a /= 6; // a = a / 6
    a %= 6; // a = a % 6
    cout << a;

    return 0;
}


// we can also use the associativity to change the order of operations
// there are also some operators that are used to change the value of the operand
// these are called assignment operators
// there are also some operators that are used to compare the value of the operand
// these are called comparison operators

