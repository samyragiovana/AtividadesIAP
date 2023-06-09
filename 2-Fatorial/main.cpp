#include <iostream>
#include <locale.h>
using namespace std;

/*2- Dado um n´umero inteiro n ≥ 0, informado pelo usu´ario, implemente um algoritmo que retorne
para ele o resultado do fatorial deste n´umero.*/

int main()

    //biblioteca para o programa "entender" em portugues
 {   setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    int n=0,i=1;
    unsigned long long f=1;

    //comando para o usuário digitar o número que ele deseja que seja fatorado
    cout << "Digite um número: " ;
    cin >> n;
    system("cls");

    //passo a passo do numero sendo fatorado
    for(i=1; i<=n; i++){
        f*=i;
        cout << f << " ";
    }

    //condição para caso o usuário não digitar um número válido
    if(n<=0){
        cout << "Invalido,digite outro numero: ";
        main();
    }

    //mostrar o resultado para o usuário
    cout << "\nFatorial de " << n << " e igual a " << f << endl;

    system("pause");
    return 0;
}
