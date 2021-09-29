//
//  sixteen.c
//  6.4思考与练习 -- Question 16
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  两个乒乓球队进行比赛，各出三人。甲队为A、B、C三人，乙队为X、Y、Z三人。
//  已抽签决定比赛名单。 有人向队员打听比赛的名单， 
//  A 说他不和 X 比， C 说他不和 X、Z 比。 请编程找出三对赛手的名单。


int main()
{
    char a, b, c;

    for ( a='X'; a<='Z'; a++ )
    {
        for ( b='X'; b<='Z'; b++ )
        {
            if ( a != b )
            {
                for ( c='X'; c<='Z'; c++ )
                {
                    if ( a!=c && b!=c )
                    {
                        if ( a!='X' && c!='X' && c!='Z' )
                        {
                            printf("a 和 %c ， b 和 %c, c 和 %c  进行比赛", a, b, c);
                        }

                    }
                }
            }
        }
    }

    printf("\n");


    return 0;
}
