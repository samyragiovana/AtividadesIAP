#include <iostream>
using namespace std;

/*3- Neste exercício, faça um programa que pergunte ao usuário quantos termos ser˜ao calculados na
PA (n), o valor do primeiro termo (a1) e a raz˜ao (r ). Apresente na tela todos os termos da PA já
ordenados (utilize variáveis auxiliares para isso) e a soma dos n termos (Sn) */

int main()

    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declaracçao de variáveis
    int n=0, a1=0, r=0,pa=0,an=0,nn=0,sn=0,i=1;

    /*comando para perguntar quantos "numeros" o ususario quer que a PA tenha,tem que ser maior que zero,caso não seja,é inválido ate
    ele digitar um número maior que 1*/
    cout << "Quantos termos você deseja calcular: " ;
    do{ cin >> n;
    }while(n<0);

    //comando para o usuário digitar o primeiro numero da sequencia
    cout << "Digite o primeiro termo: ";
    cin >> a1;

    //comando para o usuário digitar de quanto em quanto ele quer que os numeros apareçam
    cout << "Digite a razao: ";
    cin >> r;

    //comando para limpar a tela
    system("cls");

    //condição para mostrar a sequencia e fazer os calculos necessários
    for(i=1;i<=n; i++) {
      an = a1 + (i - 1) * r;
      cout << an << "  " ;
      sn = ((a1 + an) * i) / 2;
    }

    //mostrar o resultado para o usuário
    cout << "\nO resultado da PA é:" << sn << endl;

    system("pause");
    return 0;
}
