// Arrays and Pointer Arithmetic in C

#include<stdio.h>

int main()
{
    int a = 25;
    int * ptra = &a;
    printf("%d\n",ptra);
    ptra++;                   //Here we increment the address of a by one size of 'int' using pointer.
    // ptr--;
    printf("%d\n",ptra);
    printf("%d\n",ptra-2);     //Here it does not subtract 2 from the address but it subtact two times size of 'int(4)' i.e. 8.  
    // We cannot directly dereference(i.e. print the value using '*' ) using the address if the address is invalid 
    // because it may happen that, the new address is empty.
    
    printf("size of char is : %d",sizeof(char));
    return 0;
}
