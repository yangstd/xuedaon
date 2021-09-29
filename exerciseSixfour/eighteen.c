//
//  eighteen.c
//  6.4思考与练习 -- Question 18
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>
#include <math.h>

//  代码实现将任意长度的整型数逆序。 ( 123456 逆序后 654321 )

int main()
{
    int num = 22123456, a = 0, mun = 0, n;
    n = num;

    printf("num = %d \n", num);

    // 计算 值 的位数
    while (n)
    {
        n /= 10;
        a++;
    }

    // 逆序
    while ( a-- )
    {
        mun += (num % 10) * pow(10, a);
        num /= 10;
    }

    printf("mun = %d \n", mun);

    return 0;
}
