//
//  nine.c
//  6.4思考与练习 -- Question 9
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 编程求 100～5000 中能同时被2、3、5 除余 1 的前 10 个整数

int main()
{
    int i, num = 99, count = 0;

    while ( num++ < 5000 )
    {
        if ( num%2 && num%3 && num%5 )
        {
            printf("num%d = %d \n", count, num);
            count++;
        }

        if (count==10)
        {
            break;
        }
    }
    return 0;
}
