#include <stdio.h>
int main ()
{ 
// POINTER  ARTHMETIC USING INTRGER POINTER 

    // int a =5;
    // int* ptr = &a;
    // printf("the address of a is %u\n",&a);
    // printf("the address of a is %u\n",ptr);

    // ptr++;
    //  ----------------> incriment
    // printf("the value of ptr is %u\n",ptr);


    // POINTER  ARTHMETIC USING CHACATER POINTER -------------,,,<<<<<---

  char a ='A';
    char  *ptr = &a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);

    ptr++; 
printf("the value of ptr is %u\n",ptr);
    return 0;
}
