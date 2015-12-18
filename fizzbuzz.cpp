#include <iostream>
#include <stdio.h>

using namespace std;

void iterativeFizzbuzz(int k) {
	for(int i = 0; i <= k; i++) {
		if(i % 3 == 0 && i % 5 == 0) {
			puts("fizzbuzz");
		} else if(i % 3 == 0) {
			puts("fizz");
		} else if(i % 5 == 0) {
			puts("buzz");
		} else {
			cout << i << '\n';
		}
	}
}

int recursiveFizzbuzz(int i)
{
	if(i > 1) {
		recursiveFizzbuzz(--i);
		if(i%3 != 0 && i%5 != 0) {
			cout << i << '\n';
		}
		else {
			puts((i%3)?"buzz":((i%5)?"fizz":"fizzbuzz"));
		}

		return i;
	}
}

int main(void)
{
	// Iterative fizzbuzz
	//iterativeFizzbuzz(100);

	// Recursive fizzbuzz
	recursiveFizzbuzz(100);
	
	// Tiny fizzbuzz
	//for(int i=0;i++<100;printf(i%3==0?i%5==0?"fizzbuzz\n":"fizz\n":i%5==0?"buzz\n":"%d\n",i));
	
	return 0;
}
