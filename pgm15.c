#include<stdio.h>
int main(void)
{
    char str[100],rev[100];
    int length=0,i,j;
    printf("Enter a word:");
    scanf("%99s",str);
    while(str[length]!='\0')
    length++;
    j=0;
    for(i=length-1; i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("length=%d\n",length);
    printf("reverse=%s\n",rev);
    return 0;
}