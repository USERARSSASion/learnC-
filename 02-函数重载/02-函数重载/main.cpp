#include <iostream>
using namespace std;

/*
	C不支持函数重载
	函数名相同，参数数量顺序不同，可构成重载
	函数名相同，参数类型不同，可构成重载
	函数名相同，返回值类型不同，不可构成重载（二义性）
	release 模式会优化代码
	逆向神器之IDA
*/
/*
	默认参数只能按右到左的顺序
	默认参数只能放在函数生命中（函数在 main 函数之后定义要在 main 函数前声明）
*/
int sum(int v1 = 1, int v2 = 6) {
	return v1 + v2;
}

void test(int a) {
	cout << "test --" << a << endl;
}

int main() {
	cout << sum(10, 20) << endl;

	// 指向 test 函数的指针将函数赋值给 p，p 就相当于 test 函数, 下面是没有返回值有个 int 类型的参数
	void(*p)(int) = test;
	p(10);
	return 0;
}