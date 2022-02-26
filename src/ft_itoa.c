
/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_itoa.c                                                     /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function itoa.                                    )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
   ft_itoa.c

Parameters
#1 The integer to convert.

Return Value
The string representing the integer. NULL if the allocation fails.

External Functions
malloc

Description
Allocates (with mallloc(3)) and returns a string representing the integer
received as an argument. Negative numbers must be handled.
*/
#include <stdlib.h>

char *ft_strdup(const char *s);


char *ft_itoa(int n){

	char *number, signal;
	int numerator, index, dgt;

	signal = 0;

	if(n == -2147483648)
	{
		number = ft_strdup("-2147483648");
		return(number);
	}
	if(n == 0){
		number = ft_strdup("0");
		return(number);
	}


	if(n < 0)
	{
		n *= -1;
		signal = 1;
	}

	dgt = 0;
	numerator = n;
	while(numerator > 9)
	{
		numerator = numerator / 10;
		dgt++;
	}

	number = malloc(dgt + 1 + signal);
	number[dgt + signal] = '\0';
	dgt--;
	while (dgt >= 0)
	{
		number[dgt + signal] = n % 10 + '0';
		n = n / 10;
		dgt--;
	}
	if(signal == 1)
		number[dgt + 1] = '-';

	return(number);
}