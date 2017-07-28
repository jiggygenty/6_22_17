#include<stdio.h>

void main()
{
    int i,j,k,n;
    char dot[1], star[1], doll[1], circ[1];                        //Declaration
    printf("Enter a value for n:");                    //Accept a value for n
    scanf("%d",&n);

    printf("Enter a character for the first quadrant:\n");
    scanf(" %c",&dot);

    printf("Enter a character for the second quadrant: ");
    scanf(" %c",&star);

    printf("Enter a character for the third quadrant: ");
    scanf(" %c",&doll);

    printf("Enter a character for the fourth quadrant: ");
    scanf(" %c",&circ);

                        //Build matrix
    char mat[n][n];
    k=n/2;
    printf("\n");

    for(i=0;i<k;i++)                    //Setting 2nd quadrant = to star
    {
      for(j=0;j<k;j++)
      {
          mat[i][j]=star;
      }
    }
    for(i=0;i<k;i++)                    //Setting 1st quadrant = to dot
    {
      for(j=k;j<n;j++)
      {
          mat[i][j]=dot;
      }
    }
    for(i=k;i<n;i++)                    //Setting 3rd quadrant = to dollar sign
    {
      for(j=0;j<k;j++)
      {
          mat[i][j]=doll;
      }
    }
    for(i=k;i<n;i++)                    //Setting 4th quadrant = to 'o'
    {
      for(j=k;j<n;j++)
      {
          mat[i][j]=circ;
      }
    }
    for(i=0;i<n;i++)                    //Print matrix
    {
      for(j=0;j<n;j++)
      {
          printf(" %c",mat[i][j]);
      }
      printf("\n");
    }

}
