#include <stdio.h>

int	main(void)
{
	int n;
	int i;
	int a[100];	//配列にするの忘れてた。
	int b = 0;	//この変数にaを足していく。　初期値入れるの忘れていた。

	scanf("%d",&n);
	// printf("%d\n",n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);

		b += a[i];
		// printf("%d\n",b);
	}

	printf("%d\n",b);

	return (0);
}
