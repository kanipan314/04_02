#pragma once

#include <iostream>
#include <fstream>
#include <string>

template<typename T1,typename T2>

class MinTemplate
{

public:
	//�����o�֐�
	T1 Number1;
	T2 Number2;

	//�R���X�g���N�^�@
	MinTemplate(T1 Number1, T2 Number2) :Number1(Number1), Number2(Number2) {};

	//�����o�֐�
	T1 Min() {
		if (Number1 < Number2) {
			return static_cast<T1>(Number1);
		}
		else {
			return static_cast<T1>(Number2);
		}
	}

};

