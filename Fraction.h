#include <iostream>             // for ostream, istream
using namespace std;

class Fraction
{
   friend Fraction operator+(const Fraction& f1, const Fraction& f2);
   friend ostream& operator<<(ostream& s, const Fraction& f);

public:
   Fraction();                  // Set numerator = 0, denominator = 1.
   Fraction(int n, int d=1);    // constructor with parameters
                                //  acts as conversion constructor
   Fraction operator++();
   Fraction operator++(int);
   Fraction& operator+=(const Fraction&RHS);
   // standard input/output routines
   void Input();                // input a fraction from keyboard.
   void Show() const;           // Display a fraction on screen

   // accessors
   int GetNumerator() const;
   int GetDenominator() const;

   // mutator
   bool SetValue(int n, int d=1); // set the fraction's value through
parameters

   double Evaluate() const;     // Return the decimal value of a
fraction

private:
   int numerator;               // may be any integer
   int denominator;             // should always be positive
};

