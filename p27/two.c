//
//  two.c
//  6.4思考与练习 -- Second question(爱因斯坦阶梯)
//
//  Created by yangshidong on 21/9/27
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

int main()
{
    int n, find = 0;

    // 用 for 循环
    for (n = 7; !find; n++)
    {
        if ( n%2==1 && n%3==2 && n%4==3 && n%5==4 && n%6==5 && n%7==0 )
        {
            printf("n = %d\n", n);
            find = 1;
        }
    }


    return 0;
}
