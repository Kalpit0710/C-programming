// #include <stdio.h>
// int main()
// {
//     int a, rev, rem, org;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     org = a;
//     rev=0;
//     while (a != 0)
//     {
//         rem=a%10;
//         rev=rev*10+rem;
//         a/=10;
//     }
//     if(org==rev){
//         printf("It is palindrome");
//     }
//     else{
//         printf("Not palindrome");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i,sum=0;
//     printf("enter value ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("the sum= %d",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int i;
    for(i=1;i<10;i++){
        printf("%d",i);
    }
    return 0;
}