// scanf

#pragma warning(disable: 4996)
#include <cstdio>

//int main() {
//	int num;
//	char ch;
//	int n = scanf("%d %c", &num, &ch); // scanf�Լ��� �Է¿� ������ �� ������ ������ �����Ѵ�.
//	printf("%d\n", num);
//	printf("%d\n", n);
//}

//int main() {
//	int num;
//	if (scanf("%d", &num) == 1)
//		printf("%d\n", num);
//}

//int main() {
//	int num0, num1, num2;
//	scanf("%d + %d = %d", &num0, &num1, &num2);
//	printf("%d, %d, %d\n", num0, num1, num2);
//}

//int main() {
//	int num0;
//	// printf �Լ����� %d�� %i ���������ڴ� 100% ������ ��������,
//	// scanf �Լ����� %d�� %i ���������ڴ� �ٸ���.
//	// %i�� ����ϴ� ��� �Է��� 0x10, 010 �� ���� 16����, 8������ �Է��� ���� �� �ִ�.
//	scanf("%i", &num0);
//	printf("%i\n", num0);
//
//}

//int main() {
//	char ch;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	printf("%i\n", ch);
//}

//int main()
//{
//	float f0;
//	double d0, d1;
//	scanf("%lf %lf %f", &d0, &d1, &f0);
//	printf("%lf %lf %f", d0, d1, f0);
//}

//int main()
//{
//	float f0;
//	// f0�� floatŸ���ε� ���������ڸ� %lf�� �߱� ������ ������ �߻��Ѵ�. %lf -> %f�� �����ؾ� �Ѵ�.
//	scanf("%lf", &f0);
//	printf("%f\n", f0);
//}

//int main()
//{
//	int num;
//	scanf("%x", &num); // 16������ �Է��� �޴´�.
//	printf("%d\n", num);
//
//	scanf("%o", &num); // 8������ �Է��� �޴´�.
//	printf("%d\n", num);
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("1, %c\n", ch);
//
//	//fflush(stdin); // �÷������� �Ǵ� ��찡 �ְ� �ȵǴ� ��찡 �ֱ� ������ �����ϴ°� ����
//
//	//ch = getchar(); // ���� �ϳ��� �Է¹޴´�. �̳��� ���ؼ� �Է¹��۸� ��� �� �ִ�.
//	int tmp;
//	while ((tmp = getchar()) != '\n' && tmp != EOF); // �ش� ������� �Է¹��۸� ��� �� ����
//
//	scanf("%c", &ch);
//	printf("2, %c\n", ch);
//}

//int main()
//{
//	freopen("input.txt", "r", stdin);
//
//	int num;
//	scanf("%d", &num);
//	printf("%d\n", num);
//}