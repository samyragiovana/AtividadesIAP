#include <iostream>
using namespace std;

/*1- Neste exerc�cio, voce devera reproduzir a Sequencia de Fibonacci utilizando lacos de
repetic�ao e/ou estruturas condicionais. Peca ao usuario para entrar com o numero de termos da
sequencia. Imprima na tela todos os termos da sequencia ate a quantidade recebida. Mostre a
soma de todos os termos apresentados.*/

int main ()

    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�veis
    int num, ant = 1, atual = 1, prox, soma=0;

    //comando para o usu�rio digitar quantos termos ele deseja que a sequ�ncia de Fibonacci tenha
    cout << "Digite a quantidade de termos da sequ�ncia Fibonacci voc� deseja: ";
    cin >> num;

    //comando para executar a sequencia
    for(int i = 1; i <= num; i++){
    if (i == 1){
    cout << " 0 ";
    }
    else if (i == 2 || i == 3){
    cout << "1 ";
    soma = soma + atual;
    }
    else{
    prox = ant + atual;
    ant = atual;
    atual = prox;
    cout <<" "<< prox;

    //soma dos n�meros
    soma = soma + prox;
    }
    }

    //soma dos n�meros da sequencia sendo apresentado ao usuario
    cout << "\nSoma dos n�meros da sequ�ncia : " << soma;

    cout << endl;

    system("pause");
    return 0;

}
