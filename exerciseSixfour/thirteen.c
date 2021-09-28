//
//  thirteen.c
//  6.4思考与练习 -- Question 13
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 百钱买百鸡。 母鸡 3 元钱一只， 小鸡 1 元三只，
// 问 100 元钱要刚好买 100 只鸡。编程实现母鸡和小鸡各多少只。 

int main()
{
    int money = 100;
    int Hen, chick;

    for (Hen=1; Hen<=100; Hen++)
    {
        chick = 100 - Hen;

        if (money == (Hen*3 + chick/3))
        {
            printf("Hen is %d, chick is %d \n", Hen, chick);
        }
    }



    return 0;
}
