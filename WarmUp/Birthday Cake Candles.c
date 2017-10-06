#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,i,max=INT_MIN,count=0; 
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==max){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
