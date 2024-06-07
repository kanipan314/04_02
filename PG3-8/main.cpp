#include <stdio.h>
#include "MinTemplate.h"

using namespace std;

int main() {
	
	MinTemplate<int> Intptr(10, 20);
	MinTemplate<double> Doubleptr(1.2, 3.4);
	MinTemplate<float> Floatptr(3.14f, 2.81f);
	MinTemplate<int> IntDoubleptr(10, 9.2);
	MinTemplate<double> DoubleFloatptr(1.2, 3.4f);
	MinTemplate<float> FloatIntptr(3.14f, 281);


	printf("�ŏ��l : %d\n", Intptr.Min());
	printf("�ŏ��l : %lf\n", Doubleptr.Min());
	printf("�ŏ��l : %f\n", Floatptr.Min());
	printf("�ŏ��l : %d\n", IntDoubleptr.Min());
	printf("�ŏ��l : %lf\n", DoubleFloatptr.Min());
	printf("�ŏ��l : %f\n", FloatIntptr.Min());

	return 0;
}