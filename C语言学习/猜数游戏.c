#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int a=rand();
    a%=100,a++;
    printf("我现在想好了一个1-100的数，来猜吧\n");
    
    int guess=0;
    int result=0;
    int count=0;
    do{
    printf("请输入您的猜测:\n");
    scanf("%d",&guess);
        count++;
        if (guess==a)
            result=1;
        else if(guess<a)
            printf("您猜小了\n");
        else printf("您猜大了\n");
    }
    while(result!=1);
    
    printf("您用了%d次猜到了答案\n",count);
    return(0);
}
