# Description:
given a b and p, output (ab) mod p (2<=a<=100, 0<=b<=1000000000, 3<=p<=10000)  
# Input
3 3 10  
# Output
7  
# Hint
Exponentiating by squaring  
快速幂  
(a * b) % p == (a % p * b % p) % p  
