#include <iostream>
using namespace std;

int stringToInt(const char* str) {
    int result = 0;
    int index = 0;
    bool isNegative = false;
    if (str[index] == '-') {
        isNegative = true;
        index++;
    }
    while (str[index] != '\0') {
        if (str[index] < '0' || str[index] > '9') {
            cerr << "Invalid input: Non-numeric character encountered." << endl;
            return 0; 
        }
        result = result * 10 + (str[index] - '0');
        index++;
    }
    if (isNegative) {
        result = -result;
    }
    return result;
}
int main() {
    const char* numericString = "-123";
    int convertedInteger = stringToInt(numericString);
    cout << "String \"" << numericString << "\" converted to integer: " << convertedInteger << endl;
    return 0;
}