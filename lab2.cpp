// c++ Inline function
#include <iostream>
using namespace std;

inline void DisplayNumber(int num) {
    cout << num << endl;
}

int main() {
    // first function call
    DisplayNumber(6);

    // second function call
    DisplayNumber(810);

    // third function call
    DisplayNumber(1000);

    return 0;
}
