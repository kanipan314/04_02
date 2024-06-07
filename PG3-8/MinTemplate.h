#pragma once

#include <iostream>
#include <fstream>
#include <string>

template<typename T>

class MinTemplate
{

public:
	//�����o�֐�
	T Number1;
	T Number2;

	//�R���X�g���N�^�@
	MinTemplate(T Number1, T Number2) :Number1(Number1), Number2(Number2) {};

	//�����o�֐�
	T Min() {
		if (Number1 < Number2) {
			return static_cast<T1>(Number1);
		}
		else {
			return static_cast<T1>(Number2);
		}
	}

};

