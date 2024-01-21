#include<iostream>
using namespace std;
int main()
{ 
	add=lambda x,y:x+y
	subtract=lambda x,y:x-y
	multiply=lambda x,y:x*y
	divide=lambda x,y:x/y
	radd=add(5,3)
	rsubtract=subtract(10.4)
	rmulti=multiply(6,2)
	rdiv=divide(8,2)
	printf("addition:",radd)
	printf("addition:",rsubract)
	printf("addition:",rmulti)
	printf("addition:",rdiv)
}
