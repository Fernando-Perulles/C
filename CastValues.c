#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 4;
	int y = 1;
	char ch = 'A';
	int c = (int)ch;
	int n = atoi("365");
	
	float z = (float)y / (float)x;
	
	printf("El valor de z es %f\n", z);
	printf("El valor ASCII del carter A es %i\n", c);
	printf("Un a%co tiene %i dias", 164, n);
	
	return 0;
}
