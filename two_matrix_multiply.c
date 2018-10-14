//
//  main.c
//  two_matrix_multiply
//
//  Created by Apple on 2018/10/11.
//  Copyright © 2018年 Apple. All rights reserved.
//

#include <stdio.h>

int main() {
    int M1[3][4]={{1, 0, 1, 0}, {0, 1, 0, 1}, {1, 0, 1, 0} };
    int M2[4][2]={{1, 1}, {1, 1}, {1, 1}, {1, 1}};
    int M3[3][2]={0};
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<4;k++)
            {
                M3[i][j]=M3[i][j]+M1[i][k]*M2[k][j];
            }
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",M3[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
