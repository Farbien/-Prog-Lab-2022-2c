

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	float promedio;

	printf("INGRESE UN NUMERO: ");
	scanf("%d", &numeroUno);

	printf("INGRESE OTRO NUMERO: ");
	scanf("%d", &numeroDos);

	promedio = (float) (numeroUno + numeroDos)/2;

	printf ("EL PROMEDIO ES %f\n", promedio);

	return 0;


}
