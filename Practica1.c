#include <stdlib.h>
#include <stdio.h>
#define MAX 100

void concatenacion(char cad1[],char cad2[]);
void prefijo(char cad[]);
void sufijo(char cad[]);
void subcadena(char cad[]);
void subsecuencia(char cad[]);
void invertir(char cad[]);
void potencia(char cad[]);

int main(){

	unsigned short int decision,decision_Cadena;
	char cadena1[MAX];
	char cadena2[MAX];
	printf(R"EOF(		
   ___                _   _             _ 
  / _ \_ __ __ _  ___| |_(_) ___ __ _  / |
 / /_)| '__/ _` |/ __| __| |/ __/ _` | | |
/ ___/| | | (_| | (__| |_| | (_| (_| | | |
\/    |_|  \__,_|\___|\__|_|\___\__,_| |_|
		                                                                                                       
*******************************************
Menu Principal
Seleccione una de las siguientes opciones:

1. Concatenacion
2. Prefijo
3. Sufijo
4. Subcadena
5. Subsecuencia
6. Inversion
7. Potencia 
0. SALIR                                                                                                                                                                                                                                                        
)EOF");

	printf("Ingrese el numero: ");
	scanf("%d",&decision);
	printf("\n*******************************************\n\n");
	printf("Ingresa la cadena 1: ");
	scanf("%s",cadena1);
	printf("Ingresa la cadena 2: ");
	scanf("%s",cadena2);
	printf("\n");
	while(decision!=0){
		switch(decision){
		case 1:
		concatenacion(cadena1,cadena2);
		concatenacion(cadena2,cadena1);
		break;
		case 2:
		printf("Con que cadena desea trabajar?\n");
		printf("Ingrese 1/2: ");
		scanf("%d",&decision_Cadena);
		printf("\n");
		if(decision_Cadena == 1) prefijo(cadena1);
		else prefijo(cadena2);
		break;
		case 3:
		printf("Con que cadena desea trabajar?\n");
		printf("Ingrese 1/2: ");
		scanf("%d",&decision_Cadena);
		printf("\n");
		if(decision_Cadena == 1) sufijo(cadena1);
		else sufijo(cadena2);
		break;
		case 4:
		printf("Con que cadena desea trabajar?\n");
		printf("Ingrese 1/2: ");
		scanf("%d",&decision_Cadena);
		printf("\n");
		if(decision_Cadena == 1) subcadena(cadena1);
		else subcadena(cadena2);
		break;
		case 5:
		break;
		case 6:
		printf("Con que cadena desea trabajar?\n");
		printf("Ingrese 1/2: ");
		scanf("%d",&decision_Cadena);
		printf("\n");
		if(decision_Cadena == 1) invertir(cadena1);
		else invertir(cadena2);
		break;
		case 7:
		printf("Con que cadena desea trabajar?\n");
		printf("Ingrese 1/2: ");
		scanf("%d",&decision_Cadena);
		printf("\n");
		if(decision_Cadena == 1) potencia(cadena1);
		else potencia(cadena2);
		break;
		default:
		break;
		}
	printf("\n\n*******************************************\n\n");
	printf("Ingrese el numero: ");
	scanf("%d",&decision);
	}
}


void concatenacion(char cad1[],char cad2[]){
	unsigned short int i,j,izq,der;
	char concatenacion1[MAX];
	char tmp;
	for(i=0;cad1[i]!='\0';i++) concatenacion1[i] = cad1[i];
	for(j=0;cad2[j]!='\0';j++, i++) concatenacion1[i]=cad2[j];
	concatenacion1[i]='\0';
	printf("\nLa concatenacion es: %s",concatenacion1);
}

void prefijo(char cad[]){
	unsigned short int num,cont,longitud;
	char prefijo[MAX];
	printf("Cuantos caracteres desea eliminar?\n");
	printf("Ingrese el numero: ");
	scanf("%d",&num);
	for(longitud=0;cad[longitud]!='\0';longitud++);
	for(cont=0; cont<(longitud-num) ; cont++) prefijo[cont] = cad[cont];
	prefijo[cont]='\0';
	printf("El prefijo es: %s\n",prefijo );
}

void sufijo(char cad[]){
	unsigned short int num,cont,cont_sufijo;
	char sufijo[MAX];
	printf("Cuantos caracteres desea eliminar?\n");
	printf("Ingrese el numero: ");
	scanf("%d",&num); 
	for(cont=0,cont_sufijo=0; cad[cont]!='\0'; cont++) 
		if(cont>=num){
			sufijo[cont_sufijo] = cad[cont];
			cont_sufijo++;
		}
	sufijo[cont_sufijo]='\0';
	printf("El sufijo es: %s\n",sufijo );
}

void subcadena(char cad[]){
	short unsigned int longitud;
	for(longitud=0;cad[longitud]!='\0';longitud++);
	cad[longitud]='\0';
	printf("Las subcadenas son: ");
	for(int i=0;i<longitud;i++){
		for(int j=i;j<longitud;j++){
			for(int k=i;k<=j;k++)
					printf("%c",cad[k]);
			printf(",");
		}
	}
}

void subsecuencia(char cad[]){
	unsigned int num_secuencia, longitud;
	num_secuencia=1;
	for(longitud=0;cad[longitud]!='\0';longitud++);
	cad[longitud]='\0';
	for(int a=1;a<longitud;a++) num_secuencia*=2;
}

void invertir(char cad[]){
	short int j;
	char invertido[MAX];
	for(j=0;cad[j]!='\0';j++);
	cad[j]='\0';
	printf("La inversion es: ");
	for(j-=1;j>=0;j--) printf("%c",cad[j]);
}

void potencia(char cad[]){
	short unsigned int potencia;
	printf("Cual es la potencia que desea?\n");
	printf("Ingrese el numero: ");
	scanf("%d",&potencia);
	printf("\n");
	printf("La cadena a la %d potencia es: ",potencia);
	for(int i=0;i<=potencia;i++)printf("%s",cad);
}