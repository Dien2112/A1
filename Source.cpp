#include <iostream>
using namespace std;
void Sapxepmang(int a[], int m, int b[], int n, int KQ[], int& p) {
	p = 0; int i = 0, j = 0;
	do {
		if (i == m) KQ[p] = b[j++]; else
			if (j == n) KQ[p] = a[i++]; else
				if (a[i] > b[j]) KQ[p] = b[j++]; else KQ[p] = a[i++];
		p++;
	} while (p < m + n);

}
int main() {
	int a[] = { 3,5,12,67 };
	int b[] = { 5,23,34,45,56,67 };
	int KQ[20], p;
	Sapxepmang(a, 4, b, 6, KQ, p);
	for (int i = 0; i < p; i++) cout << KQ[i] << " ";
	return 0;
}