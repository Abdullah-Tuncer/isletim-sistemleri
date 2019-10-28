#include <stdio.h>
#include<sys/wait.h>
#include <unistd.h>

void collatz(int sayi) {
	printf("%d\n", sayi);
	if (sayi == 1) return;
	pid = fork();
	if (pid > 0) {
		if ((sayi % 2) == 0) {
			sayi = sayi / 2;
		}
		else if ((sayi % 2) == 1) {
			sayi = (sayi * 3) + 1;
		}
	}
	if (pid == 0) {
		pid = wait();
		collatz(sayi);
	}
}
int main() {
	int sayi;
	printf("Sayiyi girin :");
	scanf("%d", &sayi);
	collatz(sayi);

	return 0;
}