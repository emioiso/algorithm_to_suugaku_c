#include <stdio.h>

int	main(void)
{
	int a[4];

	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	// printf("%d %d %d\n",a[0],a[1],a[2]);
	printf("%d\n",a[0] + a[1] + a[2]);

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {
// 	int a[4];								//char型にしてた><

// 	scanf("%d%d%d",&a[0],&a[1],&a[2]);		//添字を使ってるのに&忘れてた
// 	// printf("%d %d %d\n",a[0],a[1],a[2]);

// 	printf("%d\n",a[0] + a[1] + a[2]);

// 	return (0);
// }
