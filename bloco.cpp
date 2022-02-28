#include <stdio.h>
#include <windows.h>

extern "C" __declspec(dllexport) void MinhaFuncao()
{
	
	FILE *arq;
	arq = fopen("nota.txt","a");
	fclose (arq);
	
	int deseja;
	char nota[500];
	
	printf ("\nBloquinho de Notas\nVoce Deseja???\n\n[1] - Digitar Uma Nova Nota\n[2] - Ver a Ultima Nota\n");
	printf ("[3] - Apagar a Ultima Nota\n");
	scanf ("%d", &deseja);
	system ("cls");
	
	if (deseja == 1)
	{
		arq = fopen("nota.txt","wt");
		printf ("\nDigite Uma Nova Nota e Press Enter Para Salvar\nOBS: max de 500 caracteres e nao use espaços\n\n");
		scanf ("%s", &nota);
		fprintf (arq,"%s",nota);
		
		printf ("\nGravado Com Sucesso!!!\n");
		fclose(arq);
		system ("pause");
	}
	
	else if (deseja == 2)
	{
		arq = fopen("nota.txt","rt+");
		fscanf(arq,"%s", &nota);
		printf ("%s\n\n",nota);
		system ("pause");
		fclose(arq);
		system ("pause");
	}
	
	else if (deseja == 3)
	{
		printf ("\nApagando Nota, Aguarde...\n");
		arq = fopen("nota.txt","wt+");
		fclose(arq);
		printf ("\nNota Apagada Com Sucesso\n\n");
		system ("pause");
	}
}
