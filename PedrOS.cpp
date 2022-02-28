//PedrOS 2016 João Pedro Campos
//Versão: 24.1.1 / 2022

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

typedef void (WINAPI*cfunc)();

cfunc FuncaoTemp;

int main ()
{
	int decorar, deseja, retorno, erro;
	
	printf ("\nIniciando o PedrOS...\n\n");
	
	do{
	do{
	
	retorno = 0;
	erro = 0;
	system ("cls");
	system ("color e1");
	
	for (decorar=0; decorar<80; decorar++)
	{
		printf ("%c", 178);
	}
	
	printf ("\nPedrOS - 2016 Joao Pedro Campos\n");
	printf ("\nBem-Vindo Novamente!!!\n\n[1] - Calculadoras\n[2] - Jogos\n[3] - Bloco De Notas\n[4] - Matrizes\n[5] - Data e Hora\n");
	printf ("[6] - Contador Regressivo\n[7] - Sobre o PedrOS\n[0] - Desligar\n");
	scanf ("%d", &deseja);
	system ("cls");
	
	if (deseja == 0)
	{
		return 0;
	}
	
	if (deseja == 1)
	{
		HINSTANCE hLib=LoadLibrary("calculadora.dll");
		FuncaoTemp=(cfunc)GetProcAddress((HMODULE)hLib, "MinhaFuncao");
		FuncaoTemp();
		FreeLibrary((HMODULE)hLib);
		getch();
		retorno = 1;
	}
	
	if (deseja == 2)
	{
		HINSTANCE hLib=LoadLibrary("jogo.dll");
		FuncaoTemp=(cfunc)GetProcAddress((HMODULE)hLib, "MinhaFuncao");
		FuncaoTemp();
		FreeLibrary((HMODULE)hLib);
		getch();
		retorno = 1;
	}
	
	if (deseja == 3)
	{
		HINSTANCE hLib=LoadLibrary("bloco.dll");
		FuncaoTemp=(cfunc)GetProcAddress((HMODULE)hLib, "MinhaFuncao");
		FuncaoTemp();
		FreeLibrary((HMODULE)hLib);
		getch();
		retorno = 1;
	}
	
	if (deseja == 4)
	{
		HINSTANCE hLib=LoadLibrary("matrizes.dll");
		FuncaoTemp=(cfunc)GetProcAddress((HMODULE)hLib, "MinhaFuncao");
		FuncaoTemp();
		FreeLibrary((HMODULE)hLib);
		getch();
		retorno = 1;
	}
	
	if (deseja == 5)
	{
		printf ("\nData: ");
		system ("date/t");
		printf ("\nHora: ");
		system ("time/t");
		printf ("\n");
		system ("pause");
		retorno = 1;
	}
	
	if (deseja == 6)
	{
		HINSTANCE hLib=LoadLibrary("contador.dll");
		FuncaoTemp=(cfunc)GetProcAddress((HMODULE)hLib, "MinhaFuncao");
		FuncaoTemp();
		FreeLibrary((HMODULE)hLib);
		getch();
		retorno = 1;
	}
	
	if (deseja == 7)
	{
		printf ("\nSOBRE O PedrOS:\n");
		printf ("\nVersao:....24.1.1");
		printf ("\nJoao Pedro Campos.\n\n");
		system ("pause");
		retorno = 1;
	}
	
	}while (retorno == 1);
	
	{
		system ("cls");
		printf ("\a\nOcorreu Um Erro, Digite 1 Para Voltar Ao Menu Principal!!!\n\n");
		scanf ("%d", &erro);
	}
	
	}while (erro == 1);
	
	{
		system ("cls");
		system ("color 90");
		printf ("\a\a\nOcorreu um erro catastrofico e o PedrOS sera fechado!!!\n\n");
		system ("pause");
		return 0;
	}
}
