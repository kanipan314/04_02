#pragma once

#include <iostream>
#include <fstream>
#include <string>

template<typename T>

class MinTemplate
{

public:
	//メンバ関数
	T Number1;
	T Number2;

	//コンストラクタ　
	MinTemplate(T Number1, T Number2) :Number1(Number1), Number2(Number2) {};

	//メンバ関数
	T Min() {
		if (Number1 < Number2) {
			return static_cast<T1>(Number1);
		}
		else {
			return static_cast<T1>(Number2);
		}
	}

};

