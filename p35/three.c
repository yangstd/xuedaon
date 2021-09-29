//
//  three.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/29
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  二分查找。有 15 个数按由大到小的顺序存放在一个数组中，
//  现在要查找某个数，要求用折半查找法找出该数是数族中第几个元素的值。
//  如果该数不在数组中，则打印无此数。

int main()
{
    int arr[15] = {98, 88, 68, 65, 58, 55, 45, 34, 23, 12, 8, 6, 5, 4, 3};
    int i, low, hight, mid, sign, loca;
    int num = 87;

    printf("arr[15] = { ");
    for ( i = 0; i < 15; i++)
    {
        printf("%d ", *(arr+i) );
    }
    printf("}\n");

    printf("num = %d \n", num);

    low = 0;
    hight = 14;
    sign = 0;
    loca = 0;

    if ( num>arr[0] || num<arr[14] )
    {
        loca = -1;
    }

    while ( low <= hight )
    {
        mid = low + (hight - low) / 2;

        if ( num > arr[mid])
        {
            hight = mid - 1;
        }
        else if (num < arr[mid] )
        {
            low = mid + 1;
        }
        else
        {
            loca = mid;
            sign = 1;
            break;
        }

    }

    if ( !sign || loca==-1 )
    {
        printf("无此数!\n");
    }
    else
    {
        printf("找到了%d，此数在数组下标第%d位.\n", arr[loca], loca);
    }

    return 0;
}
