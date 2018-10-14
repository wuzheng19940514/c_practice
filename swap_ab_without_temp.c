//
//  main.c
//  swap_ab_without_temp
//
//  Created by Apple on 2018/10/13.
//  Copyright © 2018年 Apple. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    a=c=e=10;
    b=d=f=7;
    //////+
    a=a+b;
    b=a-b;
    a=a-b;
    //////*
    c=c*d;
    d=c/d;
    c=c/d;
    //////^
    e=e^f;
    f=e^f;
    e=e^f;
    printf("%d %d %d\n",a,c,e);
    printf("%d %d %d",b,d,f);
    return 0;
}
