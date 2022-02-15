#include <stdio.h>
#include "control.h"


void percentage(int *a, double *b)
    {
        double c;

        c = (*b/100) * (*a);

        printf("Answer: %.2lf", c);
    }
