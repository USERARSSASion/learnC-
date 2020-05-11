//#define __cplusplus // C++ 会在最前面定义这个宏
//#ifdef __cplusplus
// 这个可以判断是 C++ 环境
//#endif // __cplusplus

#include <iostream>
using namespace std;

// 被 extern "C" 修饰的代码会按照C语音的方式去编译
//extern "C" void func() {
//
//}
//
//extern "C" void func(int V) {
//
//}

// 等价于
//extern "C" {
//	void func() {}
//	void func(int V) {}
//}
// 声明 extern "C" 加在这里
// 同名函数一个用 C 一个用 C++ 可以执行，因为 C++ 有 name mangling 技术
extern "C" void func();
extern "C" void func(int V);

int main() {
	return 0;
}
// 实现
void func() {}
void func(int V) {}
