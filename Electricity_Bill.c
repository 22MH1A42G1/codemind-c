#include<stdio.h>
int main()
{
    int u;
    float c,b,sr,tb;
    scanf("%d",&u);
    if(u<200)
    {
        c=1.20;
        b=u*c;
    }
    else if(u>=200 && u<400)
    {
        c=1.40;
        b=u*c;
    }
    else if(u>=400 && u<600)
    {
        c=1.60;
        b=u*c;
    }
    else if(u>=600 && u<800)
    {
        c=1.80;
        b=u*c;
    }
    else if(u>=800)
    {
        c=2.00;
        b=u*c;
    }
    if(b>400)
    {
        sr=b*0.15;
        tb=b+sr;
    }
    else
    {
        sr=0;
        tb=b+sr;
    }
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,sr,tb);
    
}