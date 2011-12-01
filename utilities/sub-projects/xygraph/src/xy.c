/**
Copyright (c) 2011, Edward Chernysh
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the <organization> nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <EDWARD CHERNYSH> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**/

#include <stdio.h>
#include <stdlib.h>
#include "../xygraph.h"

int draw_graph(int x, int y, ...) {              
             int x2 = 10 - x;
             int y2 = 10 - y;
             volatile int ylbl = 10;
             int y3 = 10 - y2;
        if (x == 0 && y == 0) {              
              int xl, yl = 0;
              printf("Graph:\n---------");
              printf("\n\n\n");
              printf("Y-Axis\n\n");              
              do {                    
                  printf(" | \n", ylbl);             
                  yl++;
                  
              } while (yl <= 10);            /* Create Y-Axis */
              printf("--");
              printf("*");              
              for (xl = 0; xl <= 10; xl++)     /* Create X-Axis */
                  printf("--");
              printf("\tX-Axis");
              printf("\n");                  
             
              
        } else if (x == 0 && y != 0) {
               printf("Graph:\n---------");
              printf("\n\n");
              printf("Y-Axis\n\n");
                          
              while (y2 >= 0) {
                    printf("|\n");
                    y2--;
              }
              printf("|");
              
              printf("*\n");              
              while (y3 > 0) {
                    --y3;
                    printf("|\n");      
              }
              
              int xv = 0;
              
              for (xv = 0; xv < 9; xv++)
                  printf(" --");
              printf("\tX-Axis\n");             
            
        } else if (x != 0 && y == 0) {
          printf("Graph:\n---------");
              printf("\n\n");
              printf("Y-Axis\n\n");
              
              int yv = 0;
                          
              while (yv <= 10) {
                    printf("|\n");
                    yv++;
              }
              printf("|");
              while (x2 >= 0) {
                    if (x < 5)
                    printf(" ");
                    else printf("  ");
                    --x2;      
              }
              printf("*\n");            
              
              
              int xv = 0;
              
              for (xv = 0; xv < 9; xv++)
                  printf("-- ");
              printf("\tX-Axis\n");
              
              system("pause");       
               
        } else {
          int il, i2 = 0;
              printf("Graph:\n---------");
              printf("\n\n");
              printf("Y-Axis\n\n");
                          
              while (y2 >= 0) {
                    printf("|\n");
                    y2--;
              }
              printf("|");
              while (x2 >= 0) {
                    printf("  ");
                    --x2;      
              }
              printf("*\n");              
              while (y3 > 0) {
                    --y3;
                    printf("|\n");      
              }
              
              int xv = 0;
              
              for (xv = 0; xv < 9; xv++)
                  printf(" -- ");
              printf("\tX-Axis\n");         
              
              
              
        }
        
        /* Write X-Axis inverted label numbers */

        int lbl;
        if (x != 0 && y != 0) {
        printf("  9  ");
        for (lbl = 8; lbl >= 1; --lbl)
            printf("%d  ", lbl);
        } else if (y != 0 && x == 0) {
               
        } 
       
}

int draw_plane(int x, int y, ...) {
    int x2 = 10 - x;
    int y2 = 10 - y;
    int y3 = 10 - y2;
}
