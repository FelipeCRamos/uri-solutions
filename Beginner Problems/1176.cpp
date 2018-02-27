#include <iostream>

using namespace std;
unsigned int fib(unsigned int number){
	if(number == 0){
		return 0;
	}else{
		if(number == 1) {
			return 1;
		}else{
			return fib(number-1) + fib(number-2);
		}
	}
}

int main(void){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		unsigned int number;
		cin >> number;
		printf("Fib(%i) = %i\n", number, fib(number));
	}
}
