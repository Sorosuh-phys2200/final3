#include <stdio.h>
#include <math.h>

#define M_PI  3.141592653589793

int main(void)
{
    int np = 10;
    int k, i;
    float w, sum, err;
    float exact = pow(M_PI, 4.)/90.;
    
    float macheps = 1.;
    while ( (float) (1. + macheps) != 1. )
    {
        macheps /= 2;
    }
    printf("macheps = %g\n", macheps );
   
    for (i = 0; i < 10; i++)
    {
    sum = 0.;
    for(k = np; k > 0; k--)
    {
        w = 1./k;
        sum += pow(w, 4.);
    }
    err = fabs(sum - exact);
    printf("%10d    %15.8f     %15.8g\n", np, sum, err/(3*macheps));
    np *= 2;
    }     
    return 0;
}
