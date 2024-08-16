#include <iostream>
using namespace std;
int main() {
    const char* str = "Hello, World!";
    char ch = 'o';  
    int count = 0;  
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    cout << "Character '" << ch << "' appears " << count << " times in the string." << endl;
    return 0;
}
