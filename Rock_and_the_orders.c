#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,co,nco;
    scanf("%d %d
%d %d %d
%d %d %d",&g,&h,&a,&b,&c,&d,&e,&f);
    co=a+b+c+d+e+f+h;
    if(a+b+c>=150 && d+e+f>=150) co+=0;
    if(a+b+c<150 || d+e+f<150) co+=g;
    if(a+b+c<150 && d+e+f<150) co+=(2*g);
    nco=a+b+c+d+e+f+(2*g);
    if(co<nco) printf("YES");
    else printf("NO");
    return 0;
}