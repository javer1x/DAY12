#include <iostream>
using namespace std;
int sumDoubleAndInt(double doubleNum, int intNum) {
    return static_cast<int>(doubleNum) + intNum;
}
int main() {
    int result = sumDoubleAndInt(7.89, 5);
   cout << "Sum of 7.89 (converted to integer) and 5 is : " << result << endl;
    return 0;
}