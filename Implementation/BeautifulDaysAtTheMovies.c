#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       int i,j,k,n,c=0,a,t,r;
    float d;
    scanf("%d %d %d",&i,&j,&k);
    for(i=i;i<=j;i++){
        r=0;
        a=i;
        while(a!=0){
            r=r*10;
            r=r+a%10;
            a=a/10;
        }
        d=abs(r-i);
        d=d/k;
        t=d;
        if(t==d){
            c++;
        }
        
    }
    printf("%d",c);
    return 0;
}
