#include <iostream>

using namespace std;

int main(void){
	double s=0;
	for(int i=1, j = 1; i <= 39; i += 2, j *= 2){
		s += i/double(j);
		//printf("%i/%i = %.2lf (S=%.2lf)\n", i, j, i/double(j), s);
	}
	printf("%.2lf\n", s);
}
