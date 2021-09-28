//
//  six.c
//  6.4思考与练习 -- Sixth question
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 猴子吃桃

int main()
{
    int peach = 1, day = 10;

    // 从第 10 天推第一天桃子数
    while ( day > 1 )
    {
        peach = (peach + 1) * 2;
        day--;
    }

    printf("The number of peaches picked on the first day is %d \n", peach);
    
    // 从第一天到第十天
//    peach = 1, day = 1;
//    do {
//        peach = (peach + 1) * 2;
//        day++;
//    } while (day < 10);

    return 0;
}
