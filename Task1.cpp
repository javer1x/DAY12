#include <iostream>
using namespace std;
float intToFloat(int num) {
    return static_cast<float>(num);
}
int main() {
    int sampleInteger = 10;
    float convertedFloat = intToFloat(sampleInteger);
    cout << "Integer: " << sampleInteger << ", Converted to float: " << convertedFloat <<endl;
    return 0;
}