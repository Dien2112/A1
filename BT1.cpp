#include <iostream>
using namespace std;
int strcmp(char x[], char y[]) {
	int n;
	if (strlen(x) > strlen(y)) n = strlen(y); else n = strlen(x);
	for (int i = 0; i < n; i++) {
		if (x[i] < y[i]) return -1;
		if (x[i] > y[i]) return 1;
	}
	return 0;
}
int main() {
	cout<<strcmp("HELLO", "HELLZ");
}