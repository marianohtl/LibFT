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

static int	ft_char_diff(const char *s1, const char *s2, unsigned int index)
{
	return ((int)((unsigned char)s1[index] - (unsigned char)s2[index]));
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int size)
{
	unsigned int	index;

	if (size == 0)
		return (0);
	index = 0;
	while (s1[index] == s2[index] && index < size
		&& s1[index] != '\0' && s2[index] != '\0')
		index++;
	if (index == size && index != 0)
		return (ft_char_diff(s1, s2, index - 1));
	return (ft_char_diff(s1, s2, index));
}
