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
#include "xygraph.h"

int x, y = 0;

int main(int argc, char *argv[]) {  
   if (argc < 2) {
      printf("xygraph\t\tDesc.\n");
      printf("-----------------------------------------\n");
      printf("-x\t\tCreate a pre defined X*Y graph\n");      ;
      printf("-----------------------------------------\n");      
      #ifdef _WIN32
             system("pause");
      #endif
   } else {          
          int c;
          while (--argc > 0 && (*++argv)[0] == '-')
                c = *++argv[0];
                
          switch (c) {                                 
               case 'x':
                    printf("Value for X: \n");
                    scanf("%d", &y);
                    printf("Value for Y: \n");
                    scanf("%d", &x);                    
                    /* I screwed up; The first number happens to be Y and the second X ;
                    I know, doesn't make sense. */
                    draw_graph(y,x);
                    break;
                    
              default: 
                       printf("Segmentatio fault\n");
                       break; 
          }
   }
}
