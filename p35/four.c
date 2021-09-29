//
//  four.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  实现数组的选择排序、冒泡排序

int main()
{
    int arr[10] = {1, 43, 2, 5, 6, 4, 8, 7, 9, 3};
    int i, j, temp;
    
    printf("排序前: \n arr[10] = { ");
    for ( i = 0; i < 10; i++ )
    {
        printf("%d ", *(arr + i) );
    }
    printf("}\n");

    //  冒泡排序
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ( arr[j+1] < arr[j] )
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("排序后: \n arr[10] = { ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i) );
    }
    printf("}\n");

    return 0;
}
