#include <math.h>
int main()
{
    const float a=9.8;
    float u,D;
    int t;
    printf("Enter initial velocity of obj: ");
    scanf("%f",&u);
    printf("Enter the time taken of obj: ");
    scanf("%d",&t);
    D=(u*t)+(a*(pow(t,2)))/2;
    printf("The distance travelled by an obj: %f ",D);
    
}
