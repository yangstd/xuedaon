//
//  eight.c
//  6.4思考与练习 -- Question 8
//
//  Created by yangshidong on 21/9/28
//  Copyright © 2021年 xuedaon.  All rights reserved. 
//

#include <stdio.h>

// 100 匹马驮100担货
// 大马一匹驮三担，中马一匹驮3担，小马两匹驮一担。

int main()
{
    int large, medium, small, sum = 0;
    
    for (large=1; large<100; large++)
    {
        for (medium=1; medium < 100; medium++)
        {
            for (small=2; small < 100; small+=2)
            {
                if ( ((large*3+medium*2+small/2)==100) && (large+medium+small==100) )
                {
                    printf(" large %d, medium %d, samll %d \n", large, medium, small);
                }
            }
        }
    }


    return 0;
}
