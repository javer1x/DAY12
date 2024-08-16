#include <iostream>
#include <string>
using namespace std;
int binaryToDecimal(const std::string &binaryStr) {
    int decimalValue = 0;
    int base = 1;
    for (int i = binaryStr.length() - 1; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            decimalValue += base;
        }
        base *= 2;
    }
    return decimalValue;
}
int main() {
  string binaryStr = "1101";
    int decimalValue = binaryToDecimal(binaryStr);
   cout << "Binary: " << binaryStr << ", Decimal: " << decimalValue << endl;
    return 0;
}