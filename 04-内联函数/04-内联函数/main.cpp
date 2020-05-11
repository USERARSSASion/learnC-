#include <iostream>
using namespace std;
 
/*
使用 inline 修饰函数的声明或者实现，可以使其变成内联函数
建议声明和实现都增加 inline 修饰
编译器会将函数调用直接展开为函数体代码
什么时候使用内联函数：
1.函数体积不大
2.调用比较频繁（不用开辟关闭栈空间）。
注意：
尽量不要内联超过 10 行代码的函数
有些函数即时声明为 inline，也不一定会被编译器内联，比如递归函数
release 模式才能使用
内联函数和宏都能减少函数调用的开销
对比宏，内联函数多了语法检测和函数特性
C++ 可以将值赋给表达式
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

	return 0;
}