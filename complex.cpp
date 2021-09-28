#include "complex.h"
#include <cstdio>
#include <cmath>

complex_number::complex_number ()
{
    this->re_ = 0;
    this->im_ = 0;
}

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

complex_number::~complex_number ()
{
    this->re_ = 0;
    this->im_ = 0;
}

void complex_number::set_re (double re)
{
    this->re_ = re;
}

double complex_number::get_re () const
{
    return this->re_;
}

void complex_number::set_im (double im) 
{
    this->im_ = im;
}

double complex_number::get_im () const
{
    return this->im_;
}

void complex_number::print  () const
{
    printf ("[Re = %lg; Im = %lg; Abs = %lg;]\n", this->re_, this->im_, this->abs () );
}

double complex_number::abs () const
{
    return sqrt(this->re_ * this->re_ + this->im_ * this->im_);
}

complex_number complex_number::operator+ (const complex_number &num) const
{
    return complex_number (this->re_ + num.re_, this->im_ + num.im_);
}

complex_number complex_number::operator+ () const
{
    return *this;
}

complex_number& complex_number::operator+= (const complex_number &num)
{
    this->re_ += num.re_;
    this->im_ += num.im_;
    
    return *this;
}

complex_number complex_number::operator- (const complex_number &num) const
{
    return complex_number (this->re_ - num.re_, this->im_ - num.im_);
}

complex_number complex_number::operator- () const
{
    return *this;
}

complex_number& complex_number::operator-= (const complex_number &num)
{
    this->re_ -= num.re_;
    this->im_ -= num.im_;
    
    return *this;
}

complex_number complex_number::operator* (const complex_number &num) const
{
    return complex_number (this->re_ * num.re_ - this->im_ * num.im_, this->re_ * num.im_ + this->im_ * num.re_);
}

complex_number& complex_number::operator*= (const complex_number &num)
{   
    double im_copy = this->im_;
    double re_copy = this->re_;

    this->re_ = re_copy * num.re_ - im_copy * num.im_;
    this->im_ = re_copy * num.im_ + im_copy * num.re_;
    
    return *this;
}

complex_number& complex_number::operator= (const complex_number &num)
{
    this->re_ = num.re_;
    this->im_ = num.im_;

    return *this;
}

bool complex_number::operator== (const complex_number &num) const
{
    return (this->re_ == num.re_ && this->im_ == num.im_);
}
