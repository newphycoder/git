#include<stdio.h>
int main()
{
    int n;
    int factorial=1;
    
    printf("请输入您要求值的整数n\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        factorial *=i;
    }

    printf("n的阶乘为%d\n",factorial);
    return(0);
}
