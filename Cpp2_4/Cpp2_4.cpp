#include <iostream>
#include <cfloat>

using namespace std;

//int main(void) {
//	float num0 = 1.0f;
//	float num1 = 0.0f;
//	for (int i = 0; i < 10; i++)
//		num1 += 0.1f;
//	if (num0 == num1)
//		cout << "Equal 0" << endl;
//
//	if (fabsf(num0 - num1) <= FLT_EPSILON)
//		cout << "Equal 1" << endl;
//}

// epsilon 유도하기
//int main() {
//	float num0 = 1.0f; // 1.0(2) * 10^0(2) -> 0b00111111100000000000000000000000
//	float num1;
//	unsigned int num2 = 0b00111111100000000000000000000001;
//	memcpy(&num1, &num2, sizeof(num2));
//	float result;
//	result = num1 - num0;
//	cout.precision(64);
//	cout << "result  = " << result << endl;
//	cout << "epsilon = " << FLT_EPSILON << endl;
//}

// 부동 소수점 주의사항: 더한것을 인지 못하거나, 뺀것을 인지 못하는 경우가 있다.

// epsilon 보다 더 작은 수를 더했을때 epsilon 보다 더 작은 수가 씹히는 경우

//int main(void) {
//	float num0 = 1.0f;
//	float epsilon = FLT_EPSILON;
//	unsigned int num1;
//	memcpy(&num1, &epsilon, sizeof(epsilon));
//	cout.precision(64);
//	cout << "num1 = " << num1 << endl; 
//
//	// epsilon => // 0011,0100,0000,0000,0000,0000,0000,0000 -> 1.0(2) * 10^-23(2)
//	// epsilon보다 더 작은 놈 = 1.0(2) * 10^-24(2) = 0011,0011,1000,0000,0000,0000,0000,0000
//	unsigned int tmp = 0b00110011100000000000000000000000;
//	float num2;
//	memcpy(&num2, &tmp, sizeof(tmp));
//
//	cout << "num0 = " << num0 << endl; // 1.0
//	cout << "num2 = " << num2 << endl; // epsilon보다 더 작은 놈
//	cout << "num0 + num2 = " << num0 + num2 << endl;
//}

// 큰 수에 다가 1을 더했을때 1이 씹히는 경우

//// [정상적으로 1이 더해지는 경우]
//int main() {
//	float num0 = 1.0f;
//
//	unsigned int num1 = 0b01001011000000000000000000000000; // 1.0(2) * 10^23(2)
//	float num2;
//	memcpy(&num2, &num1, sizeof(num1));
//
//	cout.precision(64);
//	cout << "num0 = " << num0 << endl; // 1.0
//	cout << "num2 = " << num2 << endl;
//	cout << "num2 + num0 = " << num2 + num0 << endl;
//}

//// [1이 씹히는 경우]
//int main() {
//	float num0 = 1.0f;
//	// 1.0(2) * 10^24(2) = 0100,1011,1000,0000,0000,0000,0000,0000
//	unsigned int num1 = 0b01001011100000000000000000000000;
//	float num2;
//	memcpy(&num2, &num1, sizeof(num1));
//	cout.precision(64);
//	cout << "num0 = " << num0 << endl;
//	cout << "num2 = " << num2 << endl;
//	cout << "num2 + num0 = " << num2 + num0 << endl;
//
//	// 1.0(2) * 10^0(2) + 1.0(2) * 10^24(2) = 1.0(2) + 1000000000000000000000000.0(2) = 1000000000000000000000001.0(2) * 10^0(2)
//	// 1000000000000000000000001.0(2) * 10^0(2) = 1.000000000000000000000001(2) * 10^24(2)
//	// 01001011100000000000000000000000
//}

// 정밀한 연산을 하는 경우는 부동 소수점 방식을 사용하면 안되고, 고정 소수점 방식을 사용하던가, 정밀한 연산을 지원해 주는 라이브러리를 사용하거나.
// 정수를 사용한다.

//int main() {
//	float num0 = FLT_MAX;
//
//	cout.precision(64);
//	cout << num0 << endl;
//}

//int main() {
//	float num0 = FLT_MAX;
//	cout.precision(64);
//	cout << "num0 = " << num0 << endl;
//
//	float num1;
//	unsigned int num2 = 0b01111111111111111111111111111111;
//	memcpy(&num1, &num2, sizeof(num2));
//	cout << "num1 = " << num1 << endl; // nan -> float타입은 특별한 비트인 경우에는 다르게 처리한다.
//	// 지수부 비트가 다켜져있고, 가수부 비트가 하나라도 켜져 있으면 nan(not a number)를 표시한다.
//
//	float num3;
//	unsigned int num4 = 0b01111111011111111111111111111111; // float 타입은 최대값은 이놈이 된다.
//	memcpy(&num3, &num4, sizeof(num4));
//	cout << "num3 = " << num3 << endl;
//
//	float num5;
//	unsigned int num6 = 0b01111111100000000000000000000000; // 지수부의 모든 비트가 켜져있고, 가수부의 모든 비트가 꺼져 있는 경우도 특별케이스이다.
//	memcpy(&num5, &num6, sizeof(num6));
//	cout << "num4 = " << num5 << endl; // inf
//}

int main() {
	float fltMin = FLT_MIN;
	unsigned int ifltMin;
	memcpy(&ifltMin, &fltMin, sizeof(fltMin));

	float fltTrueMin = FLT_TRUE_MIN;
	unsigned int ifltTrueMin;
	memcpy(&ifltTrueMin, &fltTrueMin, sizeof(fltTrueMin));

	cout << ifltMin << endl;
	cout << ifltTrueMin << endl;

	cout << fltMin << endl;
	cout << fltTrueMin << endl;
}

// FLT_MIN = 0000,0000,1000,0000,0000,0000,0000,0000 // 지수부의 최솟값 -> 10^-126(2)
// FLT_TRUE_MIN = 0000,0000,0000,0000,0000,0000,0000,0001 // 지수부 비트가 모두 꺼져있음 -> 10^-126(2) * 10^-23(2) = 10^-149(2)

// 부동 소수점 파트는 일단 너무 어려워서 패스하자