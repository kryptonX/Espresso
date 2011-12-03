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
#include "tableorg.h"

void draw_titlebar(const char *title) {
     
     struct outline _outline = { title, 0 };
        
     printf("%s\n", _outline.title);
     do {
            printf("===");
            ++_outline.ccout;
         } while (_outline.ccout <= 10);
     printf("\n");    
}

void set_hd(int nmbr, char *title, char *loc, char *val) {
     
     struct headers _headers = { 
                                    null,
                                    "0x2ff28",
                                    nchar,
                                    nchar,
                                    null,
                               };
     _headers.title = title;
     _headers.location = loc;
     _headers.value = val;       
    
     /* Write */
     
     printf("%s:\t", _headers.title); 
                                     
}

void draw_sep(int ccout) {
     int i;     
     for(i = 0; i <= ccout; ++i)
           printf("--");
     /* end */
}


