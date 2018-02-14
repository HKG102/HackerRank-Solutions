#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int year; 
    scanf("%d", &year);
      if (year == 1918) { 
        printf("26.09.1918\n");
    } else { 
        if ((year < 1918 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("12.09.%d\n",year);
        } else {
            printf("13.09.%d\n",year);
        }
    }

    return 0;
}
