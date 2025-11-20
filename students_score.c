#include<stdio.h>
int main()//功能一
{
    int n;
    int a[100];
    int sum=0;
    double anv=0;
    int max=0;
    int min=0;


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


    printf("\n====学生成绩列表====\n");
    for (int i = 0;i<n;i++)//功能二
    {
        printf("学生 %d : %2d \n",i+1,a[i]);
    }


    for (int i=0;i<n;i++)//计算总分
    {
        sum+=a[i];
    }

    anv=(double)sum/n;//计算平均分


    max=a[0];
    min=a[0];

    for (int i =1;i<n;i++) //找最值
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }



    printf("总分：%d\n",sum);
    printf("平均分：%.2f\n",anv);
    printf("最高分：%2d\n",max);
    printf("最低分：%2d\n",min);

    return 0;
}