#include "Matrix.h"

Matrix::Matrix(const std::string &s_iMatrix){
	for(int i = 0; i < s_iMatrix.lenght(); i++) {
		Matrix.parse(ROW, i, s_iMatrix);
	}
}
