#include <stdio.h>

int main ()
{
    double x,y;
    printf("Nhap vao hai so thuc x, y: ");
    scanf("%lf%lf",&x,&y);
    //x==y ? printf("x=y") : x>y ? printf ("x>y") : printf ("x<y");

    if( x == y ) 
        printf( "%lf is equal to %lf\n", x, y );
    if( x != y ) 
        printf( "%lf is not equal to %lf\n", x, y );
    if( x < y ) 
        printf( "%lf is less than %lf\n", x, y );
    if( x > y ) 
        printf( "%lf is greater than %lf\n", x, y );
    if( x <= y ) 
        printf( "%lf is less than or equal to %lf\n", x, y ); 
    if( x >= y ) 
        printf( "%lf is greater than or equal to %lf\n", x, y );
}