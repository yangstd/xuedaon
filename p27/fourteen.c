//
//  fourteen.c
//  6.4思考与练习 -- Question 14
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 循环找出全部水仙花数。 水仙花数是一个 3 位数，它等于其各位数字的立方和。
// 407 = 4*4*4 + 0*0*0 + 7*7*7; 

int main()
{
    int num = 99;
    int sum, a, b, c;

    while (num++ < 999)
    {
        a = num / 100;
        b = num % 100 / 10;
        c = num % 10;

        sum = a*a*a + b*b*b + c*c*c;

        if (num == sum)
        {
            printf("num %d \n", num);
        }
    }

    return 0;
}
