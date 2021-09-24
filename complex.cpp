#include "complex.h"

complex_number::complex_number (double re, double im)
{
    this->re_ = re;
    this->im_ = im;
}

complex_number::complex_number (const complex_number &num)
{
    this->re_ = num.re_;
    this->im_ = num.im_;
}

void   complex_number::set_re (double re)
{
    this->re_ = re;
}

double complex_number::get_re ()
{
    return this->re_;
}

void   complex_number::set_im (double im)
{
    this->im_ = im;
}

double complex_number::get_im ()
{
    return this->im_;
}

void   complex_number::print  ()
{
    printf ("[Re = %lg; Im = %lg; Abs = %lg;]\n", this->re_, this->im_, this->abs () );
}

double complex_number::abs ()
{
    return sqrt(this->re_ * this->re_ + this->im_ * this->im_);
}

const complex_number operator+ (const complex_number &left, const complex_number &right)
{
    return complex_number (left.re_ + right.re_, left.im_ + right.im_);
}

const complex_number operator+= (complex_number &left, const complex_number &right)
{
    left.re_ += right.re_;
    left.im_ += right.im_;
    
    return complex_number (left.re_ + right.re_, left.im_ + right.im_);
}

const complex_number operator- (const complex_number &left, const complex_number &right)
{
    return complex_number (left.re_ - right.re_, left.im_ - right.im_);
}

const complex_number operator-= (complex_number &left, const complex_number &right)
{
    left.re_ -= right.re_;
    left.im_ -= right.im_;
    
    return complex_number (left.re_ - right.re_, left.im_ - right.im_);
}

const complex_number operator* (const complex_number &left, const complex_number &right)
{
    return complex_number (left.re_ * right.re_ - left.im_ * right.im_, left.re_ * right.im_ + left.im_ * right.re_);
}

const complex_number operator*= (complex_number &left, const complex_number &right)
{
    left = left * right;
    
    return left;
}
