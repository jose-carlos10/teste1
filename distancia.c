#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <stdio.h>
#include <time.h>//necessário p/ função time(

//função que calcula a distancia
float calculaDistancia( int x1, int y1, int x2, int y2) {
return sqrt( pow (x2-x1,2) + pow (y2-y1,2) );
}


//main
int main()
{
	// definição das variaveis
	int x1,y1,x2,y2;
	float distancia;
	
	//leitura das cordennadas dos pontos
	printf("Informe as cordenadas do primeiro ponto              ");
	scanf("%i %i", &x1,&y1);
	printf("Informe as cordenadas do segundo  ponto             ");
	scanf("%i %i", &x2,&y2);
	
	//calculo da distancia
	distancia = calculaDistancia(x1,y1,x2,y2);	
	
	//mostra o rsultado
	printf("Distancia : %f", distancia);
	
	return 0;
}