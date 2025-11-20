#include<stdio.h>
int main()//功能一
{
    int n;
    int a[100];


    printf("请输入学生人数\n");
    scanf("%d",&n);
    

    while(n>100 || n<1)
    {
        printf("人数异常！！\n");
        scanf("%d",&n);
    }
    


    for(int i=0;i<n;i++)
    {
        printf("请输入第%d位同学的成绩:\n",i+1);
        scanf("%d",&a[i]);
        while(a[i]<0||a[i]>100)
        {
            printf("成绩有误！！");
            scanf("%d",&a[i]);
        }
    }
    return 0;
}