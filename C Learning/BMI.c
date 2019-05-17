#include<stdio.h>
int main()
{
    /*输入质量*/
    float m;
    printf("请输入您的体重(公斤）\n");
    scanf("%f",&m);
    
    /*输入身高*/
    float h;
    printf("请输入您的身高（米）\n");
    scanf("%f",&h);

    /*运算BMI*/
    float BMI;
    BMI=m/(h*h);
    printf("你的BMI是%f\n",BMI);
    
    /*展示BMI情况*/
    printf("分类                 BMI\n");
    printf("过低              小于18.5\n");
    printf("正常              18.5-23.9\n");
    printf("超重              24.0-27.9\n");
    printf("肥胖              不小于28\n");

    
    /*展示BMI情况*/
    if (BMI<18.5) {printf ("您体重过低\n");}
    else{
        if (BMI<24.0) {printf("您体重正常\n");}
        else{
            if (BMI<28.0) {printf("您超重了\n");}
            else{printf("您太肥胖了，注意减肥\n");}
            }
        }
    
    return(0);
}
