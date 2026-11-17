#include<stdio.h>
int main(void)
{
    int n, original,digit,reverse=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n<0){
        printf("Negative number is not considered a palindrame here.\n");
    return 0;
    }
    original=n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original==reverse)
       printf("%d is a palindrame.\n",original);
    else
       printf("%d is not a palindrame.\n",original);
    return 0;
}