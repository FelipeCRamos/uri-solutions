#include <iostream>

using namespace std;

int main(void){
	double s = 0;
	for (int i=1; i <=100; i++){
		s += 1/double(i);
	}
	//cout << s;
	printf("%.2lf\n", s);
	return 0;
}
