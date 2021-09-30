//  
//  one_select.c
//  数组作业
//  
//  21/09/30 yangshidong
//

#include <stdio.h>

// 定义一个一维数组，并对它进行冒泡排序、选择排序，然后实现二分查找

int main()
{
    int arr[10] = { 9, 2, 7, 1, 8, 3, 6, 10, 4, 5 };
    int i, j, k, temp, num;
    int low, hight, mid, sign, loca;

    // 要查找的值
    num = 8;
    
    // 选择排序
    for ( i = 0; i < 9; i++ )
    {
        k = i;
        for ( j = i+1; j < 10; j++ )
        {
            if  ( arr[j] < arr[k] )
            {
                k = j;
            }
        }

        if (k != i)
        {
            temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
        }
    }

    // 输出排好序的数组
    printf("排序后:");
    for ( i = 0; i < 10; i++ )
    {
        printf("%d ", *(arr + i) );
    }
    printf("\n");

    // 二分查找
    low = 0;
    hight = 9;
    sign = 0;

    while ( low <= hight )
    {
        mid = low + (hight - low) / 2;

        if ( num < arr[mid] )
        {
            hight = mid - 1;
        }
        else if ( num > arr[mid] )
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

    if ( sign )
    {
        printf("找到了num %d, 它在数组的第 %d 位。\n", *(arr + loca), loca);
    }
    else
    {
        printf("查无此数!\n");
    }


    return 0;
}

