// rational.hh
#pragma once

#include <ostream>

class Rational
{
    public:
        Rational(int numerator = 0, int denominator = 1);

        // FIXME

        int numerator() const
        {
            return num_;
        }

        int denominator() const
        {
            return den_;
        }
        friend std::ostream& operator<<(std::ostream& os, const Rational& r);
        Rational operator+(const Rational& r) const;
        Rational operator*(const Rational& r) const;
        Rational& operator*=(const Rational& r);

    private:
            int num_;
            int den_;
};

// FIXME
