#include <stdio.h>
#define N 100
int a[N];
int main()
{
    int i,n;
    int b=0,c=0,d=0,e=0,s=0;
    double r1,r2,r3,r4;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s++;
        if(a[i]<=18)
            b++;
        else if(a[i]<=35)
            c++;
        else if(a[i]<=60)
            d++;
        else
            e++;
    }
    r1=(double)b/s;
    r2=(double)c/s;
    r3=(double)d/s;
    r4=(double)e/s;
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n61-: %.2lf%%\n",r1*100,r2*100,r3*100,r4*100);
    return 0;
}
