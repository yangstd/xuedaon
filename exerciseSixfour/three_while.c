//
//  three_while.c
//  6.4思考与练习 -- Third question
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 求两个数的最大公约数和最小公倍数

int main()
{
    int gcd, lcm;
    int n1 = 81, n2 = 153;


    /************Greatest common divisorgcd*************/
    // while 循环 
    gcd = ( n1 < n2 ) ? n1 : n2;

    while ( n1%gcd || n2%gcd )
    {
        gcd--;
    }

    printf(" The greatest common divisor of %d and %d is %d \n", n1, n2, gcd);

    /***********lowest common multipleLCM*************/
    // 通过最大公约数计算
    
    lcm = ( n1 > n2 ) ? n1 : n2;

    while ( lcm++ )
    {
        if ( lcm%n1==0 && lcm%n2==0 )
        {
            printf("The least common multiple of %d and %d is %d \n", n1, n2, lcm);
            break;
        }
    }

    return 0;
}
