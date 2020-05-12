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
	引用:相当于变量的别名，对引用计算，就是对引用所指向的变量计算
	在定义的时候就必须初始化，一旦指向了某个变量就不可以再改变，"从一而终"
	在 C 语音中，使用指针可以间接获取、修改某个变量的值，指针可以修改指向
	在 C++ 中，使用引用可以起到跟指针类似的功能，比指针更安全
*/
int main() {
	int age = 10;

	// 定一了一个 age 的引用，refAge 相当于是 age 的别名
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