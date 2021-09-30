//  
//  three.c
//  数组作业
//  
//  21/09/30 yangshidong
//

#include <stdio.h>

//  无序数组去重。

int main()
{
	int a[] = { 9, 8, 6, 8, 9, 9, 3, 2, 6, 5, 4, 7, 1, 1, 9, 6 };
    int len = sizeof(a) / sizeof(int);
    int i, j, k;

    // 打印去重前
    for ( i = 0; i < len; i++ )
    {
        printf("%d ", *(a + i) );
    }
    printf("\n");

    // 去重
	for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
			if (a[j] == a[i])
            {
				for (k = j + 1; k < len; k++)
                {
                    a[k - 1] = a[k];
                }

				len--;
				j--;
			}
		}
	}
 
    // 打印输出去重后
    printf("\n");
    for ( i = 0; i < len; i++ )
    {
        printf("%d ", *(a + i) );
    }
    printf("\n");


    return 0;
}

