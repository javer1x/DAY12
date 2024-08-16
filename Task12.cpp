#include <iostream>
using namespace std;
void concatenateStrings(const char* str1, const char* str2, char* result) {
    int index = 0;
    while (str1[index] != '\0') {
        result[index] = str1[index];
        index++;
    }
    int i = 0;
    while (str2[i] != '\0') {
        result[index] = str2[i];
        index++;
        i++;
    }
    result[index] = '\0';
}
int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    char result[50];
    concatenateStrings(str1, str2, result);
    cout << "Concatenated string: " << result << endl;
    return 0;
}