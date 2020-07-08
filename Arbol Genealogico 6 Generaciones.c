#include <stdio.h>
#include <stdlib.h>

int main (){
	int op;
	
	printf("Arbol Genealogico\n\n");
	printf("1.Bisabuelos Maternos\n");
	printf("2.Bisabuelos Paternos\n");
	printf("3.Abuelos Maternos\n");
	printf("4.Abuelos Paternos\n");
	printf("5.Mama\n");
	printf("6.Papa\n");
	printf("7.Hermanos\n");
	printf("8.Yo\n");
	printf("9.sobrinos\n");
	printf("10.Salir del menu\n");
	scanf("%d",&op); 
	switch (op){
	case 1:
			printf("Bisabuelos Maternos\n");
			printf("Tomas Coronado\n");
			printf("Carmen Barbosa\n");
			break;
	case 2:
			printf("Bisabuelos Paternos\n");
			printf("Catalina Castro Zuñiga\n");
			printf("Jose Angeles Quijano\n");
			break;
	case 3:
			printf("Abuelos Maternos\n");
			printf("Enrique Chavez Prieto\n");
			printf("Carmen Coronado Navarro\n");
			break;
	case 4:
			printf("Abuelos Paternos\n");
			printf("Jaqueline Angeles Castro\n");
			printf("Francisco Santiago\n");
			break;
	case 5:
			printf("Mama\n");
			printf("Maria Guadalupe Chavez Coronado\n");

			break;
	case 6:
			printf("Papa\n");
			printf("Ubaldo Angeles Castro\n");
			break;
	case 7:
			printf("Hermanos\n");
			printf("Paola Guadalupe Chavez Coronado\n");
			printf("Gabriel Chavez Coronado\n");
			printf("Ernesto Javier Angeles Perez\n");
			printf("Miguel Angeles Perez\n");
			printf("Maricler Angeles Perez\n");
			printf("Francisco Alejandro Angeles Perez\n");
			printf("Sergio Alejandro Angeles Pardo \n");
			break;
	case 8:
			printf("Yo\n");
			printf("Beatriz Angeles Chavez\n");
			break;
	case 9:
			printf("Sobrinos\n");
			printf("Alpha Gabrielle Chavez Jimenez\n");
			printf("Lilian Danielle Chavez Jimenez\n");
			printf("Nahomi Angeles Santillan\n");
			printf("Miguel Angel Angeles Santillan\n");
			printf("Santago Angeles Santillan\n");
			printf("Selene Angeles Molina\n");
			break;
	case 10:
			printf("Salir del Menu\n");
			break;
				
				return 0;
}
}
