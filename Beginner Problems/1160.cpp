#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	int t; // how many test cases
	cin >> t;
	for (int i=0; i<t; i++){
		double pa, pb, g1, g2;
		cin >> pa >> pb >> g1 >> g2;
		for(int i=0; i<=102; i++){
				pa += floor(pa*g1/100);
				pb += floor(pb*g2/100);
				if(pa>pb) {
						cout << i << " anos." << endl;
						break;
				}
				else if(i > 100) {
						cout << "Mais de 1 seculo." << endl;
						break;
				}
			}
	}
	return 0;
}
