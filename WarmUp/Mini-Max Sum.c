#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     long int a[5],max,min,sum=0;
    int i;
    scanf("%ld",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    for(i=1;i<5;i++){
        scanf("%ld",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
