#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//ʵ�ּ��������-���ú���ָ������
//void menu()  ���Ե����鷳 ÿ��һ�����ܶ�Ҫ��һ��case���  ���߳�
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�\n");
//			break;
//		case 1:
//			printf("����������ֵ��\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n",add(i,j));
//			break;
//		case 2:
//			printf("����������ֵ��\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", sub(i, j));
//			break;
//		case 3:
//			printf("����������ֵ��\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", mul(i, j));
//			break;
//		case 4:
//			printf("����������ֵ��\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", Div(i, j));
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//�Ż�-ʹ�ú���ָ��
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
//	printf("����������ֵ\n");
//	scanf("%d%d", &i, &j);
//	printf("%d\n", p(i, j));
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�\n");
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
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//�Ż�-ʹ�ú���ָ������
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������ֵ\n");
//			scanf("%d%d", &i, &j);
//			printf("%d\n", p[input](i, j));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while(input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//����(����ָ�룬����ָ�룬����ָ������)
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//����ָ��
//	int(*p)(int, int) ;//����ָ��
//	int(*p[4])(int, int) = {0};//����ָ������
//	int(*(*pp)[4])(int, int) = &p;//����ָ��-ָ���������ÿ��Ԫ�ض�Ϊ����ָ��
//	return 0;
//}
//�ص�����
//void print(char* str)
//{
//	printf("%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("haha ");//���Ϊhaha hehe
//	p("hehe");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
//ð������  (���������ֻ�������Σ��ܾ���)
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
//qsort��ʹ�úʹ���  qsort��������������ԱȽϵ����ֻ��ַ�
//1.void*(���ַ�ָ��)-�ɽ����������͵ĵ�ַ
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pb = &a;//���о��棬��int*��char*�����Ͳ�����
//	void*p = &a;//�޾��棬void*�ɽ�����������ָ��
//	//*p = 1;//���У���Ϊvoid*ʹ�������֪�����ʼ����ֽڣ�����void*ָ�벻���޸ģ����ɱ�ǿ������ת��Ȼ���޸�
//	*(int*)p = 1;
//	printf("%d\n", a);//1
//	return 0;
//}
//qsortʹ�� qsort(��Ԫ�ص�ַ�����ַ������ȣ��ַ�����ȣ����ֽڣ����ȽϺ���������ֵ����Ϊ���Σ�����0��С��0�����0��)
typedef struct stu
{
	char name[10];
	int age;
}stu;
int main()
{
	int arr[10] = { 9,8,7,5,6,4,3,1,2,0 };//����
	int sz = sizeof(arr) / sizeof(arr[0]);
	float arr1[10] = { 9.0,8.0,7.0,5.0,4.0,3.0,2.0,1.0,0.0 };//������

	stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };//�ṹ������

}