#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,a[10000],v,n;
    scanf("%d",&v);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         if(a[i] == v){
        printf("%d", i);
      }
    }
    
    return 0;
}
