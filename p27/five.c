//
//  five.c
//  6.4思考与练习 -- Fifth question
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 输出 9*9 乘法口诀表

int main()
{
    int i, j;

    for (i=1; i<=9; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d*%d = %d  ", j, i, i*j);
        }
        printf("\n");

    }

    return 0;
}
