//
//  nine.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 矩阵的转置运算: 一个二维数组，进行转置

int main()
{
    int arr[3][3];
    int i, j, t;

    // 矩阵赋值
    for ( i = 0; i < 9; i++)
    {
        *(*arr + i) = i + 1;
    }

    // 打印矩阵
    for ( i = 0; i < 3; i++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    // 矩阵转置
    for ( i = 0; i < 3; i++ )
    {
        for (j = i+1; j < 3; j++ )
        {
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }

    // 打印转置后矩阵
    for ( i = 0; i < 3; i++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

