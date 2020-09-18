#include "Matrix.h"

public static void main(char* argv[], int argn){
	std::ifstream matrixFile;
	matrixFile.open("input");
	std::string s_iMatrix { matrixFile.read() };

	Matrix iMatrix(const std::string &s_iMatrix);
}
