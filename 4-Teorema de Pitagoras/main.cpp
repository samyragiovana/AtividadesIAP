#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>

/*4- Faça um programa que, dados os valores dos catetos informados pelo usuário, apresente para ele
o cálculo realizado e o valor da hipotenusa.*/

using namespace std;

int main()
    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    float b,c;

    //comando para o usuário digitar o valor do cateto b
    cout << "Digite o valor do cateto b: ";
    cin >> b;

    //comando para o usuário digitar o valor do cateto c
    cout << "Digite o valor do cateto c: ";
    cin >> c;

    //comando para limpar a tela
    system("cls");

    //cálculos realizados e sendo mostrados para o usuário passo a passo
    cout << "Hipotenusa = " << b << "²" << " + " << c << "²" << endl;
    cout << "Hipotenusa = " << pow(b,2) << " + " << pow(c, 2) << endl;
    cout << "Hipotenusa = " << pow(b,2) + pow(c, 2) << endl;
    cout << "Hipotenusa = " << " raiz de " << pow(b,2) + pow(c,2) << endl;
    cout << "Hipotenusa = " << setprecision(4) << hypot(b,c) << endl;

    system("pause");
    return 0;
}
