#include <stdio.h>
#include <stdlib.h>

int* Catenate(int a[], int b[], int len1, int len2);

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int *a = (int*)malloc(n * sizeof(int));
	int *b = (int*)malloc(m * sizeof(int));
	for(int i = 0; i < n; ++i) scanf("%d", a + i);
	for(int i = 0; i < m; ++i) scanf("%d", b + i);
	int *c = Catenate(a, b, n, m);
	free(a);
	free(b);
	n += m;
	for(int i = 0; i < n; ++i)
		printf("%d\r\n", c[i]);
	free(c);
	return 0;
}
