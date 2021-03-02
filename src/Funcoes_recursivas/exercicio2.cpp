#include <iostream>

using namespace std;

double somarIndexs(double array[], int length) {
    if (length == 0)
        return array[0];
    else {    
        return array[length] + somarIndexs(array, length - 1);
    }
}

int main() {
    double n[] = { 5, 10.5, 20, 15, 27.5,
                   5, 10.5, 20, 15, 27.5, 
                   5, 10.5, 20, 15, 27.5, 
                   0.5 }; 
    int length = sizeof(n) / 8;
    cout << somarIndexs(n, length);
    return 0;
}