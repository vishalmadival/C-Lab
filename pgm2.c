#include<stdio.h>
int main(void)
{
    const float PI=3.14159f;
    float r,area,circemference;
    printf("Enter radius:");
    scanf("% f",&r);
    area=PI*r*r;
    circemference=2*PI*r;
    printf("Area=%.2f\n",area);
    printf("circemference=%.2f\n",circemference);
    return 0;
}