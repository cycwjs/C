//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//常量
//1.字面常量

//#define MAX 100000
//int main()
//{
//	//1.字面常量
//	//3。14
//	//10
//	//'a'
//	//"abcdef"
//
//	//2.const修饰的常变量
//	//const int num = 10;//num就是常变量 - 就有常属性（不能被改变的属性）
//	////num = 20;
//	//int arr1[10] = { 0 };
//	//const int n = 10;//arr表达式需要含有常量值，const还是一个常变量
//	//int arr2[n] = { 0 };//n是变量，这里是不行的
//	//printf("num = %d\n", num);
//
//
//	//3.#define 定义的标识符常量
//	//MAX = 2929299229;//error
//	//int n = MAX;
//	//printf("%d\n", n);
//
//	//4.枚举常量
//	//可以一一列举的常量
//	 
//	return 0;
//}

////性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的常量
//	enum Sex s = MALE;
//	///*MALE = 3;*/ error
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//字符串就是一串字符，用双引号括起来的一串字符

//int main()
//{
//	"dsfwefw";
//	return 0;
//}

int main()
{
	//字符数组 - 数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	// \0是字符串的结束标志
	/*char arr[] = "hello";*/
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0'};
	

	//求一下字符串的长度
	//int len = strlen("abc");//string length
	////在计算字符串长度的时候是不包含\0的
	//printf("%d\n", len);

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	return 0;
}