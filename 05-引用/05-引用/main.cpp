#include <iostream>
using namespace std;

void swap(int *v1, int *v2) {
	int tep = *v1;
	*v1 = *v2;
	*v2 = tep;
}

void swap1(int &v1, int &v2) {
	int tep = v1;
	v1 = v2;
	v2 = tep;
}

/*
	����:�൱�ڱ����ı����������ü��㣬���Ƕ�������ָ��ı�������
	�ڶ����ʱ��ͱ����ʼ����һ��ָ����ĳ�������Ͳ������ٸı䣬"��һ����"
	�� C �����У�ʹ��ָ����Լ�ӻ�ȡ���޸�ĳ��������ֵ��ָ������޸�ָ��
	�� C++ �У�ʹ�����ÿ����𵽸�ָ�����ƵĹ��ܣ���ָ�����ȫ
*/
int main() {
	int age = 10;

	// ��һ��һ�� age �����ã�refAge �൱���� age �ı���
	int &refAge = age;
	refAge = 20;

	cout << age << endl;

	int a = 10;
	int b = 20;
	swap(&a, &b);
	cout << "swap: " << "a= " << a << ", b= " << b << endl;
	swap(a, b);
	cout << "swap1: " <<  "a= " << a << ", b= " << b << endl;

	return 0;
}