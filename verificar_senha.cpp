#include "verificar_senha.h"
#include "funcao_calculadora.h"

/*Neste arquivo se encontra a função que separadamente verifica a igualdade da senha inserida com a senha de acesso
e executa o programa principal de acordo com as condições estabelecidas.*/

extern std::string Senhadeacesso;
extern std::string Senhadigitada;

void verificar()
{


	std::cout << "Digite a senha: ";
	std::cin >> Senhadigitada;

	Senhadigitada = Hash(Senhadigitada);
	Senhadeacesso = Hash(Senhadeacesso);


	if (Senhadeacesso == Senhadigitada)
	{
		Calculadora();
	}

	else
	{
		do
		{
			system("CLS");
			std::cout << "Senha incorreta, digite novamente: ";
			std::cin >> Senhadigitada;
			Senhadigitada = Hash(Senhadigitada);
		} while (Senhadigitada != Senhadeacesso);
	}
	if (Senhadigitada == Senhadeacesso)
	{
		Calculadora();
	}
}