/*
* ������ �־��� ������ �� ����, ����� ���� ū ���� ���ؼ� N���� �����
*/
#include <iostream>
using namespace std;

int solve(int N) {
	for (int i = 2; i * i <= N; i++) {
		if (N % i == 0) return N / i;
	}

	return 1;
}
int main() {
	int N;
	cin >> N;

	cout << N - solve(N) << endl;

	return 0;
}

