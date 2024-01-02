// scanf

#pragma warning(disable: 4996)
#include <cstdio>

//int main() {
//	int num;
//	char ch;
//	int n = scanf("%d %c", &num, &ch); // scanf함수는 입력에 성공이 된 변수의 개수를 리턴한다.
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
//	// printf 함수에서 %d와 %i 형식지정자는 100% 동일한 놈이지만,
//	// scanf 함수에서 %d와 %i 형식지정자는 다르다.
//	// %i를 사용하는 경우 입력을 0x10, 010 과 같이 16진수, 8진수로 입력을 받을 수 있다.
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
//	// f0는 float타입인데 형식지정자를 %lf로 했기 때문에 에러가 발생한다. %lf -> %f로 수정해야 한다.
//	scanf("%lf", &f0);
//	printf("%f\n", f0);
//}

//int main()
//{
//	int num;
//	scanf("%x", &num); // 16진수로 입력을 받는다.
//	printf("%d\n", num);
//
//	scanf("%o", &num); // 8진수로 입력을 받는다.
//	printf("%d\n", num);
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("1, %c\n", ch);
//
//	//fflush(stdin); // 플랫폼마다 되는 경우가 있고 안되는 경우가 있기 때문에 지양하는게 좋음
//
//	//ch = getchar(); // 문자 하나를 입력받는다. 이놈을 통해서 입력버퍼를 비울 수 있다.
//	int tmp;
//	while ((tmp = getchar()) != '\n' && tmp != EOF); // 해당 방법으로 입력버퍼를 비울 수 있음
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