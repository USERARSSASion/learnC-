#include <iostream>
using namespace std;

/*
C++ д��� -- �������
mov dest, src
(mov ��Դ, Ŀ��  ���� dest = src)
[��ֵַ] 
(���������涼�ǵ�ֵַ)
mov word ptr [1128h], 3
prt �̶�д����ʾ(�������)��Ҫ���ڴ��С 
word��2�ֽڣ�dword��4�ֽڣ�qword��8�ֽ�
һ��һ���ڴ��ַ��һ���ֽڣ����ֽڻ���ߵ�ַ�ϲ�
CPU ��С��ģʽ���ձ���С��ģʽ����ַ�Ӹߵ�ַ���͵�ַ����
*/
int main() {
	int a = 10;

	__asm {
		mov eax, a
	}
	return 0;
}