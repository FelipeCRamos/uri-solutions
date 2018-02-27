#include <iostream>
#include <string>
using namespace std;

class Disco {
	public:
		int radius;
		int height;
		string color;
};

// restrições:
// vermelho ñ laranja
// laranja ñ azul
// azul ñ verde
// verde ñ vermelho

void swap (Disco *a, Disco *b){
	Disco t = *a;
	*a = *b;
	*b = t;
}

void bubblesort(Disco *vetor, int len){
	for(int j=1; j < len; j++){
		for(int i=0; i < len-j; i++){
			// comparar elementos
			if(vetor[i].radius < vetor[i+1].radius){
				// deixa como está
			}else if(vetor[i].radius > vetor[i+1].radius){
				swap(vetor[i], vetor[i+1]);
			}
		}
	}
}

Disco *copyList(Disco *vetor, int len){
	Disco *novoVetor = (Disco *) calloc (len, sizeof(Disco));
	for(int i=0; i < len; i++){
		novoVetor[i].radius = vetor[i].radius; 
		novoVetor[i].height = vetor[i].height;
		novoVetor[i].color = vetor[i].color;
	}
	return novoVetor;
}

Disco tryIt(Disco base, int pos, int len, Disco *original){
	
	cout << "Teste tryIt" << endl;
	//cout << base.radius << base.height << base.color << endl;
	int acc = 0;
	for(int i = pos; i >= 0; i--){
		if(base.color != original[pos+1].color)	
	}
	return base;
}

int main(void){
	int n;
	cin >> n;
	Disco nivel[n];

	for(int i = 0; i < n; i++){
		cin >> nivel[i].height >> nivel[i].radius >> nivel[i].color;
	}
	bubblesort(nivel, n);

	// Informações pegas, hora de processa-las
	// Precisamos ordenar o vetor primeiro, para poder otimizar o processo geral

	// cout << "---------------------------" << endl;
	// cout << "- List sorted (by radius) -" << endl;
	// cout << "---------------------------" << endl;

	for(int i = 0; i < n; i++){
		cout << nivel[i].height << " " << nivel[i].radius << " " << nivel[i].color << endl;
	}
	Disco *nivelOrdenado = copyList(nivel, n);
	
	// descobrir a altura máxima
	for(int i=n-1; i >= 0; i--){
		// tentar com o maior valor
		tryIt(nivelOrdenado[i], n);
	}

	return 0;
}
