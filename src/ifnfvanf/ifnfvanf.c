#include <stdio.h>

#define A(x) (x) <= (~(x & 0xFF) - ~(x & 0xFE)) ? (*b)(x): (*b)(x-1)

int b(int x){
	printf("%d\n", x);
	return (x^0xFF)==255?x:A(x);
}

int main(){
	return A(9);
}
