#include <stdio.h>
// int main()
// {
//     int a,b,c;
//     for(a=0,b=12,c=23;a<2;a++){
//         printf("%d",a+b+c);
//     }
// }

// int main(){
//     int i = 1;
//     for (; i < 5; i++)
//     {
//         printf("%d", i);
//     }
// }

// int main(){
//     int i,j,k;
//     for(i=0,j=0,k=0;i<4,k<8,j<10;i++){
//         printf("%d %d %d\n",i,j,k);
//         j+=2;
//         k+=3;
//     }
//     return 0;
// }

int main(){
    int a=10;
    printf("Printing table chart till %d\n",a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d\t",(i*j));
        }
        printf("\n");
    }
}