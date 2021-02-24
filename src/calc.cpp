#include <iostream>

using namespace std;

double somar(double n1, double n2) {
    return n1 + n2;
}

double subtrair(double n1, double n2) {
    return n1 - n2;
}

double multiplicar(double n1, double n2) {
    return n1 * n2;
}

double dividir(double n1, double n2) {
    if (n2 != 0)
        return n1 / n2;
    else
        cout << "Impossivel dividir por ZERO!" << endl;
    return 0;
}

int main() {
    double n1 = 0, n2 = 0;
    int resp = 0;

    do {
        cout << "Informe o primeiro numero:";
        cin >> n1;
        cout << "Informe o segundo numero:";
        cin >> n2;
        
        cout << "Soma -> " << somar(n1, n2) << endl;
        cout << "Subtracao -> " << subtrair(n1, n2) << endl;
        cout << "Multiplicacao -> " << multiplicar(n1, n2) << endl;
        cout << "Divisao -> " << dividir(n1, n2) << endl;

        cout << "Para encerrar digite 0, para calcular novamente digite outro numero inteiro:";
        cin >> resp;
    } while (resp != 0);
    
    return 0;
}

/* 
    commands: 
    g++ -o src/test1.exe src/calc.cpp
    src/test1.exe
*/