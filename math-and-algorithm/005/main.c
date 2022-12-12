#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d", &n);
	// printf("%d\n",n);

	int i;
	int a[100];
	int box = 0;					//また初期値入れるの忘れた。
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d\n",a[i]);

		box += a[i];
	}
	// printf("%d\n",box);
	printf("%d\n",box % 100);

	return (0);
}
// 【調べたこと】
// mod100はある数を100で割ったあまり
