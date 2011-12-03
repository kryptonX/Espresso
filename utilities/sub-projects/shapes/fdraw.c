#include <stdio.h>
#include "shapes.h"

void draw_rectangle(int x, int y) {
     if (x != 0 && y != 0
        && x > 0 && y > 0) {
             int cc = 0;
             
             for (cc = 0; cc <= x; cc++) {
                 printf(".\n");    
             }   
             cc = null;
             do {
                 printf(". ");
                 ++cc;
             } while (cc <= y);
     } else 
            printf("segmentation fault\n");
}

void draw_invert(int x, int y) {
     if (x != 0 && y != 0 
        && x > 0 &&
           y > 0) {
               
            int cc = 0;
            
            do {
               printf("\n\t\t.");
               cc++;    
            } while (cc <= y);
            
            cc = null;
            
            for (cc = 0; cc <= x; cc++) {
                printf(". ");
            }
            
                      
        }        
}
