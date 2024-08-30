#include <iostream>

// every program in the world have some data to deal with it , so we need to store this data in some place in the memory
// there's a lot of types of memory in the computer like RAM, ROM, Cache, Registers, Hard disk, etc.
// the RAM is a volatile memory, which means that it loses the data when the power is turned off
// the ROM is Read only memoire, and computer use it to store the BIOS and the firmware of the computer
// the Cache is a small memory that is used to store the data that is used frequently
// the Registers is a small memory that is used to store the data and the instructions of the program
// the Hard disk is a storage device that is used to store the data and the programs for a long time
// RAM memory is divided into two parts, the stack and the heap
// the stack is used to store the local variables of the functions and the return address of the functions
// the heap is used to store the dynamic memory that is allocated during the runtime of the program
// Ram composed of a lot of cells, and each cell has an address , every address has number in binary system
// every cell has a size of 8 bits, and 8 bits is equal to 1 byte
// kilo byte is equal to 1024 bytes, mega byte is equal to 1024 kilo bytes, giga byte is equal to 1024 mega bytes and everytime we multiply by 2**10
// word is a group of bits that is processed as a single unit of data
// the size of the word is equal to the size of the register
// the size of the register is equal to the size of the data bus
// the data bus is a group of wires that is used to transfer the data between the CPU and the memory
// the size of the data bus is equal to the size of the address bus
// the address bus is a group of wires that is used to transfer the address of the data between the CPU and the memory
// the address is represented in the binary system
// We can replace the adress number with the name of the variable, and this is called the variable and we give the variable a name
// the variable is a container that is used to store the data
// the variable has a name, a type, a value, and an address
// the type of the variable is used to specify the size of the variable and the type of the data that the variable can store
// data types are used to specify the type of the data that the variable can store
// there are a lot of data types in C++ like int, float, double, char, bool, etc.
// int is used to store the integer numbers
// byte is used to store 1 byte of data and take from 0 to 255
// long is used to store the long integer numbers
// byte < int < long < long long
// signed number can take negative and positive numbers , can take from -128 to 127 , 2**7 - 1
// unsigned number can take only positive numbers , can take from 0 to 255, 2**8 - 1
// we stock into th byte 2**8 - 1 numbers
// sign bit is the most significant bit in the byte
// the sign bit is used to represent the sign of the number
// short = 1/2 long
using namespace std; 
/*
regles in programming :
1- syntax rules : like we can t use keyword reserved as a variable name , variable name can't include special characters like @, #, $, %, ^, &, *, etc., variable name can't start with a number, etc. , don 't use the same name for two variables in the same scope, etc.
2- semantic rules : like we can't divide by zero, we can't access the memory that is not allocated, we can't use the variable before declaring it, etc.
3- logical rules : like we can't use the variable before declaring it, we can't use the variable before initializing it, etc.
4- conventional rules : like we should use the meaningful names for the variables, we should use the camel case for the variable names, we should use the underscore for the function names, etc., name of variable must be descriptive and symbolic to what we stock in , etc.
*/
int main(){

    cout << "Hello, World!" << endl;
    return 0;
}