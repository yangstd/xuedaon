//
//  four.c
//  6.4思考与练习 -- Fourth question
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 计算 1+2+3+....+100

int main()
{
    int i = 0, j = 0;
    int sum = 0;

    // 从1顺序加到100，循环100次
    for ( i=1; i <= 100; i++ )
    {
        sum += i;
    }

    printf("sum = %d \n", sum);
    
    // 从1加到50，从100加到50，只循环50次
    sum = 0;

    for (i=1,j=100; i<=j; i++, j--)
    {
        sum += i + j;
    }
    printf("sum = %d \n", sum);


    return 0;
}
