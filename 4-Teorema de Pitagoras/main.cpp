#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>

/*4- Fa�a um programa que, dados os valores dos catetos informados pelo usu�rio, apresente para ele
o c�lculo realizado e o valor da hipotenusa.*/

using namespace std;

int main()
    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�veis
    float b,c;

    //comando para o usu�rio digitar o valor do cateto b
    cout << "Digite o valor do cateto b: ";
    cin >> b;

    //comando para o usu�rio digitar o valor do cateto c
    cout << "Digite o valor do cateto c: ";
    cin >> c;

    //comando para limpar a tela
    system("cls");

    //c�lculos realizados e sendo mostrados para o usu�rio passo a passo
    cout << "Hipotenusa = " << b << "�" << " + " << c << "�" << endl;
    cout << "Hipotenusa = " << pow(b,2) << " + " << pow(c, 2) << endl;
    cout << "Hipotenusa = " << pow(b,2) + pow(c, 2) << endl;
    cout << "Hipotenusa = " << " raiz de " << pow(b,2) + pow(c,2) << endl;
    cout << "Hipotenusa = " << setprecision(4) << hypot(b,c) << endl;

    system("pause");
    return 0;
}
