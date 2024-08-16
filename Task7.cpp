#include <iostream>
#include <string>
using namespace std;
int hexToDecimal(const std::string &hexStr) {
    int decimalValue = 0;
    int base = 1;
    for (int i = hexStr.length() - 1; i >= 0; i--) {
        char ch = hexStr[i];
        int digit;
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        } else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }
        decimalValue += digit * base;
        base *= 16;
    }
    return decimalValue;
}
int main() {
    string hexStr = "1A";
    int decimalValue = hexToDecimal(hexStr);
   cout << "Hexadecimal: " << hexStr << ", Decimal: " << decimalValue <<endl;
    return 0;
}