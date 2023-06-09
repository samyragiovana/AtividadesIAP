#include <iostream>
using namespace std;

/*1- Neste exercício, voce devera reproduzir a Sequencia de Fibonacci utilizando lacos de
repetic˜ao e/ou estruturas condicionais. Peca ao usuario para entrar com o numero de termos da
sequencia. Imprima na tela todos os termos da sequencia ate a quantidade recebida. Mostre a
soma de todos os termos apresentados.*/

int main ()

    //Biblioteca para aceitar a lingua portuguesa
{   setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    int num, ant = 1, atual = 1, prox, soma=0;

    //comando para o usuário digitar quantos termos ele deseja que a sequência de Fibonacci tenha
    cout << "Digite a quantidade de termos da sequência Fibonacci você deseja: ";
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

    //soma dos números
    soma = soma + prox;
    }
    }

    //soma dos números da sequencia sendo apresentado ao usuario
    cout << "\nSoma dos números da sequência : " << soma;

    cout << endl;

    system("pause");
    return 0;

}
