//
//  three.c
//  6.4思考与练习 -- Third question
//
//  Created by yangshidong on 21/9/27
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 求两个数的最大公约数和最小公倍数

int main()
{
    int gcd, lcm;
    int n1 = 72, n2 = 120, i = 0;

    /************Greatest common divisorgcd*************/
    
    // for 循环
    for (i=1; i<=n1 && i<=n2; i++)
    {
        // 判断 i 是否为最大公约数
        if (n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
    }

    printf(" The greatest common divisor of %d and %d is %d \n", n1, n2, gcd);

    /***********lowest common multipleLCM*************/
    
    // 通过最大公约数计算
    lcm = (n1 * n2)/gcd;
    printf("The least common multiple of %d and %d is %d \n", n1, n2, lcm);

    return 0;
}
