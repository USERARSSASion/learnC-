#include <iostream>
using namespace std;

/*
	C��֧�ֺ�������
	��������ͬ����������˳��ͬ���ɹ�������
	��������ͬ���������Ͳ�ͬ���ɹ�������
	��������ͬ������ֵ���Ͳ�ͬ�����ɹ������أ������ԣ�
	release ģʽ���Ż�����
	��������֮IDA
*/
/*
	Ĭ�ϲ���ֻ�ܰ��ҵ����˳��
	Ĭ�ϲ���ֻ�ܷ��ں��������У������� main ����֮����Ҫ�� main ����ǰ������
*/
int sum(int v1 = 1, int v2 = 6) {
	return v1 + v2;
}

void test(int a) {
	cout << "test --" << a << endl;
}

int main() {
	cout << sum(10, 20) << endl;

	// ָ�� test ������ָ�뽫������ֵ�� p��p ���൱�� test ����, ������û�з���ֵ�и� int ���͵Ĳ���
	void(*p)(int) = test;
	p(10);
	return 0;
}