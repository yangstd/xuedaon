//
//  four_select.c
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
    int i, j, k, temp;
    
    printf("排序前: \n arr[10] = { ");
    for ( i = 0; i < 10; i++ )
    {
        printf("%d ", *(arr + i) );
    }
    printf("}\n");

    //  选择排序
    for (i = 0; i < 9; i++)
    {
        k = i;

        for (j = i+1; j < 10; j++)
        {
            if ( arr[j] < arr[k] )
            {
                k = j;
            }
        }

        if ( k != i )
        {
            temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
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
