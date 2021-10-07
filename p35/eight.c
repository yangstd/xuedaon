//
//  eight.c
//  1.6数组思考与练习
//
//  Created by yangshidong on 21/9/30
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

//  编写程序，打入月份号，输出该月的英文月名。要求用指针数组处理。
//  例如，输入“3”，则输出“March”

int main()
{
    // 一月    二月     三月  四月  五月 六月 七月 八月   九月      十月    十一月   十二月
    // January February March April May  June July August September October November December
    
    char *Month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "November"};
    
    int month = 3;

    printf( "%d 月的英文名为: %s \n", month, *(Month + month - 1) );
    
    return 0;
}

