#include <stdio.h>
#include <windows.h>

void mgotoxy(int x,int y)
{
	COORD p={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

extern "C" __declspec(dllexport) void MinhaFuncao()
{	
	int segundos = 0, minutos = 0, horas = 0, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 1;
	int x;
	
	printf ("\nContador Regressivo - V: 1.1\nDigite Quantos Segundos, Minutos e Horas Voce Quer:\n");
	
	printf ("\n*Segundos: ");
	scanf ("%d", &aux1);
	printf ("\n*Minutos: ");
	scanf ("%d", &aux2);
	printf ("\n*Horas: ");
	scanf ("%d", &aux3);
	
	while (aux4 == 1) {
			Sleep (1000);
			segundos++;
			system("cls");

			if (segundos > 59) {
				minutos++;
				segundos = 0;
			}
			
			if (minutos > 59) {
				horas++;
				minutos = 0;
			}
			
			if (horas > 23) {
				horas = 0;
			}
			
			if (horas == aux3)
			{
				if (minutos == aux2)
				{
					if (segundos == aux1)
					{
						printf ("\a\a\a\a\n\nA Contagem Chegou a Zero!!!\n\n");
						system ("pause");
						aux4 = 2;
					}
				}
			}
			
			mgotoxy (35,10);
			printf("%d: %d: %d", horas, minutos, segundos);
		}
		
		return;
}
