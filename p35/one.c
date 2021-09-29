//
//  one.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 有一个已经排好序的数组，现在向该数组插入一个数，要求原来的排序趋势(升序或降序)不变。

int main()
{
    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int temp1, temp2, num, end, i, j;

    num = 56;
    end = a[9];

    if (num > end)
    {
        a[10] = num;
    }
    else
    {
        for (i = 0; i < 11; i++)
        {
            if (a[i] > num)
            {
                temp1 = a[i];
                a[i] = num;

                for (j=i+1; j<11; j++)
                {
                    temp2 = a[j];
                    a[j] = temp1;
                    temp1 = temp2;
                }

                break;
            }
        }
    }

    printf("a[11] = { %d", a[0]);
    for ( i = 1; i < 11; i++ )
    {
        printf(", %d", *(a+i) );
    }

    printf(" }\n");
    return 0;
}
