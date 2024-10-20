#include <stdio.h>

int	main(void)
{
	char	c;
	int		b;
	int		t;
	int		nl;

	b = 0;
	t = 0;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++b;
		else if (c == '\t')
			++t;
		else if (c == '\n')
			++nl;
	}
	printf("Blanks:%d\nTabs:%d\nNew lines:%d\n", b, t, nl);
	return (0);
}

/* To test this function:
 ./program << EOF
 Hello world
 This	is a test.
 EOF
If you preffer to use a file:
./program < test.txt

*/
