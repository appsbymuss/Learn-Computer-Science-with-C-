#include <iostream>

using namespace std;
// loops are used to repeat the code multiple times 
// there are 3 types of loops in c++
// 1- for loop : used when we know how many times we want to repeat the code
// 2- while loop : used when we don't know how many times we want to repeat the code
// 3- do while loop : used when we want to execute the code at least one time
int main() {
// for loop demonstration 
int i = 0;
loop:
if( i < 10) {
    cout << i << endl;
    i++;
    goto loop;
    // goto is a statement that allows us to jump to a specific line of code
    // loop is a label of line that we can jump to
}
// for loop used when i know how many times i want to repeat the code 
for (int i = 0; i < 10; i++) {
// for (initialization; condition; increment/decrement step)
    cout << i << endl;
}
// while loop demonstration
int j = 0;
while (j < 10) {
// while (condition)
    cout << j << endl;
    j++;
// we added j++ to avoid infinite loop
}
// DO while loop demonstration
int k = 0;
do {
    cout << k << endl;
    k++;
} while (k < 10);
// do { instructions } while (condition);
// the difference between while and do while is that do while will execute the code at least one time even if the condition is false 
    return 0;
}