#include <stdio.h>
#include <stdlib.h>
#include "include/draw.h"

int main(int argc, char *argv[]) {  
    int c = 0;
    int x1, y1 = 0;
    while (--argc > 0 && (*++argv)[0] == '-')
                 c = *++argv[0];
    switch (c) {
    case 'x':             
         printf("X variable: ");      
         scanf("%d", &x1);
         printf("\nY variable: ");
         scanf("%d", &y1); 
         draw_three(x1,y1);
          
    break;
    }
}
