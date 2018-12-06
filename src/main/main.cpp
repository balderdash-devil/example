#include "stdio.h"
#include "../FooBar.h"

int main(){
	int b = 3;
	FooBar fooBar(3);
	printf("%d\n",fooBar.sum(b));
}
