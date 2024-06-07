#include <stdio.h>
#include "MinTemplate.h"

using namespace std;

int main() {
	
	MinTemplate<int> Intptr(10, 20);
	MinTemplate<double> Doubleptr(1.2, 3.4);
	MinTemplate<float> Floatptr(3.14f, 2.81f);

	printf("ç≈è¨íl : %d\n", Intptr.Min());
	printf("ç≈è¨íl : %lf\n", Doubleptr.Min());
	printf("ç≈è¨íl : %f\n", Floatptr.Min());

	return 0;
}