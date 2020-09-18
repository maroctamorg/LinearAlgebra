#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <fstream.h>
#include <vector.h>

enum Intpr {
	ROW, 0
	COLUMN, 1
}

class Matrix {
        public:
                Matrix(const std::string &s_iMatrix);

                static public parse(const std::string &s_iMatrix, intpr intp, int index);

        protected:
                ~Matrix();

                static LinearSolve(const double &resVector[]);
}
