#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,i; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for( i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++){
   if(a[i]>=38){
                if((5-a[i]%5)<3){
                
                a[i]=(a[i]+(5-a[i]%5));
                printf("%d\n",a[i]);}
                else{
                printf("%d\n",a[i]);
                   } }       
     else
         printf("%d\n",a[i]);
   
                   
                   }
    return 0;
}
