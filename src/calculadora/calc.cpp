#include <iostream>
#include "operations.h"

using namespace std;

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
        
        int result = dividir(n1, n2);
        
        if (result == -1)
            cout << "Impossivel dividir por ZERO!" << endl;
        else
            cout << "Divisao -> " << result << endl;
        
        cout << "Para encerrar digite 0, para calcular novamente digite outro numero inteiro:" << endl;
        cin >> resp;
    } while (resp != 0);
    
    return 0;
}

/* 
    commands: 
    g++ -o src/calculadora/test1.exe src/calculadora/calc.cpp
    src/calculadora/test1.exe
*/