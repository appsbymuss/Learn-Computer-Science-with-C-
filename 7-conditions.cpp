#include <iostream>

using namespace std;

int main() {
// in our life we have a lot of conditions for doing something oder not
// if we have a condition we can use if statement
// if we have a condition and we want to do something else we can use else statement
if (5 < 4) {
//if the condition is true, the code inside the block will be executed
    cout << "hello from if" << endl;
} else {
//if the condition is false, the code inside the block will be executed
    cout << "hello from else" << endl;
}
// if we did one condition it s gonna check if the condition is true or false and pass to the next line 
if (5 > 4) {
    cout << "hello from if 2" << endl;
}
// if we have more than one condition we can use else if statement
if (5 == 4) {  
    // it verify the first condition, if it is true, it will execute the code inside the block and if not we will go to the next condition
    cout << "hello from if 3" << endl;
} else if (5 == 5) {
    cout << "hello from else if" << endl;
} else {
    cout << "hello from else 2" << endl;
}
    return 0;
}