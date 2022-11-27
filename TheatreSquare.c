#include <stdio.h>
#include <math.h>
int main()
{
    double n, m, a;
    scanf("%lf%lf%lf", &n, &m, &a);
    long long int nSide = ceil(n / a);
    long long int mSide = ceil(m / a);
    long long int flagstone = nSide * mSide;
    printf("%lld", flagstone);
}