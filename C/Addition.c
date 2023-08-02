#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
/* Addition of two Integer numbers */
int integer_addition(int val1,int val2)
{
    return val1+val2;
};

/* Addition of two Float numbers */
float float_addition(float val1,float val2)
{
    return val1+val2;
};

/* Addition of two double numbers */
double double_addition(double val1,double val2)
{
    return val1+val2;
};

int main()
{
    int A,B;
    float C,D;
    double E,F;
    scanf("%d%d",&A,&B);
    scanf("%f%f",&C,&D);
    scanf("%lf%lf",&E,&F);
    printf("Addition of %d and %d\n",A,B);
    printf("%d\n",integer_addition(A,B));
    printf("Addition of %f and %f\n",C,D);
    printf("%f\n",float_addition(C,D));
    printf("Addition of %lf and %lf\n",E,F);
    printf("%lf",double_addition(E,F));
    return 0;
}
