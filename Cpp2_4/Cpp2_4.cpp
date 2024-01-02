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

// epsilon �����ϱ�
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

// �ε� �Ҽ��� ���ǻ���: ���Ѱ��� ���� ���ϰų�, ������ ���� ���ϴ� ��찡 �ִ�.

// epsilon ���� �� ���� ���� �������� epsilon ���� �� ���� ���� ������ ���

//int main(void) {
//	float num0 = 1.0f;
//	float epsilon = FLT_EPSILON;
//	unsigned int num1;
//	memcpy(&num1, &epsilon, sizeof(epsilon));
//	cout.precision(64);
//	cout << "num1 = " << num1 << endl; 
//
//	// epsilon => // 0011,0100,0000,0000,0000,0000,0000,0000 -> 1.0(2) * 10^-23(2)
//	// epsilon���� �� ���� �� = 1.0(2) * 10^-24(2) = 0011,0011,1000,0000,0000,0000,0000,0000
//	unsigned int tmp = 0b00110011100000000000000000000000;
//	float num2;
//	memcpy(&num2, &tmp, sizeof(tmp));
//
//	cout << "num0 = " << num0 << endl; // 1.0
//	cout << "num2 = " << num2 << endl; // epsilon���� �� ���� ��
//	cout << "num0 + num2 = " << num0 + num2 << endl;
//}

// ū ���� �ٰ� 1�� �������� 1�� ������ ���

//// [���������� 1�� �������� ���]
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

//// [1�� ������ ���]
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

// ������ ������ �ϴ� ���� �ε� �Ҽ��� ����� ����ϸ� �ȵǰ�, ���� �Ҽ��� ����� ����ϴ���, ������ ������ ������ �ִ� ���̺귯���� ����ϰų�.
// ������ ����Ѵ�.

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
//	cout << "num1 = " << num1 << endl; // nan -> floatŸ���� Ư���� ��Ʈ�� ��쿡�� �ٸ��� ó���Ѵ�.
//	// ������ ��Ʈ�� �������ְ�, ������ ��Ʈ�� �ϳ��� ���� ������ nan(not a number)�� ǥ���Ѵ�.
//
//	float num3;
//	unsigned int num4 = 0b01111111011111111111111111111111; // float Ÿ���� �ִ밪�� �̳��� �ȴ�.
//	memcpy(&num3, &num4, sizeof(num4));
//	cout << "num3 = " << num3 << endl;
//
//	float num5;
//	unsigned int num6 = 0b01111111100000000000000000000000; // �������� ��� ��Ʈ�� �����ְ�, �������� ��� ��Ʈ�� ���� �ִ� ��쵵 Ư�����̽��̴�.
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

// FLT_MIN = 0000,0000,1000,0000,0000,0000,0000,0000 // �������� �ּڰ� -> 10^-126(2)
// FLT_TRUE_MIN = 0000,0000,0000,0000,0000,0000,0000,0001 // ������ ��Ʈ�� ��� �������� -> 10^-126(2) * 10^-23(2) = 10^-149(2)

// �ε� �Ҽ��� ��Ʈ�� �ϴ� �ʹ� ������� �н�����