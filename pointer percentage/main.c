#include <stdio.h>
#include "control.h"


int main()
{

int x;
int *pX = &x;

double y;
double * pY = &y;

printf("Please input a number to find a %% of itself:\n");
scanf("%d",&x);

printf("Enter the desired %%:\n");
scanf("%lf",&y);

percentage(&x, &y);

    return 0;
}
