#include "complex.h"
#include <cstdio>

#define __TEST_OPERATOR(op, a_re, a_im, b_re, b_im, c_re, c_im)\
    do \
    {\
        complex_number a(a_re, a_im);\
        complex_number b(b_re, b_im);\
        complex_number c_exp (c_re, c_im);\
        complex_number c(a op b);\
        if (!(c_exp == c) )\
            printf ("__TEST_OPERATOR ("#op", "#a_re", "#a_im", "#b_re", "#b_im", "#c_re", "#c_im") FAILED: "\
                    "RESULT IS {%lg, %lg} BUT {%lg, %lg} WAS EXPECTED;\n", \
                    c.get_re (), c.get_im (), (double) c_re, (double) c_im);\
        else\
            printf ("__TEST_OPERATOR ("#op", "#a_re", "#a_im", "#b_re", "#b_im", "#c_re", "#c_im") OK;\n");\
    }\
    while (0)


int main ()
{
    __TEST_OPERATOR (+, 1, 2, 3, 4, 4, 6); 
    __TEST_OPERATOR (+=, 1, 2, 3, 4, 4, 6);
    __TEST_OPERATOR (-, 1, 2, 3, 4, -2, -2);
    __TEST_OPERATOR (-=, 1, 2, 3, 4, -2, -2);
    __TEST_OPERATOR (*, 1, 2, 3, 4, -5, 10);
    __TEST_OPERATOR (*=, 1, 2, 3, 4, -5, 10);
    __TEST_OPERATOR (=, 1, 2, 3, 4, 3, 4);

    return 0;
}
