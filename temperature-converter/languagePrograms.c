void programLanguageEnglish()
{
	inicio:
	menuTempConversionEnglish();
	char decisaoConversao;
	fflush (stdin);
	scanf ("%c", &decisaoConversao);

	switch (decisaoConversao)
	{
		// Celsius to Fahrenheit
		case '1':
		{
			headerCase1();
			double tempCelsius, tempFahrenheit;

			printf("\n      Enter the desired temperature in Celsius: ");
			scanf(" %lf", &tempCelsius);

			tempFahrenheit = ((tempCelsius*9.0/5.0)+32.0);

			// Aplicação da função de verificação de números com casas decimais
			printf("      The converted temperature is: %.1lf\n\n", tempFahrenheit);
			break;
        }

		// Celsius to Kelvin
		case '2':
        {
			headerCase2();
			double tempCelsius, tempKelvin;

			printf("\n      Enter the desired temperature in Celsius: ");
			scanf(" %lf", &tempCelsius);

			tempKelvin = (tempCelsius+273.15);

			// Aplicação da função de verificação de números com casas decimais
			printf("      The converted temperature is: %.1lf\n\n", tempKelvin);

			break;
        }

		// Fahrenheit to Celsius
		case '3':
		{
			headerCase3();
			double tempCelsius, tempFahrenheit;

			printf("\n      Enter the desired temperature in Fahrenheit: ");
			scanf(" %lf", &tempFahrenheit);

			tempCelsius = (5.0*(tempFahrenheit-32.0)/9.0);

			// Aplicação da função de verificação de números com casas decimais
			printf("      The converted temperature is: %.1lf\n\n", tempCelsius);

			break;
		}

		// Fahrenheit to Kelvin
		case '4':
		{
			headerCase4();
			double tempKelvin, tempFahrenheit;

			printf("\n      Enter the desired temperature in Fahrenheit: ");
			scanf(" %lf", &tempFahrenheit);

			tempKelvin = ((tempFahrenheit-32.0)*5.0/9.0)+273.15;

			// Aplicação da função de verificação de números com casas decimais
			printf("      The converted temperature is: %.1lf\n\n", tempKelvin);

			break;
		}

		// Kelvin to Celsius
		case '5':
		{
			headerCase5();
			double tempCelsius, tempKelvin;

			printf("\n      Enter the desired temperature in Kelvin: ");
			scanf(" %lf", &tempKelvin);

			tempCelsius = tempKelvin-273.15;

			// Aplicação da função de verificação de números com casas decimais
			printf("      The converted temperature is: %.1lf\n\n", tempCelsius);

			break;
		}

		// Kelvin to Fahrenheit
		case '6':
		{
			headerCase6();
			double tempKelvin, tempFahrenheit;

			printf("\n      Enter the desired temperature in Kelvin: ");
			scanf(" %lf", &tempKelvin);

			tempFahrenheit = ((tempKelvin-273.15)*9.0/5.0)+32.0;

			// Aplicação da função de verificação de números com casas decimais
			printf("      The converted temperature is: %.1lf\n\n", tempFahrenheit);

			break;
		}

		case '7':
		{
			exit (0);
		}

		case '8':
		{
			system("cls");
			return;
		}

		default:
		{
			printf("\n      This option is invalid!\n");
			printf("      Please, wait the menu reload and switch an option valid.\n");
			goto inicio;
		}
	}
	if(verificadorEnglish()==1)
    {
		goto inicio;
	}
	else
	{
		exit(0);
	}
}

void programLanguagePortuguese()
{
	inicio:
	menuTempConversaoPortuguese();
	char decisaoConversao;
	fflush(stdin);
	scanf ("%c", &decisaoConversao);

		switch (decisaoConversao)
		{
			// Celsius to Fahrenheit
			case '1':
			{
				setlocale(LC_ALL, "Portuguese");
                cabecalhoCaso1();
                double tempFahrenheit, tempCelsius;

                printf("\n      Digite a temperatura deseja em Celsius: ");
                scanf("%lf", &tempCelsius);

                tempFahrenheit = ((tempCelsius*9.0/5.0)+32.0);

                //Aplicação da função de verificação de números com casas decimais
                printf("      A temperatura convertida é: %.1lf\n\n", tempFahrenheit);
				break;
			}

			// Celsius to Kelvin
			case '2':
			{
				setlocale(LC_ALL, "Portuguese");
				cabecalhoCaso2();

				double tempKelvin, tempCelsius;

				printf("\n      Digite a temperatura deseja em Celsius: ");
				scanf("%lf", &tempCelsius);

				tempKelvin = (tempCelsius+273.15);

				//Aplicação da função de verificação de números com casas decimais
				printf("      A temperatura convertida é: %.1lf\n\n", tempKelvin);

				break;
			}

			// Fahrenheit to Celsius
			case '3':
			{
				setlocale(LC_ALL, "Portuguese");
				cabecalhoCaso3();
				double tempCelsius, tempFahrenheit;

				printf("\n      Digite a temperatura deseja em Fahrenheit: ");
				scanf(" %lf", &tempFahrenheit);

				tempCelsius = (5.0*(tempFahrenheit-32.0)/9.0);

				//Aplicação da função de verificação de números com casas decimais
				printf("      A temperatura convertida é: %.1lf\n\n", tempCelsius);

				break;
			}

			// Fahrenheit to Kelvin
			case '4':
			{
				setlocale(LC_ALL, "Portuguese");
				cabecalhoCaso4();
				double tempKelvin, tempFahrenheit;

				printf("\n      Digite a temperatura deseja em Fahrenheit: ");
				scanf(" %lf", &tempFahrenheit);

				tempKelvin = ((tempFahrenheit-32.0)*5.0/9.0)+273.15;

				// Aplicação da função de verificação de números com casas decimais
				printf("      A temperatura convertida é: %.1lf\n\n", tempKelvin);

				break;
			}

			// Kelvin to Celsius
			case '5':
			{
				setlocale(LC_ALL, "Portuguese");
				cabecalhoCaso5();
				double tempCelsius, tempKelvin;

				printf("\n      Digite a temperatura deseja em Kelvin: ");
				scanf(" %lf", &tempKelvin);

				tempCelsius = tempKelvin-273.15;

				// Aplicação da função de verificação de números com casas decimais
				printf("      A temperatura convertida é: %.1lf\n\n", tempCelsius);

				break;
			}

			// Kelvin to Fahrenheit
			case '6':
			{
				setlocale(LC_ALL, "Portuguese");
				cabecalhoCaso6();
				double tempKelvin, tempFahrenheit;

				printf("\n      Digite a temperatura deseja em Kelvin: ");
				scanf(" %lf", &tempKelvin);

				tempFahrenheit = ((tempKelvin-273.15)*9.0/5.0)+32.0;

				// Aplicação da função de verificação de números com casas decimais
				printf("      A temperatura convertida é: %.1lf\n\n", tempFahrenheit);

				break;
			}

			case '7':
			{
				exit (0);
			}

			case '8':
			{
				system("cls");
				return;
			}

			default:
			{
				setlocale(LC_ALL, "Portuguese");
				printf("\n      Esta opção é inválida!\n");
				printf("      Por favor, espere o recarregamento do menu e escolha uma opção válida.\n");
			}
		}
		if(verificadorPortuguese()==1)
        {
			goto inicio;
		}
		else
		{
			exit(0);
		}
}
