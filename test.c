#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//实现计算机功能-不用函数指针数组
//void menu()  可以但很麻烦 每加一个功能都要加一个case语句  很冗长
//{
//	printf("***********************************\n");
//	printf("**0.exit                    1.add**\n");
//	printf("**2.sub                     3.mul**\n");
//	printf("**               4.Div           **\n");
//}
//int add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void test()
//{
//	int i = 0;
//	int j = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出\n");
//			break;
//		case 1:
//			printf("请输入两个值：\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n",add(i,j));
//			break;
//		case 2:
//			printf("请输入两个值：\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", sub(i, j));
//			break;
//		case 3:
//			printf("请输入两个值：\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", mul(i, j));
//			break;
//		case 4:
//			printf("请输入两个值：\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", Div(i, j));
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//优化-使用函数指针
//void menu()
//{
//	printf("***********************************\n");
//	printf("**0.exit                    1.add**\n");
//	printf("**2.sub                     3.mul**\n");
//	printf("**               4.Div           **\n");
//}
//void xor(int (*p)(int,int))
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入两个值\n");
//	scanf("%d%d", &i, &j);
//	printf("%d\n", p(i, j));
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出\n");
//			break;
//		case 1:
//			xor (add);
//			break;
//		case 2:
//			xor (sub);
//			break;
//		case 3:
//			xor (mul);
//			break;
//		case 4:
//			xor (Div);
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//优化-使用函数指针数组
//void menu()
//{
//	printf("***********************************\n");
//	printf("**0.exit                    1.add**\n");
//	printf("**2.sub                     3.mul**\n");
//	printf("**               4.Div           **\n");
//}
//void test()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int(*p[])(int, int) = { 0,add,sub,mul,Div };
//	do
//	{		
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个值\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", p[input](i, j));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while(input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//归总(数组指针，函数指针，函数指针数组)
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//数组指针
//	int(*p)(int, int) ;//函数指针
//	int(*p[4])(int, int) = {0};//函数指针数组
//	int(*(*pp)[4])(int, int) = &p;//数组指针-指向的数组中每个元素都为函数指针
//	return 0;
//}
//回调函数
//void print(char* str)
//{
//	printf("%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("haha ");//结果为haha hehe
//	p("hehe");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
//冒泡排序  (不过排序的只能是整形，很局限)
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,5,6,4,3,1,2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//0 1 2 3 4 5 6 7 8 9
//	}
//	return 0;
//}
//qsort的使用和创建  qsort可以排序任意可以比较的数字或字符
//1.void*(空字符指针)-可接收任意类型的地址
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pb = &a;//会有警告，从int*到char*的类型不兼容
//	void*p = &a;//无警告，void*可接收任意类型指针
//	//*p = 1;//不行，因为void*使计算机不知道访问几个字节，所以void*指针不可修改，但可被强制类型转化然后修改
//	*(int*)p = 1;
//	printf("%d\n", a);//1
//	return 0;
//}
//qsort使用 qsort(首元素地址，，字符串长度，字符串宽度（即字节），比较函数（返回值必须为整形，大于0，小于0或等于0）)
typedef struct stu
{
	char name[10];
	int age;
}stu;
int main()
{
	int arr[10] = { 9,8,7,5,6,4,3,1,2,0 };//整形
	int sz = sizeof(arr) / sizeof(arr[0]);
	float arr1[10] = { 9.0,8.0,7.0,5.0,4.0,3.0,2.0,1.0,0.0 };//浮点型

	stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };//结构体类型

}