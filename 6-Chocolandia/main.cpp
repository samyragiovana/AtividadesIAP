#include <iostream>
using namespace std;

/*6- Voce deve escrever um programa que, dado o lado L da barra inicial, em centimetros, determina quantos peda�os havera
ao final do processo.*/

int main()
    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�veis
    int l, p = 1;

    //comando para o usu�rio digitar em centimetros o lado da barra
    cout << "Digite o tamanho do lado da barra(cm): ";
    cin >> l;

    //comando para limpar a tela
    system("cls");

    //c�lculo  para saber em quantos peda�os ser�o divididos
    while (l >=2){
        p *=4;
        l /= 2;
    }

    //mostrar o resultado para o us�rio
    cout << "Ao final do processo ter� " << p << " peda�os" << endl;

    system ("pause");
    return 0;
}
