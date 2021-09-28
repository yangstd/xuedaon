//
//  eleven.c
//  6.4思考与练习 -- Question 11
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 设 N 是一个四位数，它的 9 倍恰好是其反序数，求 N 值

int main()
{
    int N = 999, mun;
    
    while (N++ < 10000)
    {
        mun = (N/1000*1) + (N%1000/100*10) + (N%100/10*100) + (N%10*1000);

        if ( mun == 9*N)
        {
            printf("N = %d \n", N);
            break;
        }
    }

    printf("N = %d, mun = %d \n", N, mun);

    return 0;
}
