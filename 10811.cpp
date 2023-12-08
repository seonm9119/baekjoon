#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {

	int n, m;
	scanf("%d%d", &n, &m);

    int arr[n+1];
	for(int i = 1; i <= n; i++)
		arr[i] = i;

    int a, b;
	while(m--) {
		scanf("%d%d", &a, &b);

		for(int i = 0; i <= (b - a) / 2; i++) 
			swap(arr[a + i], arr[b - i]);
		
	}

	for(int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
	

	return 0;
}