#include<stdio.h>
int main()
{
    int x=0;
    int n=0;
    
    printf("输入您想求位数的整数：\n");
    scanf("%d",&x);
   
    do{
        n++;
        x/=10;
    }while (x!=0) ;

    printf("%d\n",n);
    
    return (0);
}
