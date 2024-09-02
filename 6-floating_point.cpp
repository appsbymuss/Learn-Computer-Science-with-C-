#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x = 3.5;
    // float 4 bytes 
    // double 8 bytes = 2 * float
    cout << x/2 << endl;
    // when we have mathematic operations with float and int, the result will be float because float has more precision and global range ( Numbers N is into Numbers R)
    //when we have mathematic operations with same data type, the result will be the same data type

    //analyse exception
    cout << (0.1 + 0.2 == 0.3) << endl;
    // 0 means false
    cout << (0.1 + 0.2) << endl;
    // 0.3 but when come back to logical operation it will be false
    cout << setprecision(30) << (0.1 + 0.2) << endl;
    // 0.300000000000000044408920985006
    // the result is not exactly 0.3 because the computer has a limit of memory to store the number
    // the computer uses the binary system to store the number, and the number 0.1 and 0.2 are not exactly representable in binary system
    cout << boolalpha << (0.1 + 0.2 > 0.3) << endl;
    // true
    // the result is greater than 0.3, but the result is not exactly 0.3
    cout << boolalpha << (0.1 * 10 + 0.2 *10 == 0.3 *10 ) << endl;
    // true
    return 0;
}