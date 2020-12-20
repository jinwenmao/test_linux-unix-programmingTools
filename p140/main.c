#include <stdio.h>
#include "main."
#include "compute.h"
#include "input.h"


main()
{
	double x,y;
	printf("The program takes x and y from stdin and displays x^y.\n");
	x = input(PROMPT1);
	y = input(pROMPT2);
	printf("x^y is %6.3f\n",compute(x,y));

}
