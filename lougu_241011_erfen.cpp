#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int x, y, m;
	cin >> x >> y >> m;
	double l = 0, r = 300, mid;  // ����������ж��֣������õİٷ��� 
	double err = 0.001;
	while (r - l > err) {
		mid = (l + r) / 2; 
		double w = x;
		for (int i = 0; i < m; ++ i) {
			w = w - y + mid/100 * w;
		}
		if (w < err) {
			l = mid;  //Ǯ�����ˣ�˵������С�� 
		} else {
			r = mid;  // Ǯû���꣬˵�����ʴ��� 
		}
	}
	printf("%0.1lf", l);
	
	return 0;
}
