#include <iostream>

using namespace std;

// Calculo de potenciação usando função recursiva:

double elevarA(double num, int p) {
    if (p == 0)
        return 1;
    else if (p == 1)
        return num;
    else
        return num * elevarA(num, p - 1);
}

int main() {
    cout << elevarA(2, 3);
    return 0;
}
