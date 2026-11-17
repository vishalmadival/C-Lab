#include<stdio.h>
int main(void)
{
    int a[100],n,i,smallest,largest;
    long sum=0;
    float average;
    printf("Enter number of elements(1-100):");
    scanf("%d",&n);
    if(n<1 ||n>100){
        printf("Invalid array size.\n.");
        return 0;
    }
    printf("Enter%d elements:",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    smallest=largest=a[0];
    for(i=0; i<n; i++){
        sum+=a[i];
        if(a[i]<smallest)smallest=a[i];
        if(a[i]>largest)largest=a[i];
    }
    average=(float)sum/n;
    printf("sum=%1d\n",sum);
    printf("average=%2f\n",average);
    printf("smallest=%d\n",smallest);
    printf("largest=%d\n",largest);
    return 0;
}