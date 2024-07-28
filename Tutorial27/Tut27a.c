#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printf("Value at position 3 of array is %d\n",arr[3]);

    // Finding the address of each element 
    printf("The address of first element of the array is : %d\n",&arr[0]);
    printf("The address of first element of the array is : %d\n",arr);
    
    printf("The address of second element of the array is : %d\n",&arr[1]);
    printf("The address of second element of the array is : %d\n",arr+1);
    
    // Finding the value of each element 
    printf("The value of first element of the array is : %d\n",*(&arr[0]));
    printf("The value of first element of the array is : %d\n",*(arr));
    printf("The value of first element of the array is : %d\n",arr[0]);

    printf("The value of second element of the array is : %d\n",*(&arr[1]));
    printf("The value of second element of the array is : %d\n",*(arr+1));
    printf("The value of second element of the array is : %d\n",arr[1]);
    return 0;
}