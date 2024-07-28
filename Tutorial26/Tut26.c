#include<stdio.h>
int main()
{
    printf("Let's Learn about pointers!!\n");
    int a=5;
    int * ptr = &a;

    // Printing the value of variable a.
    printf("The value of a is : %d\n",a);
    printf("The value of a is : %d\n",*ptr);
    
    // Here we cannot use %d for printing the address of the variable,
    // because the %d is used to print only integers, and it cannot hold the large number like
    // address values, so we use %x which is use to represent hexadecimal values.
    printf("The address of a is : %x\n",&a);         
    printf("The address of a is : %x\n",ptr);  //Gives value in hexadecimal form.
    printf("The address of a is : %p\n",ptr);   //Specially used for printing the address of variable stored in the pointer.
    /* 
       The value using %p may differ from using %x, 
       this is because, %p prints the leading zeros also and might introduce additional characters for better readability 
       While %x treats the pointer value as an unsigned integer and prints it as an hexadecimal number.
       %x does not gaurantee the leading zeros.
    */
    printf("The address of pointer to the variable a is : %p\n",&ptr);
    //This will print the address of the pointer pointing to the variable.

    return 0;
}
