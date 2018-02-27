#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Caesar Cipher
void cesar(int desl, char *string){
	// printf("%s -> ", string);
	int tam = 0, i;
	for(i=0; i < strlen(string); i++){
		if(!((string[i]-desl >= 'A' && string[i]-desl <= 'Z') || (string[i]-desl >= 'a' && string[i]-desl <= 'z'))){
			string[i] = (string[i] + 26) - desl;
		}else{
		string[i] = string[i]-desl;
		}
	}
	printf("%s\n", string);
}


int main(int argc, char const *argv[])
{
	int n, d;
	char *st = (char *) calloc(50, sizeof(char));

	scanf("%i", &n);

	for(int i=0; i<n; i++){
		scanf("%s", st);
		scanf("%i", &d);
		cesar(d, st);
	}
	return 0;
}