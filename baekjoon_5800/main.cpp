#include <cstdio>
#include <algorithm>

int sn[100], c, t, m;
int main() {
	scanf_s("%d", &t);
	for(int i = 1; i <= t; i++){
		m = 0;
		scanf_s("%d", &c);
		for (int j = 0; j < c; j++) scanf_s("%d", &sn[j]);
		std::sort(sn, sn + c);
		for (int j = c - 1; j > 0; j--) if (m <= sn[j] - sn[j - 1]) m = sn[j]-sn[j-1];
		printf("Class %d\n", i);
		printf("Max %d, Min %d, Largest gap %d\n", sn[c-1], sn[0], m);
	}
	return 0;
}