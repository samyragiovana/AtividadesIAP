#include <iostream>
using namespace std;

/*6- Voce deve escrever um programa que, dado o lado L da barra inicial, em centimetros, determina quantos pedaços havera
ao final do processo.*/

int main()
    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    int l, p = 1;

    //comando para o usuário digitar em centimetros o lado da barra
    cout << "Digite o tamanho do lado da barra(cm): ";
    cin >> l;

    //comando para limpar a tela
    system("cls");

    //cálculo  para saber em quantos pedaços serão divididos
    while (l >=2){
        p *=4;
        l /= 2;
    }

    //mostrar o resultado para o usário
    cout << "Ao final do processo terá " << p << " pedaços" << endl;

    system ("pause");
    return 0;
}
