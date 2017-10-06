#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int q; 
    scanf("%i", &q);
    for(int a = 0; a < q; a++){
        char s[100000],r[100000];
        int len,i,count=0; 
        scanf("%s", s);
        
        len=strlen(s)-1;
        for(i=0;i<len;i++){
            r[i]=s[len-i];}
        for(i=1;i<len;i++){
            if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
                count=1;
            else
            {
             count=0;
                break;
            }
        }
        if(count==1){
            printf("Funny\n");}
        else{
            printf("Not Funny\n");
        }
    }
    return 0;
}
