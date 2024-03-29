
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstlast(t_list *list, char *compare)
{
	int i = 0;
	unsigned int width;
	t_list *last;
	last = ft_lstlast(list);
	if (compare == NULL && last != NULL)
	{
		printf("Return Null Error");
		return;
	}
	else
	{
		printf("Return Ok\n");
		return ;
	}
	if(last->content != compare ){
		printf("Return Content Error");
		return;
	}
	if(NULL != last->next)
	{
		printf("Return Next Address Error");
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	t_list *elements[8];

	elements[0] = NULL;
	test_lstlast(elements[0], NULL);
	elements[0] = ft_lstnew("Eu");
	test_lstlast(elements[0], "Eu");
	elements[1] = ft_lstnew("quero");
	elements[2] = ft_lstnew("ver");
	elements[3] = ft_lstnew("voce");
	elements[0]->next = elements[1];
	elements[1]->next = elements[2];
	elements[2]->next = elements[3];
	test_lstlast(elements[0], "voce");
	elements[4] = ft_lstnew("me");
	elements[5] = ft_lstnew("chamar");
	elements[6] = ft_lstnew("de");
	elements[7] = ft_lstnew("amendoim");
	elements[3]->next = elements[4];
	elements[4]->next = elements[5];
	elements[5]->next = elements[6];
	elements[6]->next = elements[7];
	test_lstlast(elements[0], "amendoim");
}
