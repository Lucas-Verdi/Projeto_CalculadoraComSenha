#include "hashing.h"

//Essa é uma função simples para hashear a string recebida que é utilizada como senha.
//O funcionamento da função tem como intuito receber o endereço de cada caractere contido na string e deslocar seus bits
//através dos operadores, resolvendo a operação e retornando esse valor a string.

unsigned int Hash(std::string& data)
{
	unsigned int i(0);

	for (unsigned int ch : data)
		i = ch + (i << 4) + (i << 10) - i;


	return i;
}