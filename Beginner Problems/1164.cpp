#include <iostream>

using namespace std;
int main(void){
	int n;
	cin >> n;
	int acc;
	for(int i=0; i < n; i++){
		int acc_internal = 0, number;
		cin >> number;
		for(int j=1; j < number; j++){
			if(number % j == 0) acc_internal += j;
		}
		if(acc_internal == number){
			//cout << acc_internal << endl;
			cout << number << " eh perfeito\n";
		}else{
			//cout << acc_internal << endl;
			cout << number << " nao eh perfeito\n";
		}
	}
	return 0;
}
