#include<stdio.h>

int main()
{
    int x=0;
    int fact=0;
    int last=0;
    
    printf("请输入您要倒序的正整数\n");
    scanf("%d",&x);
    do{
        last=last*10+x%10;
        printf("%d",x%10);
        x=x/10;
    }while (x!=0);
    
    printf(" \n");
    printf("%d\n",last);
    return 0;
}
