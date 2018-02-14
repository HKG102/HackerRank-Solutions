#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,hs=0,ls=0,h,l,i; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&s[i]);
    }
    
    h=l=s[0];
    for(i=0;i<n;i++){
        if(h<s[i]){
            h=s[i];
            hs++;
        }
        if(l>s[i]){
          l=s[i];
            ls++;
        }
    }
    printf("%d %d",hs,ls);
    
    return 0;
}
