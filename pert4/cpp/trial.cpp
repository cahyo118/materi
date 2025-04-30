#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;

    int hasil = a + b;

    if (hasil > 10) {
        hasil = hasil - 3;
        cout << hasil << endl;
    } else {
        hasil = hasil + 10;
        cout << hasil << endl;
    }

    return 0;
}
