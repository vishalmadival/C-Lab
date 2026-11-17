#include<stdio.h>
int main(void)
{
    int choice;
    float temp,result;
    printf("1.celsius to fahrenheit\n");
    printf("2.fahrenheit to celsius\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter temperature:");
    scanf("%f",&temp);
    if(choice==1){
     result=(temp*9.0f/5.0f)+32.0f;
     printf("fahrenheit=%.2f\n",result);
    }else if (choice==2){
     result=(temp-32.0f*5.0f/9.0f);
     printf("celsius=%.2f\n",result);
    }else{
     printf("invalid choice.\n");
    }
    return 0;
}
