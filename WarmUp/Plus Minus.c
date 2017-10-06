#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;
    float count=0,count1=0,count2=0; 
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            count++;}
         if(a[i]<0){
            count1++;
            }
        if(a[i]==0){
            count2++;
        }
            
      
    }
      count=count/n;
        count1=count1/n;
        count2=count2/n;
    printf("%f\n%f\n%f\n",count,count1,count2);
    return 0;
}

