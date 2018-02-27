#include <iostream>
#include <math.h>
using namespace std;
int main(void){
	float quantia;

	cin >> quantia;

	int qInt = floor(quantia);
	float qFloat = quantia - floor(quantia);

	cout << "NOTAS:\n";

	cout << (qInt / 100) << " nota(s) de R$ 100.00" << endl;
	qInt -= (qInt / 100) * 100;
	
	cout << qInt / 50 << " nota(s) de R$ 50.00" << endl;
	qInt -= (qInt / 50) * 50;

	cout << qInt / 20 << " nota(s) de R$ 20.00" << endl;
	qInt -= (qInt / 20) * 20;
		
	cout << qInt / 10 << " nota(s) de R$ 10.00" << endl;
	qInt -= (qInt / 10) * 10;
	
	cout << qInt / 5 << " nota(s) de R$ 5.00" << endl;
	qInt -= (qInt / 5) * 5;
	
	cout << qInt / 2 << " nota(s) de R$ 2.00" << endl;
	qInt -= (qInt / 2) * 2;

	cout << qInt / 1 << " nota(s) de R$ 1.00" << endl;




	return 0;
	
}
