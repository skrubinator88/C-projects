#include <stdio.h>
int main() {
	int seq1;
	int seq2;
	int seq3;
	printf("Enter a phone number (XXX-XXX-XXXX): ");
	scanf("%d-%d-%d", &seq1, &seq2, &seq3);
	printf("You entered (%03d)%3d-%4d\n", seq1, seq2, seq3);
	return 0;
}
