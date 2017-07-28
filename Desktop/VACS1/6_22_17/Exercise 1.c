#include<stdio.h>
int sum(int,int);//Prototype or declaration

int main(){
int x,y,result;
printf("Enter value of x and y:\n");
scanf("%d %d",&x,&y);
result=sum(x,y); /* calling of function sum()
                    and passing x and y.
                    At this point, the control will
                    "jump to 'sum()'.*/

printf(" %d + %d = %d \n",x,y,result);
return 0;
}
//Definition of function sum
int sum(int a,int b)
{
    int res;        /*This is a local variable
                      but will be returned to main() */

    res=a+b;        //compute sum using the received arguments
    return(res);    /*return 'res' and control to main().
                      'res' will be stored in 'result' at main() */
}
