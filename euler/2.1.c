#include<math.h>
#include<stdio.h>

int main(void) 
{
    long max = 4*pow(10,6);
    long moins1 = 2;
    long moins2 = 1;
    long Fn = 2;
    long pairsum = 0;
    while( Fn <= max) {
        if (Fn%2 == 0) {
            pairsum += Fn;
        }
        Fn = moins1 + moins2;
        moins2 = moins1;
        moins1 = Fn;
        printf("%li ",Fn);
    }
    printf("Sum of pair is: %li\n", pairsum);
}

