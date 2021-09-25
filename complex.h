#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

class complex_number
{
private:
    double re_;
    double im_;

public:
    complex_number ();
    complex_number (double re, double im);
    complex_number (const complex_number &num);
    ~complex_number ();

    void set_re (double re);
    void set_im (double im);
    
    double get_re () const;
    double get_im () const;

    double abs () const;

    void print () const;

    complex_number operator+ (const complex_number& num) const;
    complex_number operator+ () const;
    complex_number operator+= (const complex_number& num);
    complex_number operator- (const complex_number& num) const;
    complex_number operator- () const;
    complex_number operator-= (const complex_number& num);
    complex_number operator* (const complex_number& num) const;
    complex_number operator*= (const complex_number& num);
    complex_number operator= (const complex_number& num);
    bool operator== (const complex_number& left) const;
};
