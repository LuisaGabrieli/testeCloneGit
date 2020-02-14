#include <stdlib.h>
#include <stdio.h>

int main(){

	int idade, inovo, iorig;

	printf("Digite sua idade: ");
	scanf("%i", &idade);

	inovo = idade - 1;

	printf("Sua nova idade: %i\n", inovo);
	
	iorig = idade + 1;
	
	printf("Sua idade original: %i", iorig);
	
    return 0;
}
