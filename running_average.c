#include<stdio.h>
int main(){
    int n,i,a[100];
    double avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        avg=sum/(i+1);
        printf("%lf\n",avg);

    }
    return 0;

}

