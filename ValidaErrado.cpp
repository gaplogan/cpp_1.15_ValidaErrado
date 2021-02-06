#include <iostream>
#include <locale>
#include <cmath> // math.h

using namespace std;

int main()
{
    // Configurar idioma para português
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    double num, raiz;

    //{entrada de dados}
    cout << "Digite um número positivo: ";
    cin >> num;

    // Validação dos dados (FORMA ERRADA)
    if (num < 0) //ISTO NÃO ADIANTA. O FLUXO DO PROGRAMA CONTINUARÁ!! 
    {
        cout << "Valor Inválido";
    }

    cout << endl << endl; // Pular 2 linhas

    //{Processamento: Tenta extrair a raiz quadrada do número lido}
    raiz = sqrt(num); //AQUI SERÁ GERADO UM ERRO SE "Num" FOR NEGATIVO !!!
    //raiz = pow(num, (double)1/2); // Alternativa para calcular raiz quadrada: num elevado ao inverso de 2 (2 = potência 2 ou ao quadrado)

    cout << "Raiz quadrada de " << num << ": " << raiz << endl;

    return 0;
}