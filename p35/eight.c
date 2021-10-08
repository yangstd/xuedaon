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
    char *Month[12] = { 
                        "January",      // 一月 
                        "February",     // 二月
                        "March",        // 三月
                        "April",        // 四月
                        "May",          // 五月
                        "June",         // 六月
                        "July",         // 七月
                        "August",       // 八月
                        "September",    // 九月
                        "October",      // 十月
                        "November",     // 十一月
                        "November"      // 十二月
                        };
    
    int month = 3;

    printf( "%d 月的英文名为: %s \n", month, *(Month + month - 1) );
    
    return 0;
}

