//
//  five.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>
#define MONTH 12

//  给出日期(年月日)， 计算该日是该年的第几天(需要考虑是否是闰年) 

int main()
{
    int days[2][MONTH] = { {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                           {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };

    int i, year, month, day;

    year = 2021;
    month = 10;
    day = 10;

    for ( i = 1; i < month; i++ )
    {
        if ( ((year%4==0) && (year%100!=0)) || (year%400==0) )
        {
            day += days[1][i-1];
        }
        else
        {
            day += days[0][i-1];
        }
    }


    printf("day is %d \n", day);

    return 0;
}
