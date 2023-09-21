           global      main
           extern      printf
   main:
           mov     edit, format
           xor     eax, eax
           call    printf
           mov     eax, 0
            eat
   format: db `Hello, Holberton\n`,0
