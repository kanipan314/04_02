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


	printf("最小値 : %d\n", Intptr.Min());
	printf("最小値 : %lf\n", Doubleptr.Min());
	printf("最小値 : %f\n", Floatptr.Min());
	printf("最小値 : %d\n", IntDoubleptr.Min());
	printf("最小値 : %lf\n", DoubleFloatptr.Min());
	printf("最小値 : %f\n", FloatIntptr.Min());

	return 0;
}