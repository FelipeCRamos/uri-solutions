#include <iostream>
using namespace std;

int main(void){
	// uppercase: 90° clockwise
	// lowercase: 90° counter-clockwise
	string movement;
	cin >> movement;
	for(int i = 0; movement[i]!= '\0'; i++){
		printf("Movement %i: %c\n", i, movement[i]);
	}

	return 0;
}
