//
//  main.c
//  find_str_subset
//
//  Created by Apple on 2018/10/14.
//  Copyright © 2018年 Apple. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *string1 = "1234567890";
    char *string2 = "123DC8";
    int length;
    
    length = strspn(string1, string2);
    printf("Character where strings differ is at position %d\n", length);
    return 0;
}
