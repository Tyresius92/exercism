from math import sqrt, exp, cos, sin

class ComplexNumber(object):
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary

    def __eq__(self, other):
        return self.real == other.real and self.imaginary == other.imaginary

    def __add__(self, other):
        r = self.real + other.real
        i = self.imaginary + other.imaginary

        return ComplexNumber(r, i)

    def __mul__(self, other):
        r = self.real * other.real - self.imaginary * other.imaginary
        i = self.imaginary * other.real + self.real * other.imaginary

        return ComplexNumber(r, i)

    def __sub__(self, other):
        r = self.real - other.real
        i = self.imaginary - other.imaginary

        return ComplexNumber(r, i)

    def __truediv__(self, other):
        a = self.real
        b = self.imaginary
        c = other.real
        d = other.imaginary

        r = (a * c + b * d) / (c * c + d * d)
        i = (b * c - a * d) / (c * c + d * d)

        return ComplexNumber(r, i)

    def __abs__(self):
        return sqrt(self.real**2 + self.imaginary**2)

    def conjugate(self):
        r = self.real
        i = -self.imaginary

        return ComplexNumber(r, i)

    def exp(self):
        ea = exp(self.real)

        eb = ComplexNumber(cos(self.imaginary), sin(self.imaginary))

        return ComplexNumber(ea, 0) * eb
