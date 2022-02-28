#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

void mgotoxy(int x,int y)
{	COORD p={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

void escrever();

FILE *arquivo;
int deseja, x, y, outro;
char c='\0';

struct ag
{
	char celula[20];
};

struct ag sistema;

extern "C" __declspec(dllexport) void MinhaFuncao()
{
	do{
	system ("cls");
	printf ("MATRIZES - Joao Pedro Campos\n\nVoce Deseja?\n[1] - Escrever Arquivo\n[2] - Ler Arquivo\n[3] - Limpar Arquivo\n[4] - Menu Principal\n\n");
	scanf ("%d", &deseja);
	
	if(deseja == 4) return;
	
	if (deseja == 1)
	{
		printf ("\n\nESCREVER EM ARQUIVO\n\nVoce Deseja Escrever Em Qual Arquivo?\n");
		printf ("[1] - Arquivo 1.txt\n[2] - Arquivo 2.txt\n[3] - Arquivo 3.txt\n\n");
		scanf ("%d", &deseja);
		x=0;
		if (deseja == 1)
		{
			arquivo = fopen("arquivo1.txt", "a");
			system("cls");
			scanf("%s", &sistema.celula);
			fwrite(&sistema, sizeof(struct ag), 1, arquivo);
			
			do{
				memset (&sistema.celula, 0, sizeof (sistema.celula));//limpa a variável sistema.celula.
				outro=0;
				x=x+20;
				if (x==80)
				{
					x=0;
					y++;
					fprintf (arquivo,"\n");
				}
				mgotoxy(x,y);
				printf("%c",179);
				scanf("%s", &sistema.celula);
				fwrite(&sistema, sizeof(struct ag), 1, arquivo);
				c = getche();
				if(c == 27) outro=1;
			}while (outro != 1);
			fclose(arquivo);
		}
		
		if (deseja == 2)
		{
			arquivo = fopen("arquivo2.txt", "a");
			system("cls");
			scanf("%s", &sistema.celula);
			fwrite(&sistema, sizeof(struct ag), 1, arquivo);
			
			do{
				memset (&sistema.celula, 0, sizeof (sistema.celula));//limpa a variável sistema.celula.
				outro=0;
				x=x+20;
				if (x==80)
				{
					x=0;
					y++;
					fprintf (arquivo,"\n");
				}
				mgotoxy(x,y);
				printf("%c",179);
				scanf("%s", &sistema.celula);
				fwrite(&sistema, sizeof(struct ag), 1, arquivo);
				c = getche();
				if(c == 27) outro=1;
			}while (outro != 1);
			fclose(arquivo);
			
		}
		
		if (deseja == 3)
		{
			arquivo = fopen("arquivo3.txt", "a");
			system("cls");
			scanf("%s", &sistema.celula);
			fwrite(&sistema, sizeof(struct ag), 1, arquivo);
			
			do{
				memset (&sistema.celula, 0, sizeof (sistema.celula));//limpa a variável sistema.celula.
				outro=0;
				x=x+20;
				if (x==80)
				{
					x=0;
					y++;
					fprintf (arquivo,"\n");
				}
				mgotoxy(x,y);
				printf("%c",179);
				scanf("%s", &sistema.celula);
				fwrite(&sistema, sizeof(struct ag), 1, arquivo);
				c = getche();
				if(c == 27) outro=1;
			}while (outro != 1);
			fclose(arquivo);
			
		}
		
		deseja=0;
	}
	
	if (deseja == 2)
	{
		printf ("\n\nLER ARQUIVO\n\nVoce Deseja Ler Qual Arquivo?\n[1] - Arquivo 1.txt\n[2] - Arquivo 2.txt\n[3] - Arquivo 3.txt\n\n");
		scanf("%d", &deseja);
		x=0;
		if (deseja == 1) arquivo = fopen("arquivo1.txt","r+");
		if (deseja == 2) arquivo = fopen("arquivo2.txt", "r+");
		if (deseja == 3) arquivo = fopen("arquivo3.txt", "r+");
		system("cls");
		
		
		do{
			memset (&sistema.celula, 0, sizeof (sistema.celula));//limpa a variável sistema.celula.
			fread(&sistema, sizeof(struct ag), 1, arquivo);
			printf ("%s", sistema.celula);
			x=x+20;
				if (x==80)
				{
					x=0;
					y++;
					fprintf (arquivo,"\n");
				}
				mgotoxy(x,y);
				
		}while (!feof(arquivo));
		printf("\n\n");	
		system ("pause");	
		fclose (arquivo);
		
		deseja=0;	
	}
		
	if (deseja == 3)
	{
		printf ("\n\nLIMPAR ARQUIVO\n\nVoce Deseja Limpar Qual Arquivo?\n[1] - Arquivo 1.txt\n[2] - Arquivo 2.txt\n[3] - Arquivo 3.txt\n\n");
		scanf("%d", &deseja);
		
		if (deseja == 1) arquivo = fopen("arquivo1.txt","w");
		if (deseja == 2) arquivo = fopen("arquivo2.txt", "w");
		if (deseja == 3) arquivo = fopen("arquivo3.txt", "w");
		fclose(arquivo);
		printf("\nArquvo limpo com sucesso!!!\n");
		system("pause");
		deseja=0;
	}
	
	}while (deseja == 0);
	return;
}
