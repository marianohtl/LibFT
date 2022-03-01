/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strncmp.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strncmp.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*

*/

int ft_char_diff(const unsigned char s1,const unsigned char s2)
{
	return((int) (s1 - s2));
}

int ft_strncmp(const char *s1, const char *s2, unsigned int size)
{
	unsigned int index;

	index = 0;
	if(size == 0)
		return(0);

	while (s1[index] && s2[index] && index < size)
	{
		if(s1[index] != s2[index])
		{
			return(ft_char_diff(s1[index], s2[index]));
		}
		index++;
	}
	if(index == size)
		return(ft_char_diff(s1[index - 1], s2[index - 1]));


	return(ft_char_diff(s1[index], s2[index]));
}

