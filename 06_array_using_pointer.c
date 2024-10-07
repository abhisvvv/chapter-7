#include <stdio.h>

int main(){
    int marks[] ={ 33,45,34,43};

    int* ptr =&marks[0];

    //  print("the marks at index %d is %d\n",marsk[i]);

for (int i = 0; i < 4; i++)
{
printf("the marks at index %d\n",i,*ptr);

ptr++;
}

    return 0;
}
