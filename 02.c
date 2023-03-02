#include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=10, b=0,c;
//     c=a&&b;
//     printf("%d",c);
// }
int main(int argc, char const *argv[])
{
    int x,y,max,min;
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
    max=x>y? x:y;
    min=x<y? x:y;
    printf("greater num is %d \n",max);
    printf("smaller num is %d \n",min);
    getchar();
}
