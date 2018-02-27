#include <iostream>

using namespace std;

int main(void){
	int n;
	int menor[2];
	cin >> n;
	int *arr = (int *) calloc (n, sizeof(int));
	for(int i=0; i < n; i++){
		cin >> arr[i];
		if(i == 0) menor[1] = arr[i], menor[0] = i;
		if(arr[i] < menor[1]) menor[1] = arr[i], menor[0] = i;
	}
	printf("Menor valor: %i\nPosicao: %i\n", menor[1], menor[0]);
	return 0;
}
