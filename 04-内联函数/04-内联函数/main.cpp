#include <iostream>
using namespace std;
 
/*
ʹ�� inline ���κ�������������ʵ�֣�����ʹ������������
����������ʵ�ֶ����� inline ����
�������Ὣ��������ֱ��չ��Ϊ���������
ʲôʱ��ʹ������������
1.�����������
2.���ñȽ�Ƶ�������ÿ��ٹر�ջ�ռ䣩��
ע�⣺
������Ҫ�������� 10 �д���ĺ���
��Щ������ʱ����Ϊ inline��Ҳ��һ���ᱻ����������������ݹ麯��
release ģʽ����ʹ��
���������ͺ궼�ܼ��ٺ������õĿ���
�ԱȺ꣬�������������﷨���ͺ�������
C++ ���Խ�ֵ�������ʽ
*/
inline void func() {
	cout << "func()" << endl;
}

inline int sum(int v1, int v2) {
	return v1 + v2;
}

#define add(v1, v2) v1 + v2

int main() {
	/*func();
	int c = sum(10, 20);
	cout << c << endl;*/

	int c = add(10, 20);
	cout << c << endl;

	int age = 10;
	const int  *p0 = $age;
	int const *p1 = $age;
	int * const p2 = $age;
	const int * const p3 = $age;
	int const * const p4 = $age;
	// const ���ε������ұߵ�����

	return 0;
}