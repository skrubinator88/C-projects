#include<stdio.h>

int main() {
	char c;
	int i;
	char lowercaseLetters[26];
	char uppercaseLetters[26];
	int letter[26];
	int counter=0;
	for(i = 65; i <= 90; i++){
		lowercaseLetters[counter] = 0;
		uppercaseLetters[counter] = 0;
		uppercaseLetters[counter] = i;
		lowercaseLetters[counter] = i + 32;
		letter[counter] = 0;
		counter++;
	}
	while((c = getchar()) != EOF){
		for(i=0; i<sizeof(lowercaseLetters)/sizeof(char); i++){
			if( lowercaseLetters[i] == c || uppercaseLetters[i] == c) {
				letter[i]++;		
			}
		}
	}

	for(i=0; i<sizeof(letter)/sizeof(int); i++){
		printf("Letter %c or %c appears %d times\n", lowercaseLetters[i], uppercaseLetters[i],letter[i]);
	}
	return 0;
}
