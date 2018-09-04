#include <stdio.h>
#include <conio.h>

int numeroUsuario = 0;

int main()
{
	printf("Por favor capture alguno de los siquietes numeros 50, 100, 200. ");
	
	scanf("%d",&numeroUsuario);
	
	switch (numeroUsuario)
	{
		case (50):
			printf("El numero capturado es %d\n", numeroUsuario);
		break;
		
		case (100):
			printf("El numero capturado es %d\n", numeroUsuario);
		break;
		
		case (200):
			printf("El numero capturado es %d\n", numeroUsuario);
		break;
		
		default:
			printf("El valor capturado no coincide con lo solicitado");
		break;
	}
	
	getch();
	
	return 0;
}
