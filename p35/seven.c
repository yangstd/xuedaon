//
//  seven.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  有 n 个人围成一圈，按顺序排好。从第一个人开始报数，凡报到 3 的人退出圈子。
//  问最后留下的是原来第几号的那位。

int main()
{
    int num[20], i, k, m, n;
    int *p = num;
    n = 15;
    
    // 对数组前八个赋值
    for ( i = 0; i < n; i++)
    {
        *(p + i) = i + 1;
    }

    i = 0;
    k = 0;
    m = 0;

    while ( m < n - 1 )
    {
        if ( *(p + i) != 0 )
        {
            k++;
        }

        if ( k == 3 )
        {
            *(p+i) = 0;
            k = 0;
            m++;
        }

        i++;

        if ( i == n )
        {
            i = 0;
        }
    }

    while ( *p == 0)
    {
        p++;
    }

    printf("八个人围成的圈，最后留下来的是原来的第%d号的那位。\n", *p );

    return 0;
}

