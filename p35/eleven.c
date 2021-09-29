//
//  eleven.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  求一个 3 x 3 矩阵对角线元素之和。

int main()
{
    int arr[3][3];
    int i, sum = 0;

    // 给数组赋值
    for ( i = 0; i < 9; i++ )
    {
        *(*arr + i) = i + 1;
    }

    // 计算矩阵对角线元素之和
    for ( i = 0; i < 3; i++ )
    {
        sum += arr[i][i];
    }

    printf("sum = %d \n", sum);

    return 0;
}

