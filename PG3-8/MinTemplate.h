#pragma once

#include <iostream>
#include <fstream>
#include <string>

template<typename T1,typename T2>

class MinTemplate
{

public:
	//メンバ関数
	T1 Number1;
	T2 Number2;

	//コンストラクタ　
	MinTemplate(T1 Number1, T2 Number2) :Number1(Number1), Number2(Number2) {};

	//メンバ関数
	T1 Min() {
		if (Number1 < Number2) {
			return static_cast<T1>(Number1);
		}
		else {
			return static_cast<T1>(Number2);
		}
	}

};

