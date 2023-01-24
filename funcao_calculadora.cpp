#include "funcao_calculadora.h"

/*Este arquivo é o arquivo que armazena o loop da calculadora como uma única função, para que não haja repetição
no código principal.*/

float Num1, Num2;
char Operacao;
std::string Senhadeacesso = "senha";
std::string Senhadigitada;
char Resposta2;

void Calculadora()
{




	do
	{
		system("CLS");
		std::cout << "Digite o primeiro número: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo número: ";
		std::cin >> Num2;
		std::cout << "\n****Operações****" << std::endl;
		std::cout << "+ Para adição" << std::endl;
		std::cout << "- Para subtração" << std::endl;
		std::cout << "* Para multiplicação" << std::endl;
		std::cout << "/ Para divisão" << std::endl;
		std::cout << "*****************" << std::endl;
		std::cout << "\nEscolha uma operação a ser realizada: ";
		std::cin >> Operacao;

		switch (Operacao)
		{
		case '+': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 + Num2) << std::endl;
			break;

		case '-': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 - Num2) << std::endl;
			break;

		case '*': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 * Num2) << std::endl;
			break;

		case '/': std::cout << "\nResultado: " << std::setprecision(5) << (Num1 / Num2) << std::endl;
			break;

		default: std::cout << "\nNenhuma opção válida selecionada" << std::endl;
			break;
		}
		std::cout << "\nDeseja calcular novamente? Digite S para sim e N para não: ";
		std::cin >> Resposta2;
		std::cout << "\n";
	} while (Resposta2 == 'S' || Resposta2 == 's');
}

void Principal()
{
	verificar();
}