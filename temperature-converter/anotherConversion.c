int verificadorPortuguese()
{
	char changeConversion;
	int charConversion;

	inicio:
	printf("      [1] - Sim       [2] - Não \n\n");
	printf("      Deseja converter outra temperatura? ");
	fflush(stdin);
	scanf("%c", &changeConversion);

	switch (changeConversion)
	{
		case '1' :
			changeConversion-='0';
			return changeConversion;

		case '2' :
			return changeConversion;

		default :
			system("cls");
			printf("\n\n\n\n\n");
			goto inicio;
	}
}

int verificadorEnglish()
{
	char changeConversion;

	inicio:
	printf("      [1] - Yes       [2] - No \n\n");
	printf("      Do you want to convert another temperature? ");
	fflush(stdin);
	scanf("%c", &changeConversion);

	switch (changeConversion)
	{
		case '1' :
			changeConversion-='0';
			return changeConversion;

		case '2' :
			return changeConversion;

		default :
			system("cls");
			printf("\n\n\n\n\n");
			goto inicio;
	}
}
