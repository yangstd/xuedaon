//
//  two.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  将一个数组中的值按逆序重新存放。 
//  如原来顺序为:8、6、5、4、1，要改为: 1、4、5、6、8

int main()
{
    int arr[5] = {8, 6, 5, 4, 1};
    int i, temp;

    printf("原来: ");
    for ( i = 0; i < 5; i++ )
    {
        printf("%d ", *(arr+i) );
    }
    printf("\n");

    // 用循环将对称的元素的值进行互换

    for ( i = 0; i < 5/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[5-i-1];
        arr[5-i-1] = temp;
    }

    printf("逆序后: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(arr+i) );
    }
    printf("\n");

    return 0;
}
