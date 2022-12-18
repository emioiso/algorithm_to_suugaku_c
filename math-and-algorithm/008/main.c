#include <stdio.h>

int	main(void)
{

	int	n; //1 以上 N 以下の整数を 1 つ書き込みます。
	int	s; //カードに書かれた整数の合計が S 以下

	scanf("%d%d",&n,&s);
	// printf("%d %d\n",n,s);

	int i;// 赤のカード
	int box = 0;
	int box2 = 0;

	for (i = 1; i <= n; i++)
	{
		// printf("赤のカード%d\n", i);

		int j;// 青のカード

		for (j = 1; j <= n; j++)
		{
			// printf("青のカード%d\n", j);

			box = i + j;
			// printf("%d\n", box);

			if(box <= s){
				box2++;
			}
		}
	}
	printf("%d\n", box2);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int n; //nまでの数字
// 	int s; //s以下

// 	scanf("%d%d", &n,&s);
// 	printf("%d %d\n",n,s);

// 	int i;
// 	int j;
// 	int box = 0;

// 	for (i = 1; i <= n; i++){ // 赤のカード。　for (i = 1; i <= s; i++)って書いてた。
// 		for (j = 1; j <= n; i++){ //青のカード
// 			if (i + j <= s){
// 				box++;
// 			}
// 		}
// 	}
// 	printf("%d\n",box);

// 	return (0);
// }
