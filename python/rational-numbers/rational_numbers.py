from __future__ import division

class Rational(object):

    def __init__(self, numer, denom):
        a = numer
        b = denom

        while b != 0:
            a, b = b, a % b

        gcd = a
        
        self.numer = numer // gcd
        self.denom = denom // gcd

    def __eq__(self, other):
        return self.numer == other.numer and self.denom == other.denom

    def __repr__(self):
        return '{}/{}'.format(self.numer, self.denom)

    def __add__(self, other):
        new_numer = self.numer * other.denom + other.numer * self.denom
        new_denom = self.denom * other.denom
        
        return Rational(new_numer, new_denom)

    def __sub__(self, other):
        new_numer = self.numer * other.denom - other.numer * self.denom
        new_denom = self.denom * other.denom
        
        return Rational(new_numer, new_denom)

    def __mul__(self, other):
        new_numer = self.numer * other.numer
        new_denom = self.denom * other.denom
        return Rational(new_numer, new_denom)

    def __truediv__(self, other):
        new_numer = self.numer * other.denom
        new_denom = self.denom * other.numer

        return Rational(new_numer, new_denom)

    def __abs__(self):
        return Rational(abs(self.numer), abs(self.denom))

    def __pow__(self, power):
        if power > 0:
            return Rational(self.numer ** power, self.denom ** power)
        elif power < 0:
            return Rational(self.denom ** power, self.numer ** power)
        else:
            return Rational(1, 1)

    def __rpow__(self, base):
        return base ** (self.numer / self.denom)
    
