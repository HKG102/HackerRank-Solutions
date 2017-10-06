#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
   int i,  count=1, len=strlen(s)-1;
    
    count=1;
    for(i=1;i<len;i++){
        if(s[i]>=65 && s[i]<=90)
        {
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}
