#include "libft.h"
#include <stdio.h>
#include <string.h>
#define exit(x) printf("%s\n",#x);return 0

int main()
{
	char *s = "split";
	int i = 0;
	char **result = ft_split(s, '|');

	/*while (result[i])
	{
		if (strcmp(result[i], *expected))
		{
			exit(TEST_FAILED);
		}
		free(result[i]);
		i++;
		expected++;
	}
	free(result);
	exit(TEST_SUCCESS);*/
	for(int i = 0 ; result[i] ; i++)
	{
		for(int j = 0 ; result[i][j] ; j++)
			printf("%c",result[i][j]);
		printf("\n");
	}

}
