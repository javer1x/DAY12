#include <iostream>
using namespace std;
void extractSubstring(const char* str, int start, int length, char* result) {
    for (int i = 0; i < length; i++) {
        result[i] = str[start + i];
    }
    result[length] = '\0';
}
int main() {
    const char* myString = "Hello, World!";
    char result[20];
    extractSubstring(myString, 7, 5, result);
    cout << "Extracted substring: " << result <<endl;
    return 0;
}