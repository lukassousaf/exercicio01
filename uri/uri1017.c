#include <stdio.h>

int main(void)
{
    double tempo, vmedia;
    scanf("%lf", &tempo);
    scanf("%lf", &vmedia);
    double dist = (vmedia*tempo)/12;
    printf("%.3lf\n", dist);
    return 0;
}