/*
	MATRICES
	Inicializaciones
	llenado
	Mostrar
	MENU
	Modularización
		suma(n1,n2);
	funciones
		-Retornables (tipo de dato nombre)
		-No retornables (void)
		
	MATRIZ(2x3)
	
	[00][01][02]
	[10][11][12]
	
	if()
	{
		if()
		{
		}
	}
	else
	{
	}
*/
#include<stdio.h>
#include<conio.h>
int matriz[2][3];
//zona de prototipo de funciones
int menu();
void menu1();
void menu2();
void salir();
main()
{
	int opcion;
	do
	{
	
		opcion = menu();
	
		switch(opcion)
		{
			case 1:menu1();
				break;		
			case 2:menu2();
				break;
			case 3:salir();	
				break;
			default: printf("ERROR, ingrese una opcion del uno al tres"); 
				break;	
		}
			
	}while(!(opcion == 3));
	getch();
}
int menu()
{
	int op;
	printf("\n1. Llenar la matriz");
	printf("\n2. Mostrar elementos de la matriz");
	printf("\n3. Salir");
	printf("\nIngrese la opcion: ");
	scanf("%d",&op);
	return op;
}
void salir()
{
	printf("FIN");
}
void menu1()
{
	for(int i=0;i<2;i++)//Llenado de filas
	{
		for(int j=0;j<3;j++)//Llenado de columnas
		{
			matriz[i][j] = 0;
		}	
	}	
	
	for(int i=0;i<2;i++)//Llenado de filas
	{
		for(int j=0;j<3;j++)//Llenado de columnas
		{
			printf("\nIngrese matriz[%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
			
		}	
	}
	
}
void menu2()
{
	/*
		357
		579
	*/
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
		
			
		}
		printf("\n");	
	}	
}
