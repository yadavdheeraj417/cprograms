#include<stdio.h>
int main( )
{
float x = 1.1 ;
while ( x == 1.1f )
{
printf ( "\n%f", x ) ;
x = x - 0.1 ;
}
}
