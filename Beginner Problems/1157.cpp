#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for(int i=1; i < n; i++){
		if(n%i==0) printf("%i\n", i);
	}
	printf("%i\n", n);
	return 0;
}
