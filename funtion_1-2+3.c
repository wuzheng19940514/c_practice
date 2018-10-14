//
//  main.c
//  funtion_1-2+3
//
//  Created by Apple on 2018/10/10.
//  Copyright © 2018年 Apple. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(-1,i+1)*i;
    }
    printf("%d\n",sum);
    
    return 0;
}
