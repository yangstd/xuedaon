//
//  one.c
//  6.4思考与练习 -- first question(if...else...)
//
//  Created by yangshidong on 21/9/27
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

int main()
{
    int score = 0;
    char grade = '0';

    printf("Please input your score: ");
    scanf("%d", &score);
    
    if ( score >= 90 && score <= 100 )
    {
        grade = 'A';
    }
    if ( score >= 80 && score < 90 )
    {
        grade = 'B';
    }
    if ( score >= 70 && score < 80 )
    {
        grade = 'C';
    }
    if ( score >= 60 && score < 70 )
    {
        grade = 'D';
    }
    if (score >= 0 && score < 60 )
    {
        grade = 'E';
    }
    if (score < 0 || score > 100)
    {
        printf("Input error! \n");
    }
    else
    {
        printf("grade %c \n", grade);
    }


    return 0;
}
