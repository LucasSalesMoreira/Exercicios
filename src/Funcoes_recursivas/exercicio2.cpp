#include <iostream>

using namespace std;

double somarIndexs(double array[], int length) {
    if (length == 0)
        return 0;
    else   
        return array[length - 1] + somarIndexs(array, length - 1);
}

int main() {
    double n[] = { 5, 10.5, 20, 4 };  
    int length = sizeof(n) / 8;
    cout << length << endl;
    cout << somarIndexs(n, length);
    return 0;
}