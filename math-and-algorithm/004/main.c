#include <stdio.h>

int	main(void)
{
	int a;
	int box = 1;			//初期値が0だとaのインデックス2まで掛け算するから初期値を1にしないと値が0のままになる。
	// scanf("%d", &a);		//for分の中でscanf("%d", &a);してるからここでscanfすると予期せぬ値が入力される
	// printf("%d\n",a);	//予期せぬ値とは...
							//7行目のscanf("%d", &a); + 14行目のscanf("%d", &a);の計4回scanf("%d", &a);を読み込んでる事になる。

	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a);
		box *= a;
	}

	printf("%d\n",box);

	return (0);
}

// 【学んだこと】
// 所要時間；1h
// 【原因】
// 与えられる値をプリントデバックした時のscanf。
// 【経緯】
// 与えられる値をプリントデバックして値が出力できるか確認する。
// for文で与えられる3つの整数を出力して掛け算したら予期しない数字が出力された。
// 写経しても正解にならないから一行ずつコメントアウトしたら
// 与えられる値をプリントデバックした時のscanfが原因だった。
// プリントデバックのscanf + for文(3回)で計4回分の掛け算がされていた。


// #include <stdio.h>

// int	main(void)
// {
// 	int a1;
// 	int a2;
// 	int a3;

// 	scanf("%d%d%d",&a1,&a2,&a3);
// 	// printf("%d %d %d\n",a1,a2,a3);

// 	printf("%d\n",a1 * a2 * a3);

// 	return (0);
// }
