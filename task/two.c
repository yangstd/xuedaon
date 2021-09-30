//  
//  two.c
//  数组作业
//  
//  21/09/30 yangshidong
//

#include <stdio.h>

// 对一个有序数组去重。

int main()
{
    int a[] = {2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 7, 7, 8};
    int i, j = 1;
    int len = sizeof(a) / sizeof(int);

    // 打印去重前
    for ( i = 0; i < len; i++ )
    {
        printf("%d ", *(a + i) );
    }
    printf("\n");

    // 去重
    for ( i = 1; i < len; i++ )
    {
        if ( a[i] != a[i-1] )
        {
            a[j] = a[i];
            j++;
        }
    }

    // 打印输出去重后
    printf("\n");
    for ( i = 0; i < j; i++ )
    {
        printf("%d ", *(a+i) );
    }
    printf("\n");

    return 0;
}

