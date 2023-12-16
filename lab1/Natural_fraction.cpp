#include "fraction.h"
#include <iostream>
using namespace std;

Natural_fraction::Natural_fraction()
{
    int_part = 0;
    numerator = 0;
    denominator = 1;
}

int Natural_fraction::get_numerator() {
    normalise();
    return numerator;
}
int Natural_fraction::get_denominator() {
    normalise();
    return denominator;
}
int Natural_fraction::get_integer_part() {
    normalise();
    return int_part;
}
void Natural_fraction::set_numerator(int n)
{
    numerator = n;
}
void Natural_fraction::set_denominator(int n)
{
    if (n == 0) return;
    denominator = n;
    normalise();
    denormalise();
}
double Natural_fraction::make_double() {
    return numerator * 1. / denominator;
}

int Natural_fraction::NOD(int a, int b)
{
    while (a > 0 && b > 0)

        if (a > b)
            a %= b;

        else
            b %= a;

    return a + b;
}
void Natural_fraction::normalise() {
    sign = find_sign();
    if (sign < 0) {
        denominator = abs(denominator);
        numerator = abs(numerator);
        int_part = abs(int_part);
    }
    while (denominator <= numerator) {
        int_part++;
        numerator -= denominator;
    }
    int nod = NOD(numerator, denominator);
    while (nod != 1) {
        denominator /= nod;
        numerator /= nod;
        nod = NOD(numerator, denominator);
    }
    int_part *= sign;
    numerator *= sign;
}
int Natural_fraction::find_sign() {
    if (denominator * numerator < 0)
    {
        sign = -1;
    }
    if (int_part < 0 && numerator>0)
    {
        sign = -1;
    }
    return sign;
}
void Natural_fraction::denormalise() {
    numerator += int_part * denominator;
    int_part = 0;
}
void Natural_fraction::check(int& i)
{
    while (true)
    {
        cin >> i;
        if (cin.fail() || cin.peek() != '\n')
        {
            cout << "Input mistake!\n";
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Try again: ";
        }
        else break;
    }
}

Natural_fraction Natural_fraction::operator +( const Natural_fraction& a) {
    Natural_fraction result;
    result.denominator = a.denominator * denominator;
    result.numerator = (a.numerator * denominator) + (numerator * a.denominator);
    return result;
}
Natural_fraction Natural_fraction::operator -(const Natural_fraction& a) {
    Natural_fraction result;
    result.denominator = a.denominator * denominator;
    result.numerator = (numerator * a.denominator) - (a.numerator * denominator);
    return result;
}
Natural_fraction Natural_fraction::operator *(const Natural_fraction& a) {
    Natural_fraction result;
    result.denominator = a.denominator * denominator;
    result.numerator = a.numerator * numerator;
    return result;
}
Natural_fraction Natural_fraction::operator /(const Natural_fraction& a) {
    Natural_fraction result;
    result.denominator = denominator * a.numerator;
    result.numerator = numerator * a.denominator;
    return result;
}

Natural_fraction Natural_fraction::operator +=(const Natural_fraction& a) {
    *this = *this + a;
    return *this;
}
Natural_fraction Natural_fraction::operator -=(const Natural_fraction& a) {
    *this = *this - a;
    return *this;
}
Natural_fraction Natural_fraction::operator *=(const Natural_fraction& a) {
    *this = *this * a;
    return *this;
}
Natural_fraction Natural_fraction::operator /=(const Natural_fraction& a) {
    *this = *this / a;
    return *this;
}

Natural_fraction& Natural_fraction::operator++() {
    numerator += denominator;
    return *this;
}
Natural_fraction Natural_fraction::operator++(int) {
    Natural_fraction temp = *this;
    ++(*this);
    return temp;
}
Natural_fraction& Natural_fraction::operator--() {
    numerator -= denominator;
    return *this;
}
Natural_fraction Natural_fraction::operator--(int) {
    Natural_fraction temp = *this;
    --(*this);
    return temp;
}

bool Natural_fraction::operator>(const Natural_fraction& a) {
    return (numerator * a.denominator) > (a.numerator * denominator);
}
bool Natural_fraction::operator>=(const Natural_fraction& a) {
    return (numerator * a.denominator) >= (a.numerator * denominator);
}
bool Natural_fraction::operator<(const Natural_fraction& a) {
    return (numerator * a.denominator) < (a.numerator * denominator);
}
bool Natural_fraction::operator<=(const Natural_fraction& a) {
    return (numerator * a.denominator) <= (a.numerator * denominator);
}

bool Natural_fraction::operator>(double a) {
    return make_double() > a;
}
bool Natural_fraction::operator<(double a) {
    return make_double() < a;
}
bool Natural_fraction::operator>=(double a) {
    return make_double() >= a;
}
bool Natural_fraction::operator<=(double a) {
    return make_double() <= a;
}

Natural_fraction Natural_fraction::operator +(const int a) {
    Natural_fraction result;
    result.denominator = 1;
    result.numerator = a;
    result += *this;
    return result;
}
Natural_fraction Natural_fraction::operator -(const int a) {
    Natural_fraction result;
    numerator += int_part * denominator;
    int_part = 0;
    result.denominator = denominator;
    result.numerator = numerator - a * denominator;
    return result;
}
Natural_fraction Natural_fraction::operator *(const int a) {
    Natural_fraction result;
    result.denominator = 1;
    result.numerator = a;
    result *= *this;
    return result;
}
Natural_fraction Natural_fraction::operator /(const int a) {
    Natural_fraction result;
    numerator += int_part * denominator;
    int_part = 0;
    result.denominator = a * denominator;
    result.numerator = numerator;
    return result;
}
Natural_fraction Natural_fraction::operator +=(const int a) {
    Natural_fraction result;
    result.denominator = 1;
    result.numerator = a;
    *this += result;
    return *this;
}
Natural_fraction Natural_fraction::operator -=(const int a) {
    Natural_fraction result;
    result.denominator = 1;
    result.numerator = a;
    *this -= result;
    return *this;
}
Natural_fraction Natural_fraction::operator *=(const int a) {
    Natural_fraction result;
    result.denominator = 1;
    result.numerator = a;
    *this *= result;
    return *this;
}
Natural_fraction Natural_fraction::operator /=(const int a) {
    Natural_fraction result;
    result.denominator = 1;
    result.numerator = a;
    *this /= result;
    return *this;
}
