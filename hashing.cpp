#include "hashing.h"

//Essa � uma fun��o simples para hashear a string recebida que � utilizada como senha.
//O funcionamento da fun��o tem como intuito receber o endere�o de cada caractere contido na string e deslocar seus bits
//atrav�s dos operadores, resolvendo a opera��o e retornando esse valor a string.

unsigned int Hash(const std::string data)
{
	unsigned int i(0);

	for (unsigned int ch : data)
		i = ch + (i << 4) + (i << 10) - i;


	return i;
}