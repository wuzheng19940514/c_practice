//
//  main.c
//  macro
//
//  Created by Apple on 2018/10/10.
//  Copyright © 2018年 Apple. All rights reserved.
//

#include <stdio.h>
#define min(x,y) ((x<y)?x:y);
int main() {
    int x,y,m;
    scanf("%d",&x);
    scanf("%d",&y);
    
    m=min(x,y);
    printf("%d \n",m);
    return 0;
}
