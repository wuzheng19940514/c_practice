//
//  main.c
//  binary_search
//
//  Created by Apple on 2018/10/14.
//  Copyright © 2018年 Apple. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max(x,y) ((x>y)?x:y);
int main()
{
    int data[10] = {12, 23, 29, 38, 44, 57, 64, 75, 82, 98};
    int input=44,i=10,l,m,j=0;
    l=floor(0.5*i);
    m=i-l;
    while(input != data[m])
    {
        l=max(floor(0.5*l),1);
        if(input>data[m])m=m+l;
        if(input<data[m])m=m-l;
        if(j>100)break;
        j++;
    }
    printf("%d",data[m]);
    return 0;
}
