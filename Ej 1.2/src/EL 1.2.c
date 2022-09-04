#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num1;
	int num2;
	int num3;


	printf("INGRESE UN NUMERO: ");
	scanf("%d",&num1);

	printf("INGRESE OTRO NUMERO: ");
	scanf("%d",&num2);

	printf("INGRESE OTRO NUMERO MAS: ");
	scanf("%d",&num3);

	if(num1>num2 && num1>num3) {
		printf("EL MATOYR ES EL PRIMERO");
	}
	else{
		if(num1<num2 && num2>num3){
			printf("EL MATOYR ES EL SEGUNDO");
			}
			else{
				printf("EL MATOYR ES EL TERCERO");
			}
	}
	return EXIT_SUCCESS;
}
