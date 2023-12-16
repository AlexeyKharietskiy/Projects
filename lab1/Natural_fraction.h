#pragma once
#include "Natural_fraction.h"
#include <iostream>
using namespace std;
class Natural_fraction
{
private:
    int int_part;
    int numerator;
    int denominator;
    int sign = 1;
    int find_sign();
    void check(int& i);
    int NOD(int a, int b);
public:
    Natural_fraction();
    int get_numerator();
    int get_denominator();
    int get_integer_part();
    void set_numerator(int n);
    void set_denominator(int n);
    double make_double();
    void normalise();
    void denormalise();

    Natural_fraction operator +(const Natural_fraction& a);
    Natural_fraction operator -(const Natural_fraction& a);
    Natural_fraction operator *(const Natural_fraction& a);
    Natural_fraction operator /(const Natural_fraction& a);

    Natural_fraction operator +=(const Natural_fraction& a);
    Natural_fraction operator -=(const Natural_fraction& a);
    Natural_fraction operator *=(const Natural_fraction& a);
    Natural_fraction operator /=(const Natural_fraction& a);

    Natural_fraction operator +(const int a);
    Natural_fraction operator -(const int a);
    Natural_fraction operator *(const int a);
    Natural_fraction operator /(const int a);

    Natural_fraction operator +=(const int a);
    Natural_fraction operator -=(const int a);
    Natural_fraction operator *=(const int a);
    Natural_fraction operator /=(const int a);

    Natural_fraction& operator++();
    Natural_fraction operator++(int);
    Natural_fraction& operator--();
    Natural_fraction operator--(int);

    bool operator >(const Natural_fraction& a);
    bool operator <(const Natural_fraction& a);
    bool operator >=(const Natural_fraction& a);
    bool operator <=(const Natural_fraction& a);
    bool operator>(double a);
    bool operator<(double a);
    bool operator>=(double a);
    bool operator<=(double a);

};
