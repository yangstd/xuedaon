//
//  twelve.c
//  6.4思考与练习 -- Question 12
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 红、绿、蓝三种三色球各3个， 现将这9个球混合放在一个盒子中，
// 从中任意摸出 6 个， 编程计算摸出球的各种颜色搭配。

int main()
{
    int a, b, c, count=1;

    for (a=0; a<=3; a++)
    {
        for (b=0; b<=3; b++)
        {
            for (c=0; c<=3; c++)
            {
                if ( 6 == a+b+c )
                {
                    printf("Red:%d  green:%d  Blue:%d \n", a, b, c);
                    count++;
                }
            }
        }
    }

    printf("total: %d \n", count);

    return 0;
}
