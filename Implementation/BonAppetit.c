#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,k,i,sum=0,loss;
    scanf("%d %d",&n,&k);
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int b_ch;
    scanf("%d",&b_ch);
    int b_ac= (sum - a[k])/2;
    if(b_ac==b_ch){
        printf("Bon Appetit");
    }
    else{
        loss=b_ch-b_ac;
        printf("%d",loss);
    }
    
    
    return 0;
}
