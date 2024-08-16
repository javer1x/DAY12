#include <iostream>
using namespace std;
bool compareStrings(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}
int main() {
    const char* string1 = "Hello, World!";
    const char* string2 = "Hello, World!";
    const char* string3 = "Hello, Universe!";

    cout << "String 1 and String 2 are " << (compareStrings(string1, string2) ? "equal" : "not equal") << endl;
    cout << "String 1 and String 3 are " << (compareStrings(string1, string3) ? "equal" : "not equal") << endl;
    return 0;
}