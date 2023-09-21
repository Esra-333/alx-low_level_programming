           global      main
           extern      printf
   main:
           mov     edit, format
           xor     eax, eax
           call    printf
           mov     eax, 0
           ret
   format: db `Hello, Holberton\n`,0
