//
//  one.c
//  6.4思考与练习 -- first question(if...else if...else...)
//
//  Created by yangshidong on 21/9/27
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

int main()
{
    int score = 0;

    printf( "Please input your score: " );
    scanf( "%d", &score );
    
    if ( score > 100 || score < 0 )
    {
        printf( "Input error! \n" );
    }
    else if ( score >= 90 )
    {
        printf( "grade A \n" );
    }
    else if ( score >= 80 )
    {
        printf( "grade B \n" );
    }
    else if ( score >= 70 )
    {
        printf( "grade C \n" );
    }
    else if ( score >= 60 )
    {
        printf( "grade D \n" );
    }
    else
    {
        printf( "grade E \n" );
    }

    return 0;
}
