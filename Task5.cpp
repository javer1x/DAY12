#include <iostream>
using namespace std;
void demonstrateConversion() {
    int integerVal = 10;
    double doubleVal = 3.5;
    // Implicit Conversion
    double resultImplicit = integerVal + doubleVal;  // int + double -> double
    cout << "Implicit Conversion Result (int + double): " << resultImplicit << " (type: double)" << endl;
    int resultExplicit = integerVal + static_cast<int>(doubleVal);  // int + int -> int
   cout << "Explicit Conversion Result (int + int): " << resultExplicit << " (type: int)" << endl;
}
int main() {
    demonstrateConversion();
    return 0;
}