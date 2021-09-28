//
//  fifteen.c
//  6.4思考与练习 -- Question 15
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  一个数如果恰好等于它的因子之和，这个数就称为“完数”。
//  6的因子为1、2、3，而 6 = 1 + 2 + 3，因此6是“完数”。
//  编程找出 1000 以内的所有“完数”，并按照格式输出：
//      6: Its factors are 1, 2, 3

int main()
{
    int num = 6, sum = 0;
    int i;

    for (i=1; i<num; i++)
    {
        if (num%i==0)
        {
            printf(" %d ", i);
            sum += i;
        }
    }
    printf("\nsum = %d \n", sum);

    if (num == sum)
    {
        printf("%d: Its factors are 1", num);

        for (i=2; i<num; i++)
        {
            if (num%i==0)
            {
                printf(", %d ", i);
            }
        }
        printf("\n");
    }


    return 0;
}
