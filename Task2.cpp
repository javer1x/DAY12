#include <iostream>
using namespace std;
int floatToInt(float num) {
    return static_cast<int>(num);
}
int main() {
    cout << floatToInt(10.75) <<endl;  // Expected: 10
   cout << floatToInt(-7.89) <<endl;  // Expected: -7
    return 0;
}