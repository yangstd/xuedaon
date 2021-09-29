//
//  six.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  有 n 个整数， 使前面各数顺序向后移动m个位置，最后m个数变成最前面的m个数。

int main()
{
    int num[20] = {12, 43, 65, 67, 8, 2, 7, 11};
    int arr_end, n, m, i;
    int *p = NULL;

    n = 8; // 8个数
    m = 4; // 后移4个位置

    printf("num[%d] = { ", n);
    for ( i = 0; i < n; i++ )
    {
        printf("%d ", *(num + i) );
    }
    printf("}\n");

    while ( m ) // 循环后移四次
    {
        arr_end = *(num + n -1);
        printf("arr_end = %d \n", arr_end);

        for ( p=num+n-1; p>num; p-- )
        {
            *p = *(p-1);
        }
        *num = arr_end;
        --m;
    }

    printf("\nnum[10] = { ");
    for ( i = 0; i < n; i++);
    {
        printf("%d ", num[i] );
    }
    printf("}\n");

    return 0;
}
