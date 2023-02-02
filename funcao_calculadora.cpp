#include "funcao_calculadora.h"

/*Este arquivo � o arquivo que armazena o loop da calculadora como uma �nica fun��o, para que n�o haja repeti��o
no c�digo principal.*/

float Num1, Num2;
char Operacao;
std::string Senhadeacesso = "potato";
std::string Senhadigitada;
char Resposta2;

void Calculadora()
{




	do
	{
		system("CLS");
		std::cout << "Digite o primeiro n�mero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo n�mero: ";
		std::cin >> Num2;
		std::cout << "\n****Opera��es****" << std::endl;
		std::cout << "+ Para adi��o" << std::endl;
		std::cout << "- Para subtra��o" << std::endl;
		std::cout << "* Para multiplica��o" << std::endl;
		std::cout << "/ Para divis�o" << std::endl;
		std::cout << "*****************" << std::endl;
		std::cout << "\nEscolha uma opera��o a ser realizada: ";
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

		default: std::cout << "\nNenhuma op��o v�lida selecionada" << std::endl;
			break;
		}
		std::cout << "\nDeseja calcular novamente? Digite S para sim e N para n�o: ";
		std::cin >> Resposta2;
		std::cout << "\n";
	} while (Resposta2 == 'S' || Resposta2 == 's');
}

void Principal()
{
	verificar();
}