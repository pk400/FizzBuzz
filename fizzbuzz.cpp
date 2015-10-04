#include <iostream>
#include <stdio.h>

using namespace std;

int fizzbuzz(int i)
{
	if(i > 1) {
		fizzbuzz(--i);
		if(i % 3 == 0 && i % 5 == 0)
			{ puts("fizzbuzz"); }
		else if(i % 3 == 0)
			{ puts("fizz"); }
		else if(i % 5 == 0)
			{ puts("buzz"); }
		else
			{ cout << i << '\n'; }
		return i;
	}
}

int main(void)
{
	// Tiny fizzbuzz
	for(int i=0;i++<100;printf(i%3==0?i%5==0?"fizzbuzz\n":"fizz\n":i%5==0?"buzz\n":"%d\n",i));
	
	// Recursive fizzbuzz
	fizzbuzz(100);
	
	return 0;
}