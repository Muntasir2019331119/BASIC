/*
Masking is a process in which a given bit pattern is transformed into another bit pattern by means of a logical
bitwise operation. The original bit pattern is one of the operands in the bitwise operation. The second
operand, called the mask, is a specially selected bit pattern that brings about the desired transformation

a=Ox6db7

b = a | Oxff ;

a = 0110 1101 1011 0111
mask = 0000 0000 1111 1111
b = 0110 1101 1111 1111
= Ox6dff

*/