//
//  seven.c
//  6.4思考与练习 -- Seventh question
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// abc = a! + b! + c!;
// 找出这样的数

int main()
{
    int num = 99, fa, fb, fc; 
    int a, b, c, i;
    
    while ( num++ < 1000 )
    {
        a = num / 100;
        b = num % 100 / 10;
        c = num % 10;

        i = 0, fa = 1;
        while (i++ < a)
        {
            fa *= i;
        }

        i = 0, fb = 1;
        while (i++ < b)
        {
            fb *= i;
        }

        i = 1, fc = 1;
        while (i++ < c)
        {
            fc *= i;
        }
        

        if ( num == (fa + fb + fc) )
        {
            printf("%d = %d! + %d! + %d! \n", num, fa, fb, fc);
            printf("\n");
        }
    }

    return 0;
}
