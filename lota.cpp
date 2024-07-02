#include <iostream>

using namespace std;

int main() {
    int num= 0;

    while (true) {
        cout << num << endl;
        num = num % 6;
    }
    return 0;
}