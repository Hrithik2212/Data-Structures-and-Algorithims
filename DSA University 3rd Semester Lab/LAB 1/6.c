#include <stdio.h>
/*6. What will be the output ofthe following program:
Main()
{
int a, 'b,**c, ***d, ****e ;
a=10;
b=&a;
c=&b;
d=&c;
e=&d;
pnntf ( “\na = %d b = %u c = %u d = %u e =%u”, a, b, c, d, e ) ;
pintf ( “\n%d%d %d”, a, a + *b, **c + ***d + ****e);
}
*/

int main()
{
int a, *b,**c, ***d, ****e ;
a=10;
b=&a;
c=&b;
d=&c;
e=&d;
printf ( "\na = %d b = %u c = %u d = %u e = %u", a, b, c, d, e ) ;
printf ( "\n %d %d %d", a, a + *b, **c + ***d + ****e);
}