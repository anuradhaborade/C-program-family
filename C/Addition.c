#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
/* Addition of two numbers */
int addition(int val1,int val2)
{
    return val1+val2;
};


int main()
{
    int A,B;

    scanf("%d%d",&A,&B);
    printf("Addition of %d and %d\n",A,B);
    printf("%d",addition(A,B));
    return 0;
}
