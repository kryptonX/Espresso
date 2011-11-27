#include "include/draw.h"

void spacer(void);
int hold(void);

int draw_two(int y, int x) {
    if (x > y)
       printf("Number error\n");
    int i = (y - x);   
int stage = 0;
printf("\n\n\n");
   while (stage <= i) {
        printf(".");
        stage++;
    }
    printf("\n\n\n");    
    return 0;
}

int draw_three(int x, int y) {
    spacer();
    int stg = 0;   
    int xx = x; 
    while (stg <= x) {
          printf(".");     
          stg++;
    }
    printf(".");
    int tb = 0;
    int yx = 0;
    int s_g = 0;
    
    do {
       for (tb = (-1); tb < x; tb++) {
                 if (s_g == (0))
                 printf("\n");
                 printf(" ");
                 printf(" ");
                 ++tb; 
                 ++s_g;        
        }                   
        tb = (0);
        ++yx; 
      printf(".\n");  
    } while (yx <= y);    
   spacer(); 
   hold();
   return 0;
   
}

void spacer(void) {
     printf("\n\n");          
}

int hold(void) {
 /* Platform sensitive */
 #ifdef _WIN32
        system("pause");
 #else
  system("get -p 'Press any Key to continue'");   
 #endif
}
