#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

void mgotoxy(int x,int y)
{	COORD p={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

int deseja, principal;

void advinhe(void)
{

	int x, chute, tent=0;
	
	printf ("\nAdivinhe o Numero\n\nQual Destes Voce Deseja Jogar???\n[1] - 0 Ate 25\n[2] - 0 Ate 50\n[3] - 0 Ate 100\n");
	scanf ("%d", &deseja);
	
	if (deseja == 1)
	{
		printf ("\nEscolhendo o Numero...\n");
		srand(time(NULL));
		x = rand() % 25 + 1;
		printf ("Digite o Numero De 0 a 25: ");
	}
	
	else if (deseja == 2)
	{
		printf ("\nEscolhendo o Numero...\n");
		srand(time(NULL));
		x = rand() % 50 + 1;
		printf ("Digite Um Numero De 0 a 50: ");
	}
	
	else if (deseja == 3)
	{
		printf ("\nEscolhendo o Numero...\n");
		srand(time(NULL));
		x = rand() % 100 + 1;
		printf ("Digite Um Numero De 0 a 100: ");
	}
	
	do{
	
	scanf ("%d", &chute);
	
	if (chute > x)
	{
		printf ("Digite Um Numero Menor Que %d", chute);
		printf ("\n\n");
		tent++;
	}
	else if (chute < x)
	{
		printf ("Digite Um Numero Maior Que %d", chute);
		printf ("\n\n");
		tent++;
	}
	else if (chute == x)
	{
		printf ("\nVoce Acertou!!!\nO Numero Era: %d", x);
	}
	else if (tent > 10)
	{
		printf ("\nVoce Ultrapassou o Limite De Tentativas\nO Numero Era: %d", x);
	}
	} while (chute != x && tent <= 10);
		
}
	

void cobra(void)
{
	int x,d=2,cx[300]={1,2},cy[300]={7,7},t=1,mx,my;
    char tecla='a';
    //system("MODE con cols=27 lines=20");
    mgotoxy (30,7);
    printf ("Jogo Da Cobrinha - V: 2.2");
    
    for(x=0;x<18;x++)
    {   mgotoxy(0,x);
        printf("%c",219);
    }
    for(x=0;x<26;x++)
    {   mgotoxy(x,0);
        printf("%c",219);
    }
    for(x=0;x<18;x++)
    {   mgotoxy(26,x);
        printf("%c",219);
    }
    for(x=0;x<27;x++)
    {   mgotoxy(x,18);
        printf("%c",219);
    }
    srand(time(NULL));
    mx=(rand()%25)+1;
    my=(rand()%17)+1;
    while(tecla!='s')
    {   while(tecla!='s'&&!(tecla=kbhit()))
        {   for(x=t;x>0;x--)
            {   cx[x]=cx[x-1];
                cy[x]=cy[x-1];
            }
            if(d==0)cx[0]--;
            if(d==1)cy[0]--;
            if(d==2)cx[0]++;
            if(d==3)cy[0]++;
            mgotoxy(cx[t],cy[t]);
            printf(" ");
            
			mgotoxy (30,9);
			printf ("Pontos: %d", t);
			mgotoxy (30,10);
			
            if(mx==cx[0]&&my==cy[0])
            {   t++;
                mx=(rand()%25)+1;
                my=(rand()%17)+1;
            }
            mgotoxy(cx[0],cy[0]);
            printf("%c",219);
            mgotoxy(mx,my);
            printf("%c",1);
            Sleep(300);
            for(x=1;x<t;x++)
            {   if(cx[0]==cx[x]&&cy[0]==cy[x])tecla='s';
            }
            if(cy[0]==0||cy[0]==18||cx[0]==0||cx[0]==26)tecla='s';
        }
        if(tecla!='s')tecla=getch();
        if(tecla=='K')d=0;
        if(tecla=='H')d=1;
        if(tecla=='M')d=2;
        if(tecla=='P')d=3;
        if(cy[0]==0||cy[0]==18||cx[0]==0||cx[0]==26)tecla='s';
    }
    mgotoxy (30,11);
    printf ("Voce Perdeu!!!");
    getch();
}

void velha(void)
{
	char Matriz[3][3];
    char O='O', X='X';
    int l=0,j,i;


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            Matriz[i][j]=' ';

    while(l<=9)
        {
        printf("  JOGO DA VELHA \n");
        for(i=0;i<3;i++)
        {
            printf("\t\t     %c \xBA %c \xBA %c\n",Matriz[i][0],Matriz[i][1],Matriz[i][2]);
            if(i<3-1)
            {
                printf("\t\t    ÍÍÍ\xCEÍÍÍ\xCEÍÍÍ\n");
            }
        }

        printf("\n\n\nINSIRA AS COORDENADAS, ");
        if(l%2)printf("PLAYER 2\nLINHA: ");
        else printf("PLAYER 1\nLINHA: ");
        
        scanf("%d",&i);
        printf("COLUNA: ");
        scanf("%d",&j);
        system ("cls");

        if(Matriz[i-1][j-1]==' ')
        {
            if(l%2)Matriz[i-1][j-1]=X;
            else Matriz[i-1][j-1]=O;
            l++;
        }


        if((Matriz[0][0]==O && Matriz[0][1]==O && Matriz[0][2]==O)||
           (Matriz[1][0]==O && Matriz[1][1]==O && Matriz[1][2]==O)||
           (Matriz[2][0]==O && Matriz[2][1]==O && Matriz[2][2]==O)||
           (Matriz[0][0]==O && Matriz[1][0]==O && Matriz[2][0]==O)||
           (Matriz[0][1]==O && Matriz[1][1]==O && Matriz[2][1]==O)||
           (Matriz[0][2]==O && Matriz[1][2]==O && Matriz[2][2]==O)||
           (Matriz[0][0]==O && Matriz[1][1]==O && Matriz[2][2]==O)||
           (Matriz[0][2]==O && Matriz[1][1]==O && Matriz[2][0]==O))
        {
            printf("\n\a\t\tJogador 1, VOCE VENCEU!!!");
            break;
        }
        if((Matriz[0][0]==X && Matriz[0][1]==X && Matriz[0][2]==X)||
           (Matriz[1][0]==X && Matriz[1][1]==X && Matriz[1][2]==X)||
           (Matriz[2][0]==X && Matriz[2][1]==X && Matriz[2][2]==X)||
           (Matriz[0][0]==X && Matriz[1][0]==X && Matriz[2][0]==X)||
           (Matriz[0][1]==X && Matriz[1][1]==X && Matriz[2][1]==X)||
           (Matriz[0][2]==X && Matriz[1][2]==X && Matriz[2][2]==X)||
           (Matriz[0][0]==X && Matriz[1][1]==X && Matriz[2][2]==X)||
           (Matriz[0][2]==X && Matriz[1][1]==X && Matriz[2][0]==X))
        {
            printf("\n\a\t\tJogador 2, VOCE VENCEU!!!");
            break;
        }

        if(l==9)
        {
            printf("PARTIDA EMPATADA");
            break;
        }

    }
    getch();
}

void acerte(void)
{
	int num1, num2, result, result1, pontos = 0, aux;
	float divisor;
		
		printf ("\nPense e Acerte\n\n[1] - Adicao\n[2] - Subtracao\n[3] - Multiplicacao\n[4] - Divisao\n\n");
		scanf ("%d", &deseja);
		system ("cls");
		
		if (deseja == 1)
		{
			do{
				system ("cls");
				srand(time(NULL));
				num1 = rand() % 100 + 1;
				
				do{
				
					srand(time(NULL));
					num2 = rand() % 100 + 1;
				
				}while (num2 == num1);
				
				num1 = num1 + 5;
				num2 = num2 - 7;
				
				mgotoxy (35,3);
				printf ("Pontos: %d", pontos);
				
				mgotoxy (35,7);
				printf ("%d + %d = ", num1, num2);
				scanf ("%d", &result);
				result1 = num1 + num2;
				pontos++;
				
			}while (result1 == result);
		}
		
		else if (deseja == 2)
		{
			do{
				system ("cls");
				srand(time(NULL));
				num1 = rand() % 100 + 1;
				
				do{
				
					srand(time(NULL));
					num2 = rand() % 100 + 1;
					
				}while (num1 == num2);
				
				num1 = num1 + 5;
				num2 = num2 - 7;
				
				mgotoxy (35,3);
				printf ("Pontos: %d", pontos);
				
				mgotoxy (35,7);
				printf ("%d - %d = ", num1, num2);
				scanf ("%d", &result);
				result1 = num1 - num2;
				pontos++;
				
			}while (result1 == result);
		}
		
		else if (deseja == 3)
		{
			do{
				system ("cls");
				srand(time(NULL));
				num1 = rand() % 10 + 1;
				
				do{
				
					srand(time(NULL));
					num2 = rand() % 10 + 1;
				
				}while (num2 == num1);
				
				mgotoxy (35,3);
				printf ("Pontos: %d", pontos);
				
				mgotoxy (35,7);
				printf ("%d * %d = ", num1, num2);
				scanf ("%d", &result);
				result1 = num1 * num2;
				pontos++;
				
			}while (result1 == result);
		}
		
		else if (deseja == 4)
		{
			do{
				system ("cls");
				srand(time(NULL));
				num1 = rand() % 10 + 1;
				
				do{
					
					srand(time(NULL));
					num2 = rand() % 10 + 1;
					
					divisor = num1 / num2;
					divisor = aux;
					
				}while (divisor != aux);
				
				mgotoxy (35,3);
				printf ("Pontos: %d", pontos); 
				
				mgotoxy (35,7);
				printf ("%d / %d = ", num1, num2);
				scanf ("%d", &result);
				result1 = num1 / num2;
				pontos++;
				
			}while (result1 == result);
		}
		
		if (result != result1)
		{
			system ("cls");
			printf ("\nVoce Errou!!!\nSeus Pontos: %d\n", pontos);	
		}
}

extern "C" __declspec(dllexport) void MinhaFuncao()
{
		printf ("\nVamos Jogar o Que???\n[1] - Advinhe o numero\n[2] - Jogo Da Cobrinha\n[3] - Jogo Da Velha\n[4] - Pense e Acerte\n");
		printf ("[5] - Voltar Ao Menu Principal\n\n");
		scanf ("%d", &deseja);
		system ("cls");
	
		if (deseja == 1)
		{
			do{
				advinhe();
				printf ("\n\nVoce Deseja\n[1] - Voltar Ao Menu Principal\n[2] - Jogar Novamente\n");
				scanf ("%d", &principal);
			
			}while (principal == 2);
		}
		
		else if (deseja == 2)
		{
			do{
				system ("cls");
				cobra();
				system ("cls");
				printf ("\nVoce Deseja\n[1] - Voltar Ao Menu Principal\n[2] - Jogar Novamente\n");
				scanf ("%d", &principal);
				
			}while (principal == 2);
		}
		
		else if (deseja == 3)
		{
			do{
				system ("cls");
				velha();
				system ("cls");
				printf ("\nVoce Deseja\n[1] - Voltar Ao Menu Principal\n[2] - Jogar Novamente\n");
				scanf ("%d", &principal);
				
			}while (principal == 2);
		}
		
		else if (deseja == 4)
		{
			do{
				system ("cls");
				acerte();
				system ("cls");
				printf ("\nVoce Deseja\n[1] - Voltar Ao Menu Principal\n[2] - Jogar Novamente\n");
				scanf ("%d", &principal);
				
			}while (principal == 2);
		}
		
		else if (deseja == 5)
		{
			principal = 1;
		}
		
	}
