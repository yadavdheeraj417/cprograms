#include<stdio.h>
int main( )
{
int x = 20 , y = 40 , z = 45 ;
if ( x > y && x > z )
printf( "x is big" ) ;
else if ( y > x && y > z )
printf( "y is big" ) ;
else if ( z > x && z > y )
printf( "z is big" ) ;
}
