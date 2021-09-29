//
//  thirteen.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  定义一个数组， 该数组有 10 个数，将最大的数打印出来

int main()
{
    int arr[10] = {12, 23, 34, 45, 32, 56, 67, 86, 96, 57};
    int max = arr[0];
    int i;

    for ( i = 0; i < 10; i++ )
    {
        if ( arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("max = %d \n", max);

    return 0;
}

