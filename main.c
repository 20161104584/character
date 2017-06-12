//
//  main.c
//  simple character
//
//  Created by 20161104584 on 17/6/12.
//  Copyright © 2017年 20161104584. All rights reserved.
//

#include <stdio.h>

int main()
{
    double a,b;
    char c;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
        scanf("%s",&c);
        getchar();
        switch(c)
        {
            case'+':printf("%.2lf\n",a+b);break;
            case'-':printf("%.2lf\n",a-b);break;
            case'*':printf("%.2lf\n",a*b);break;
            case'/':printf("%.2lf\n",a/b);break;
            default:printf("input error\n");break;
        }
    }
    return 0;
}
