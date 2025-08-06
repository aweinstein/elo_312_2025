/*
 * sg_file.c
 *
 *  Created on: Aug 5, 2025
 *      Author: mauricio
 */

#include <stdio.h>


int a;
int b = 10;

/**
 * API: main_11
 * */
int main_11()
{
	int b = 62;
	char c = b;
	a = b;

	int res1 = a * b;
	int res2 = a - 72;
	unsigned int res3 = a - 72;
	unsigned short res4 = a - 72;
	int res5 = res3 + 72;
	int res6 = res4 + 72;
	int res7 = 5 / 2;
	float res8 = 5 / 2;
	float res9 = 5 / 2.0;
	int res10 = 5 % 2;
	char res11 = 0xFF + 1;

	// Ver  https://en.cppreference.com/w/c/io/fprintf
	// para los detalles sobre el "conversion specifier"

	printf("Actividad 1\n");
	printf("res1: %d\n", res1);
	printf("res1: %x\n", res1);
	printf("res2: %d\n", res2);
	printf("res3: %d\n", res3);
	printf("res3: %o\n", res3);
	printf("res4: %d\n", res4);
	printf("res5: %d\n", res5);
	printf("res6: %d\n", res6);
	printf("res7: %d\n", res7);
	printf("res8: %f\n", res8);
	printf("res9: %f\n", res9);
	printf("res10: %d\n", res10);
	printf("res11: %d\n", res11);

	return 0;
}

/**
 * API: main_21
 * */
int main_21()
{
	int a = 0;
	for(int i = 0; i <= 5; i = i + 1)
	{
		printf("a = %d \n", a);
		a = a + i;
	}
	return 0;
}

/**
 * API: main_22
 * */
int main_22()
{
	//llenar acá
	return 0;
}

/**
 * API: main_23
 * */
int main_23()
{
	//llenar acá
	return 0;
}


/**
 * API: main_31
 * */
int main_31()
{
	//llenar acá
	return 0;
}


//completar el resto de las funciones

