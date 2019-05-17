#include<stdio.h>
int main()
{
    int x;
    int odd=0;
    int even=0;
    
    scanf("%d",&x);
    while(x!=-1)
    {
        x%=2;
        if (x==1)
            odd++;
        else even++;
        
        scanf("%d",&x);
    }
    
    printf("%d %d",odd,even);
    return 0;
}
