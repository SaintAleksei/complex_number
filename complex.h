#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class complex_number
{
private:
    double re_;
    double im_;

public:
    complex_number  (double re, double im);
    complex_number  (const complex_number &num);

    void set_re   (double re);
    void set_im   (double im);
    
    double get_re ();
    double get_im ();

    double abs ();

    void print ();

    friend const complex_number operator+  (const complex_number& left, const complex_number& right); 
    friend const complex_number operator+= (      complex_number& left, const complex_number& right);
    friend const complex_number operator-  (const complex_number& left, const complex_number& right); 
    friend const complex_number operator-= (      complex_number& left, const complex_number& right);
    friend const complex_number operator*  (const complex_number& left, const complex_number& right); 
    friend const complex_number operator*= (      complex_number& left, const complex_number& right);
};
