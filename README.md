# Description
Given two matrix A and B, the program should output C=AB. The size of A is (n,m) and the size of B is (m, r).  
# Input
The are (1 + n + m) lines  
In first line, there are there number n,m,r. 1 <= n <= 100, 1 <= m <= 100, 1 <= r <= 100  
In the follow n lines, there are m numbers in each line.  
In the last m lines, there are r numbers in each line.  
# Output
Output C=AB  
# Sample Input
>3 3 3  
1 1 1  
1 1 1  
1 1 1  
1 1 1  
1 1 1  
1 1 1  
# Sample Output
>3 3 3  
3 3 3  
3 3 3  
# Hint
>Matrix multiplication  
Strassen algorithm  
目前最快的矩阵乘法算法： Coppersmith–Winograd algorithm  
