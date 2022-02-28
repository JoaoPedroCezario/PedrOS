#include <stdio.h>
#include <windows.h>
#include <math.h>

extern "C" __declspec(dllexport) void MinhaFuncao()
{
	int deseja;
	float num1, num2, num3, x, result;
	
	system ("cls");
	printf ("\nCalculadoras\nQual Bloco De Calculadoras Voce Deseja???\n\n[1] - Calculadoras Comuns\n[2] - Matematica e Geometria\n");
	printf ("[3] - Outras Calculadoras\n");
	scanf ("%d", &deseja);
	system ("cls");
	
	if (deseja == 1)
	{
		printf ("\nCalculadoras Comuns\nQual Calculadora Voce Deseja???\n\n[1] - Adicao\n[2] - Subtracao\n[3] - Multiplicacao\n[4] - Divisao\n");
		scanf ("%d", &deseja);
		system ("cls");
		
		if (deseja == 1)
		{
			printf ("\nAdicao\nObs: Substitua As Virgulas Por Pontos.\n\n");
			scanf ("%f", &num1);
			scanf ("%f", &num2);
			result = num1+num2;
			printf ("\n\nO Resultado e: %f", result);
		}
		
		else if (deseja == 2)
		{
			printf ("\nSubtracao\nObs: Substitua As Virgulas Por Pontos.\n\n");
			scanf ("%f", &num1);
			scanf ("%f", &num2);
			result = num1-num2;
			printf ("\n\nO Resultado e: %f", result);
		}
		
		else if (deseja == 3)
		{
			printf ("\nMultiplicacao\nObs: Substitua As Virgulas Por Pontos.\n\n");
			scanf ("%f", &num1);
			scanf ("%f", &num2);
			result = num1*num2;
			printf ("\n\nO Resultado e: %f", result);
		}
		
		else if (deseja == 4)
		{
			printf ("\nDivisao\nObs: Substitua As Virgulas Por Pontos.\n\n");
			scanf ("%f", &num1);
			scanf ("%f", &num2);
			result = num1/num2;
			printf ("\n\nO Resultado e: %f", result);
		}
	}
	
	else if (deseja == 2)
	{
		float delta;
		printf ("\nMatematica e Geometria\nQual Calculadora Voce Deseja???\n\n[1] - Grafico Da Funcao\n[2] - Formula De Bhaskara\n");
		printf ("[3] - Raiz Quadrada e Potenciacao\n[4] - Seno, Cosseno e Tangente\n[5] - MMC\n[6] - Teorema De Pitagonas\n");
		printf ("[7] - Razão e Proporcao\n[8] - Porcentagem\n");
		scanf ("%d", &deseja);
		system ("cls");
		
		if (deseja == 1)
		{
			float x2, vx, vy;
			printf ("\nGrafico Da Funcao\nObs: Substitua As Virgulas Por Pontos.\nObs. Lembre-se ax2+bx+c=0\n\n");
			printf ("Digite o Valor De ax2: ");
			scanf ("%f", &num1);
			printf ("\nDigite o Valor De bx: ");
			scanf ("%f", &num2);
			printf ("\nDigite o Valor De c: ");
			scanf ("%f", &num3);
			
			delta = (num2*num2) - 4*num1*num3;
			
			printf ("\nO Valor Do Delta e: %f", delta);
			
			if (delta < 0)
			{
				x=0;
				x2=0;
				printf ("\n\nDelta Nao Tem Raiz Real\n\n");
			}
			
			else if (delta == 0)
			{
				x2=0;
				x = (- num2 + (sqrt (delta)) / (2*num1));
			}
			
			else if (delta > 0)
			{
				x = (- num2 + sqrt (delta)) / (2*num1);
				x2 = (- num2 - sqrt (delta)) / (2*num1);
			}
			
			
			printf ("\n\nCoordenadas:\nX, Y\n%f, 0\n%f, 0", x, x2);
			
			vx = -num2 / (2*num1);
			vy = -delta / (4*num1);
			
			printf ("\n\nVertices:\nX, Y\n%f, %f\n\n", vx, vy);
			
		}
		
		else if (deseja == 2)
		{
			printf ("\nCalculadora Da Formula De Bhaskara\nObs: Substitua As Virgulas Por Pontos.\n");
			printf ("Obs. Lembre-se ax2+bx+c=0\n\n");
			
			printf ("Digite a: ");
			scanf ("%f", &num1);
			printf ("\nDigite b: ");
			scanf ("%f", &num2);
			printf ("\nDigite c: ");
			scanf ("%f", &num3);
			
			x = (num2*num2) - 4*num1*num3;
			printf ("\nO Valor Do Delta e: %f\n", delta);
			
			if (x < 0)
			{
				printf ("\nO Delta Nao Tem Raiz Real\n\n");
				
			}
			
			if (x == 0)
			{
				num1 = (- num2 + sqrt (x))/(2*num1);
				printf ("Valor de x1: %f", num1);
				
			}
			
			if (x > 0)
			{
				num1 = (- num2 + sqrt (x))/(2*num1);
				num2 = (- num2 - sqrt (x))/(2*num1);
				
				printf ("Valor de x1: %f\nValor de x2: %f", num1, num2);
			}
		}
		
		else if (deseja == 3)
		{
			printf ("\nRaiz Quadrada e Potenciacao\n\nVoce Deseja:\n[1] - Raiz Quadrada\n[2] - Potenciacao\n");
			scanf ("%d", &deseja);
				
			if (deseja == 1)
			{
				printf ("\nRaiz Quadrada\nRaizes Quebradas Dao Valores Inexatos\nObs: Substitua As Virgulas Por Pontos.\n\n");
				printf ("Digite o Valor: ");
				scanf ("%f", &num1);
				
				result = sqrt(num1);
				printf ("\n\nO Resultado e: %f", result);
			}
				
			else if (deseja == 2)
			{
				
				printf ("\nCalculadora De Potencias\nObs: Substitua As Virgulas Por Pontos.\n\n");
				printf ("Digite a BASE: ");
				scanf ("%f", &num1);
				printf ("Digite o EXPOENTE: ");
				scanf ("%f", &num2);
				
				result = pow (num1, num2);
				
				printf ("\n\nO Resultado Da Potencia e: %f", result);
					
			}
			
		}
		
		else if (deseja == 4)
		{
			printf ("\nSeno, Cosseno e Tangente\nObs: Substitua As Virgulas Por Pontos.\n\n");
			system ("pause");
					
			printf ("\nCateto Oposto: ");
			scanf ("%f", &num1);
			printf ("\nCateto Adjacente: ");
			scanf ("%f", &num2);
			printf ("\nHipotenusa: ");
			scanf ("%f", &num3);
			
			result = num1/num3;
			printf ("Seno Igual a: %f", result);
			result = num2/num3;
			printf ("Cosseno Igual a: %f", result);
			result = num1/num2;
			printf ("Tangente Igual a: %f", result);
			
		}
		
		else if (deseja == 5)
		{
			int a,b,aux,i,mmc;
  		 		   
			printf("\nCALCULO DO MMC ENTRE 2 NUMEROS\nObs: Substitua As Virgulas Por Pontos.\n\n");
			printf("\nInforme o primeiro numero: ");
			scanf ("%d", &a);
			printf("\nInforme o segundo numero: ");
			scanf ("%d", &b);
		
			if (b>a)
			{
			 	aux=a;
			 	a=b;
				b=aux;
			}	
				
			if ((a%b)==0)
			{
				mmc=a;
			}   	   				
				
			else
			{
   		 		for (i=2;i<=b;i++)
   		 		{
   		    		aux=a*i;
   		    		if ((aux%b)==0)
   		    	{
  		    		mmc=aux;
  	      			i=b+1;
   	     		}
   	 			}
			}
			
			
			printf ("\nO MMC e igual a: %d", mmc);
		}
		
		else if (deseja == 6)
		{
			printf ("\nTeorema De Pitagonas\nObs: Substitua As Virgulas Por Pontos.\nObs: Substitua x Por Zero\n");
			
			printf ("Digite Hipotenusa: ");
			scanf ("%f", &num1);
			printf ("\nDigite Cateto Oposto: ");
			scanf ("%f", &num2);
			printf ("\nDigite Cateto Adjacente: ");
			scanf ("%f", &num3);
					
			if (num1 == 0)
			{
				num2 = num2*num2;
				num3 = num3*num3;
				num1 = num2+num3;
				result = sqrt(num1);
				
				printf ("\n\nHipotenusa = %f", result);
			}
			
			else if (num2 == 0)
			{
				num1 = num1*num1;
				num3 = num3*num3;
				num2 = num1-num3;
				result= sqrt(num2);
				printf ("\n\nCateto Oposto = %f", result);
			}
					
			else if (num3 == 0)
			{
				num1 = num1*num1;
				num2 = num2*num2;
				num3 = num1-num2;
				result= sqrt(num3);
				printf ("\n\nCateto Adjacente = %f", result);
			}
		}
		
		else if (deseja == 7)
		{	
			printf ("\nRazao e Proporcao\n\nVoce Deseja:\n[1] - Razao\n[2] - Proporcao\n");
			scanf ("%d", &deseja);
			system ("cls");
					
			if (deseja == 1)
			{
				printf ("\nRazao\nObs: Substitua As Virgulas Por Pontos.\n\n");
				
				printf ("\nDigite o Primeiro Numero: ");
				scanf ("%f", &num1);
				printf ("\nDigite o Segundo Numero: ");
				scanf ("%f", &num2);
				
				result = num1/num2;
				printf ("\n\nA Razao Entre %f e %f e %f", num1, num2, result);
			}
			
			if (deseja == 2)
			{
				float result2;
				printf ("\nProporcao\nObs: Substitua As Virgulas Por Pontos.\n\n");
				
				printf ("\nDigite Os Numeros Da Primeira Fracao\n");
				scanf ("%f", &num1);
				scanf ("%f", &num2);
				
				printf ("\nDigite Os Numeros Da Segunda Fracao\n");
				scanf ("%f", &num3);
				scanf ("%f", &x);
				
				result = num1*x;
				result2 = num2*num3;
				
				if (result == result2)
				{
					printf ("\n\nSao Proporcionais!!!");
				}
				
				if (result != result2)
				{
					printf ("\n\nNao Sao Proporcionais!!!");
				}
			}
			
		}
		
		else if (deseja == 8)
		{
			printf ("\nCalculadora De Porcentagem\nObs: Substitua As Virgulas Por Pontos.\n\n");
			
			printf ("\n[1] - Porcentagem De Um Valor (ex 10 porcento de 100 e 10)\n");
			printf ("[2] - Soma De Tantos Porcentos Em Um Valor (ex 100 + 10 porcento e 110)\n");
			printf ("[3] - Subtracao De Tantos Porcentos Em Um Valor (ex 100 - 10 porcento e 90)\n");
			printf ("[4] - Diferenca Em Porcentos de Um Valor Para o Outro\n\n");
			scanf ("%d", &deseja);
			system ("cls");
			
			if (deseja == 1)
			{
				printf ("\n\nOpcao 1\n");
				printf ("Digite o Valor: ");
				scanf ("%f", &num1);
				printf ("\nDigite Quantos Porcentos: ");
				scanf ("%f", &num2);
				
				result = (num1*num2)/100;
				
				printf ("\n\n%f% de %f e: %f", num2, num1, result);
			}
			
			else if (deseja == 2)
			{
				printf ("\n\nOpcao 2\n");
				printf ("Digite o Valor: ");
				scanf ("%f", &num1);
				printf ("\nDigite Quantos Porcentos: ");
				scanf ("%f", &num2);
				
				result = (num1 * num2)/100;
				result = result + num1;
				
				printf ("\n\n%f% de %f e: %f", num2, num1, result);
			}
			
			else if (deseja == 3)
			{
				printf ("\n\nOpcao 3\n");
				printf ("Digite o Valor: ");
				scanf ("%f", &num1);
				printf ("\nDigite Quantos Porcentos: ");
				scanf ("%f", &num2);
				
				result = (num1 * num2)/100;
				result = num1 - result;
				
				printf ("\n\n%f% de %f e: %f", num2, num1, result);
			}
			
			else if (deseja == 4)
			{
				printf ("\nOpcao 4\nDiferenca Em Porcentos De Um Valor Para Outro\n\n");
	
				printf ("Digite O Valor 1: ");
				scanf ("%f", &num1);
				printf ("\nDigite o Valor 2: ");
				scanf ("%f", &num2);
			
				result = num2 / num1;
				result = result * 100;
				
				printf ("\n\nO Resultado e %f%", result);
				
			}
			
		}
		
	}
	
	else if (deseja == 3)
	{
		printf ("\nOutras Calculadoras\nVoce Deseja???\n\n[1] - O Ano e Bissexto???\n");
		scanf ("%d", &deseja);
		system ("cls");
		
		if (deseja == 1)
		{
			int ano;//ano deve ser inteira
			printf ("\n\nO Ano e Bissexto???\nDigite o Ano:\n\n");
			scanf ("%d", &ano);
			if (((ano%4)==0) && ((ano%100)!=0))
				{
					printf ("\nO Ano e Bissexto!!!");
					
				}
			else if ((ano%400)==0)
				{
					printf ("\nO Ano e Bissexto!!!");
					
				}
			else
				{
					printf ("\nO Ano Nao e Bissexto!!!");
				
				}
		}
	}
}
