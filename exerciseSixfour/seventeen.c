//
//  seventeen.c
//  6.4思考与练习 -- Question 17
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>
#include <math.h>

//  实现将十进制数转二进制数


int main()
{
    int Decimal = 123, i = 0;
    int D = Decimal;
    long long Binary;
    
    while ( D != 0 )
    {
        Binary += (D % 2) * pow(10,i);    // pow 编译要用 -lm
        D /= 2;
        i++;
    }

    printf("Decimal number [%d] to binary number is [%lld] \n", Decimal, Binary);

    return 0;
}
