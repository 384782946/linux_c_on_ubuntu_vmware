#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *some_memory;
	char *scan_ptr;
	int i = 0;

	some_memory = (char*)malloc(1024);
	if(some_memory == NULL)	exit(EXIT_FAILURE);

	scan_ptr = some_memory;

	while(1)
	{
		*scan_ptr = '\0';
		scan_ptr++;
		i++;
		printf("%d is running...\n",i);
	}
	exit(EXIT_SUCCESS);
}

