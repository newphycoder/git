#include<stdio.h>

void division(int a,int b);

int main()
{
    int a,b;
    printf("输入0结束程序\n");

    do{printf("请输入您想要计算的表达式\n");
    scanf("%d/%d",&a,&b);
    if(a)
        division(a,b);
    }while(a);
    
    return 0;
}


void division(int a,int b)
{
    int all=200;
    int number[all];
    int mod;
    int count;
    printf("%d.",a/b);
    mod=a%b;
    
    for(count=0;count<all;count++){
        mod*=10;
        number[count]=mod/b;
        mod%=b;
        printf("%d",number[count]);
        if(mod==0)
            break;
    }
    
    printf("\n");
}
