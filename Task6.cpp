#include <iostream>
using namespace std;
float doubleToFloat(double doubleNum) {
    return static_cast<float>(doubleNum);
}
int main() {
    double doubleVal = 1.123456789012345;
    float floatVal = doubleToFloat(doubleVal);
    cout << "Original double: " << doubleVal << ", Converted to float: " << floatVal << endl;
    return 0;
}