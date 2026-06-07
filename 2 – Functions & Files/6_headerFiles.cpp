/*
author: aditya.mishra10@nmims.in

Topics covered:

    - header files
    -linking


*/

/*
    How linking works:

                    HEADER

         6_getInput.h
         ┌──────────────┐
         │int getInput();│
         └──────┬───────┘
                │
                │ included
                ▼

         main.cpp
         ┌──────────────┐
         │ main()       │
         │ getInput();  │
         └──────┬───────┘
                │
                ▼
            compile
                │
                ▼
             main.o
                │
                │ needs getInput()
                │
                ▼

         6_getInput.cpp
         ┌──────────────┐
         │ getInput()   │
         │ { ... }      │
         └──────┬───────┘
                │
                ▼
            compile
                │
                ▼
          6_getInput.o
                │
                │ provides getInput()
                ▼

══════════════════════════
        LINKER
══════════════════════════

main.o  ───────► getInput ◄────── 6_getInput.o

                │
                ▼

            program.exe

*/


#include "6_getInput.h"
#include <iostream>

int main()
{
    getInput();
    return 0;
}