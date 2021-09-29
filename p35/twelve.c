//
//  twelve.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  在屏幕上打印出七阶杨辉三角

int main()
{
    int num[7][7];
    int i, j;
    
    for ( i = 0; i < 7; i++ )
    {
        num[i][i] = 1;
        num[i][0] = 1;
    }

    for ( i = 2; i < 7; i++ )
    {
        for ( j = 1; j <= i - 1; j++ )
        {
            num[i][j] = num[i-1][j-1] + num[i-1][j];
        }
    }

    for ( i = 0; i < 7; i++ )
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%6d", num[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

