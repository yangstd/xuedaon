//
//  ten.c
//  6.4思考与练习 -- Tenth question
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 计算并输出 100-1000 中能被 7 整除，且至少有一位数字是 3 的所有数的和

int main()
{
    int num = 99, sum = 0;
    int a, b, c;

    while ( num++ < 1000 )
    {
        a = num / 100;
        b = num % 100 / 10;
        c = num % 10;

        if ( (num%7==0) && (a==3 || b==3 || c==3) )
        {
            sum += num;
        }
    }
    
    printf("sum = %d \n", sum);

    return 0;
}
