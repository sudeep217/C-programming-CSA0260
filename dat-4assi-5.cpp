#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int id;
    char name[40];
    int salary;
}e[60];
int main()
{
    int no,i,lar;
    printf("enetr no of employee\n");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("enetr %d employee\n",i);
        scanf("%s",&e[i].name);
        printf("enetr number\n");
        scanf("%d",&e[i].id);
        printf("enter salary\n");
        scanf("%d",&e[i].salary);
    }
    printf("displaying information\n");
    for(i=1;i<=no;i++)
    {
        printf("name of emp is  %s\n",e[i].name);
        printf("emp number is %d\n",e[i].id);
        printf("emp salary is %d\n",e[i].salary);
    }
    lar=e[0].salary;
    for(i=1;i<=no;i++)
    {
        if(lar<e[i].salary)
        {
            lar=e[i].salary;
        }
    }
    printf("maximum salary is %d\n",lar);
    return(0);
}

