//
//  one_switch.c
//  6.4思考与练习 -- first question(switch...case...)
//
//  Created by yangshidong on 21/9/27
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

int main()
{
    int mark, score = 0;

    printf("Please input your score: ");
    scanf("%d", &score);

    mark = ( (score>=0) && (score<=100) ) ? score/10 : -1;

    switch ( mark )
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf( "E \n" );
            break;
        case 6:
            printf( "D \n" );
            break;
        case 7:
            printf( "C \n" );
            break;
        case 8:
            printf( "B \n" );
            break;
        case 9:
        case 10:
            printf( "A \n" );
            break;
        default:
            printf( "Input error! \n" );
    }



   return 0;
}
