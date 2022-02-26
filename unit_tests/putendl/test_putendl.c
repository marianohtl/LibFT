
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putendl_fd(int n, int fd, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_putendl_fd(n,fd);
	width = ft_strlen(compare);
	if(ft_strncmp(result, compare, width) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_putendl_fd();

}