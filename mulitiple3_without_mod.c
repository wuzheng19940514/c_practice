//
//  main.c
//  mulitiple3_without_mod
//
//  Created by Apple on 2018/10/12.
//  Copyright © 2018年 Apple. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;;i--)
    {
        n=n-3;
        if(n<0)
        {
            n=n+3;
            break;
        }
        else if(n==0)
        {
            break;
        }
        
    }
    printf("%d\n",n);
    return 0;
}
