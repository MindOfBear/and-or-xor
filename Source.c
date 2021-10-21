#include <stdio.h>
#include <conio.h> 
// Functie pentru afisarea unui vector, primeste 2 parametrii pentru dimensiunea vectorului si vectorul care urmeaza sa fie afisat
void afisare_sir(int n, int sir[10]){
	for (int i = 0; i < n; i++) {
		printf("%d ", sir[i]);
	}
}

int main() {
	// Declarare variabile
	int sir1[10], sir2[10], n, or[10], and[10], xor[10];
	printf("Introduceti dimensiunea sirului de date: ");
	scanf("%d", &n);
	printf("\nIntroduceti pe rand valorile primului sir de date\n");
	for (int i = 0; i < n; i++) { // Citim datele pentru vectorul sir1
		printf("Introduceti valoarea pentru pozitia %d a sirului: ", i+1);
		scanf("%d", &sir1[i]);
	}
	printf("\nIntroduceti pe rand valorile pentru al doilea sir de date\n");
	for (int i = 0; i < n; i++) { // Citim datele pentru vectorul sir2
		printf("Introduceti valoarea pentru pozitia %d a sirului: ", i+1);
		scanf("%d", &sir2[i]);
	}
	// Calculare OR
	for (int i = 0; i < n; i++) {
		or [i] = sir1[i] || sir2[i];
	}
	// Calculare AND
	for (int i = 0; i < n; i++) {
		and[i] = sir1[i] && sir2[i];
	}
	// Calculare XOR
	for (int i = 0; i < n; i++) {
		xor[i] = sir1[i] ^ sir2[i];
	}
	printf("\n");
	// Afisarea vectorilor
	afisare_sir(n, sir1);
	printf(" - SIR 1\n");
	afisare_sir(n, sir2);
	printf(" - SIR 2\n");
	afisare_sir(n, or);
	printf(" - OR\n");
	afisare_sir(n, and);
	printf(" - AND \n");
	afisare_sir(n, xor);
	printf(" - XOR\n");

	printf("\n\nPentru incheierea programului va rugam sa apasati orice tasta.");
	getch();
	return 0;
}
