#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "menusAndHeaders.c"
#include "languagePrograms.c"
#include "ifVerificador.c"

int main(void)
{
	inicioLanguage :
	menuLanguageChoice();
	char decisionLanguage;
	scanf ("%c", &decisionLanguage);

	switch (decisionLanguage)
	{
		//English
		case '1':
			programLanguageEnglish();
			break;

		//Português
		case '2':
			programLanguagePortuguese();
			break;

		case '3':
			exit(0);

		default:
			goto inicioLanguage;
	}
	goto inicioLanguage;
}
