#include <iostream>
using namespace std;

/*
C++ 写汇编 -- 内联汇编
mov dest, src
(mov 来源, 目标  类似 dest = src)
[地址值] 
(中括号里面都是地址值)
mov word ptr [1128h], 3
prt 固定写法表示(修饰左边)需要的内存大小 
word是2字节，dword是4字节，qword是8字节
一般一个内存地址是一个字节，多字节会向高地址合并
CPU 大小端模式（普遍是小端模式，地址从高地址往低地址读）
*/
int main() {
	int a = 10;

	__asm {
		mov eax, a
	}
	return 0;
}