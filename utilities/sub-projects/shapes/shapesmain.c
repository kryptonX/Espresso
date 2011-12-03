#include <stdio.h>
#include <stdlib.h>
#include "shapes.h"

int main(int argc, char *argv[]) {
    
    int wid, ht, base;
    
    int c;
    
    while (--argc > 0 && (*++argv)[0] == '-')
          c = *++argv[0];
          
    switch (c) {
           
    case 'g':
    
    /* Set values */
    
    
    scanf("%d", &wid);
    scanf("%d", &ht);
    
    /* Initialize a structure */
    
    struct rectangle _rect = { wid, ht };  
    
    /* Call DRAW function */
    
    draw_rectangle(_rect.width, _rect.height);
    
    system("pause");
    break;
    
    case 'i':
        scanf("%d", &wid);
    scanf("%d", &ht);
    
    /* Initialize a structure */
    
    struct rectangle rect_ = { wid, ht };  
    
    /* Call DRAW function */
    
  draw_invert(rect_.width, rect_.height);
    
    system("pause");
         break;
}
    
}

void usage() {
     printf("-g\t\tDraw a plain graph\n");
     printf("-i\t\tInverted graph\n");     
}
