#include "rational.hh"
Rational::Rational(int numerator, int denominator) : num_(numerator)
                                                     , den_(denominator)
{}
std::ostream& operator<<(std::ostream& os, const Rational& r)
{
    return os << r.num_ << "/" << r.den_;
}
Rational Rational::operator+(const Rational& r) const
{ 
    return Rational(num_ * r.den_ + r.num_ * den_, den_ * r.den_);
}
Rational Rational::operator*(const Rational& r) const
{
    return Rational(num_ * r.num_, den_ * r.den_);
}
Rational& Rational::operator*=(const Rational& r)
{
    num_ *= r.num_;
    den_ *= r.den_;
    return *this;
}
