#include <math.h>
#include <iostream>
using namespace std;
int isPrime(int number){
	for(int i=2; i <= sqrt(number); i++){
		if(number % i == 0){
			return 1;
		}	
	}
	return 0;	
}

int main(void){
	int n;
	cin >> n;
	int resp[n];
	for(int i=0; i<n; i++){
		cin >> resp[i];
		if(isPrime(resp[i]) == 1){
			cout << resp[i] << " nao eh primo\n";
			}else{
				cout << resp[i] << " eh primo\n";
			}
	}
	return 0;
}
