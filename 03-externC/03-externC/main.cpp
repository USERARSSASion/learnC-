//#define __cplusplus // C++ ������ǰ�涨�������
//#ifdef __cplusplus
// ��������ж��� C++ ����
//#endif // __cplusplus

#include <iostream>
using namespace std;

// �� extern "C" ���εĴ���ᰴ��C�����ķ�ʽȥ����
//extern "C" void func() {
//
//}
//
//extern "C" void func(int V) {
//
//}

// �ȼ���
//extern "C" {
//	void func() {}
//	void func(int V) {}
//}
// ���� extern "C" ��������
// ͬ������һ���� C һ���� C++ ����ִ�У���Ϊ C++ �� name mangling ����
extern "C" void func();
extern "C" void func(int V);

int main() {
	return 0;
}
// ʵ��
void func() {}
void func(int V) {}
