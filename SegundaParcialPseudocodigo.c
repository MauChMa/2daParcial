#include <stdio.h>
//Metodo ordenamiento segun pseudocodigo, para examen segunda parcial Estructura de datos
// Mauricio Ch�vez Mancilla 3-D
main()
{
	int n;
	int lista[10]={11, 4, 3, 5, 2, 0, 21, 30, 16, 9};
	int aux;
	int i;
	/*printf("Ingrese el tama�o del arreglo: ");
	scanf("%d",n); */ //Queria poner el tama�o de la lista que se pudiera leer y ponerlo como n, pero en C99 no se puede
	// poner la variable en arreglo de esa forma, para eso hay que hacer algo m�s complejo, pero dijo que podemos declarar el arreglo
	// por nuestra cuenta, lo deje a 10 el tama�o.
	
	for(i=0; i<10; i++)	
	{
		int j;
		for(j=0; j<10; j++)
		{
			if(lista[j] > lista[j+1])
			{
				aux = lista[j+1];
				lista[j+1] = lista[j];
				lista[j] = aux;
			}
		}
	}
	printf("Arreglo ordenado: \n\n");
	for(i=0; i<10; i++)
	{
		printf("%d\t",lista[i]);
	}
	printf("\n");
	return 0;
}
