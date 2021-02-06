#include <iostream>
#include <locale>
#include <cmath> // math.h

using namespace std;

int main()
{
    // Configurar idioma para portugu�s
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    double num, raiz;

    //{entrada de dados}
    cout << "Digite um n�mero positivo: ";
    cin >> num;

    // Valida��o dos dados (FORMA ERRADA)
    if (num < 0) //ISTO N�O ADIANTA. O FLUXO DO PROGRAMA CONTINUAR�!! 
    {
        cout << "Valor Inv�lido";
    }

    cout << endl << endl; // Pular 2 linhas

    //{Processamento: Tenta extrair a raiz quadrada do n�mero lido}
    raiz = sqrt(num); //AQUI SER� GERADO UM ERRO SE "Num" FOR NEGATIVO !!!
    //raiz = pow(num, (double)1/2); // Alternativa para calcular raiz quadrada: num elevado ao inverso de 2 (2 = pot�ncia 2 ou ao quadrado)

    cout << "Raiz quadrada de " << num << ": " << raiz << endl;

    return 0;
}