#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

double a, b, c, d;

double fc(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}

int main() {
	cin >> a >> b >> c >> d;
	int cnt = 0; // �ж����������
	for (int i = -100; i < 100; ++ i) {
		double l = i, r = i + 1; 
		if (fc(l) == 0) { // ��˵��жϣ��Ҷ˵� ��ֹ�ظ�����
			printf("%.2lf ", l);
			cnt ++;
		}
		double mid = 0;
		if (fc(l) * fc(r) < 0) {// ���������ڶ����ж�
			mid = (l + r) / 2;
			while(r - l < 0.0001) {
				if (fc(mid) * fc(l) <= 0) {
					r = mid;
				} else {
					l = mid;
				}
			}
			printf("%.2lf ", l);
			cnt ++;
		}
		
		if (cnt == 3) break;	 
	} 
	
	return 0;
}
