#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/*5- Escreva um programa que, dados os valores recebidos de a, b e c, calcule o valor de delta e, se delta > 0,
encontre as raızes da equaç˜ao (x1 e x2)*/

int main()
    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    float a,b,c,x1,x2,delta,b2;

    //comando para o usuário digitar o valor de a
    cout << "Digite o valor de a: ";
    cin >> a;

    //comando para o usuário digitar o valor de b
    cout << "Digite o valor de b: ";
    cin >> b;

    //comando para o usuário digitar o valor de c
    cout << "Digite o valor de c: ";
    cin >> c;

    //comando para limpar a tela
    system("cls");

    //o valor de b elevado ao quadrado
    b2 = b * b;

    //calculo de delta
    delta = b2 - (4 * a * c);

    //condição caso os números sejam inválidos
    if (delta < 0 || (2 * a) == 0){
        cout << "Não e possível calcular \n";
    }

    //cálculo da fórmula
    else {
        x1 = (( - b + sqrt(delta)) / (2 * a));
        x2 = (( - b - sqrt(delta)) / (2 * a));

        //mostrar o resultado para o usuário
        cout << "x1 = " << setprecision(2) << x1 << endl;
        cout << "x2 = " << setprecision(2) << x2 << endl;
    }

    system("pause");
    return 0;
}
