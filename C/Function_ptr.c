#include <stdio.h>

// Function pointer return:int
typedef int (*Arethmetic)(int, int);

int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int Multi(int x, int y) { return x * y; }
int devision(int x, int y) { return x / y; }
int operation1(int x, int y, Arethmetic func)
{
    /* calling one function inside another function using  Function pointer*/
    printf("%d",func(x,y));
    return 0; }


// Driver Code
int main()
{    char input=0;
     int param1=0;
     int param2=0;
     Arethmetic operation[4]={NULL}; /* array of Function pointer*/
     operation[0]=add;
     operation[1]=sub;
     operation[2]=Multi;
     operation[3]=devision;
     printf("Enter Operation:");
     scanf("%c",&input);
     printf("Enter 1st element:");
     scanf("%d",&param1);
     printf("Enter 2nd element:");
     scanf("%d",&param2);



     switch(input)
     {
        case '+':
                operation1(param1,param2,add);
                break;
        case '-':
                printf("%d\n",(operation[1] (param1,param2)));
                break;
        case '*':
                operation1(param1,param2,Multi);
                break;
        case '/':
                operation1(param1,param2,devision);
                break;
        default: //do nothing
        break;
     }



    return 0;
}
