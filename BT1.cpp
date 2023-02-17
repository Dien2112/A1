#include <iostream>
using namespace std;
int length(char x){
	for (int i=0;;i++)
		if (x[i]=='\0') return i;
}
int strcmp(char x[], char y[]) {
	int n;
	if (length(x) > length(y)) n = length(y); else n = length(x);
	for (int i = 0; i < n; i++) {
		if (x[i] < y[i]) return -1;
		if (x[i] > y[i]) return 1;
	}
	return 0;
}
int main() {
	cout<<strcmp("HELLO", "HELLZ");
}
