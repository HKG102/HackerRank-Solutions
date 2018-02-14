#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n,count[5]={0}; 
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
        count[a[i]]++;
    }
    int max=count[1];
    int max_index=1;
    for(int i=2;i<=5;i++)
        {
        if(count[i] > max)
            {
            max_index=i;
            max=count[i];
        }

    }
    printf("%d",max_index);
    return 0;
}
