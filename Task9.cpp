#include <iostream>
using namespace std;
int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    const char* myString = "Hello, World!";
    int length = stringLength(myString);
    cout << "Length of the string \"" << myString << "\": " << length << endl;
    return 0;
}