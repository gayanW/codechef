#include <stdio.h>

/* http://www.codechef.com/problems/INTEST */

int main()
{
	int n, k, t, count = 0;
	scanf("%d %d", &n, &k);
	
	int i = 0;
	while (i < n)
	{
		scanf("%d", &t);
		if (t % k == 0)
			++count;
		++i;
	}
	
	printf("%d", count);
	return 0;
}