#include<stdio.h>
int main()
{
        long int my_array[]={1,23,17,4,-5,100};
        int *ptr;
        int i;
        ptr = &my_array[0]; /* point our pointer to the first
                            element of the array */
        printf("\n");
        for (i=0; i<6; i++)
        {
            printf("A) my_array[%d] = %d \n",i,my_array[i]);
            printf("ptr + %d = %d \n",i, *(++ptr));
        }
return 0;
}
