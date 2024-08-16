#include <iostream>
using namespace std;
int charToInt(char ch) {
    return ch - '0';
}
int main() {
    char charDigit = '5';
    int convertedInteger = charToInt(charDigit);
   cout << "Character: '" << charDigit << "', Converted to integer: " << convertedInteger << endl;
    return 0;
}