Name:- Abhay Dubey
Roll No :- 1131
PRN :- BE25CE1131
Batch :- C
Department :- CE

—------------------------------------------------------------------------------------------------


Introduction to the Fibonacci sequence
Definition: The Fibonacci numbers {Fn}\{F_n\} satisfy F0=0F_0=0, F1=1F_1=1, and Fn=Fn−1+Fn−2F_n=F_{n-1}+F_{n-2} for n≥2n\ge 2. The sequence begins 0, 1, 1, 2, 3, 5, 8, 13…
Core idea: A linear recurrence with constant coefficients and minimal initial conditions generates unbounded growth with a stable ratio.
Closed form: Using the characteristic equation, one gets Binet’s formula
Fn=ϕn−ψn5,ϕ=1+52, ψ=1−52.F_n=\frac{\phi^n-\psi^n}{\sqrt{5}},\quad \phi=\frac{1+\sqrt{5}}{2},\ \psi=\frac{1-\sqrt{5}}{2}.
Computational note: The sequence can be computed by iteration, recursion, memoization, or matrix/fast-doubling methods, each with different time and space trade-offs.
Main theory and properties
Recurrence and growth
Linear recurrence:  Fn=Fn−1+Fn−2 \,F_n=F_{n-1}+F_{n-2}\, defines a second-order homogeneous linear recurrence.
Asymptotics: Fn≈ϕn5F_n \approx \frac{\phi^n}{\sqrt{5}}, so growth is exponential in nn with base ϕ\phi.
Ratio convergence: Fn+1Fn→ϕ\frac{F_{n+1}}{F_n}\to \phi.
Identities and structure
Addition identity: Fm+n=FmFn+1+Fm−1FnF_{m+n}=F_mF_{n+1}+F_{m-1}F_n.
Cassini’s identity: Fn+1Fn−1−Fn2=(−1)nF_{n+1}F_{n-1}-F_n^2 = (-1)^n.
GCD property: gcd⁡(Fm,Fn)=Fgcd⁡(m,n)\gcd(F_m,F_n)=F_{\gcd(m,n)}.
Parity: Every third Fibonacci number is even; pattern repeats every 3.
Matrix form:
[Fn+1Fn]=[1110]n[10].\begin{bmatrix}F_{n+1}\\F_n\end{bmatrix} = \begin{bmatrix}1&1\\1&0\end{bmatrix}^n \begin{bmatrix}1\\0\end{bmatrix}.
These properties drive efficient computation (matrix exponentiation, fast doubling) and proofs by induction or linear algebra.
Applications and “uses”
Computer science:
Algorithm design: Fibonacci heaps (amortized efficiencies), Zeckendorf representation, divide-and-conquer recurrences.
Search/optimization: Fibonacci search for unimodal functions; stride selection patterns.
Data structures: Balanced tree analyses and potential functions often involve Fibonacci bounds.
Mathematics:
Number theory: Modular periodicity (Pisano periods), relations to continued fractions and Diophantine equations.
Combinatorics: Counting tilings, lattice paths, and binary strings without consecutive ones.
Modeling and art/nature:
Phyllotaxis: Spiral counts in seed heads and cones often follow consecutive Fibonacci numbers; ratios approximate ϕ\phi.
Design: Grids and layouts use Fibonacci proportions; careful use avoids numerology.
Finance (caution):
Traders use “Fibonacci retracements,” but these are heuristic tools, not grounded predictive laws. Treat as visualization aids, not guarantees.
Many introductory resources frame the sequence starting at 0 and 1 and show loop and recursion implementations that illustrate these applications.
Working in C: multiple approaches
Below are clean, production-minded implementations with comments, complexity notes, and edge handling.
Iterative series printing (up to n terms)



CODE
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;   
    } else if (n == 1) {
        return 1;   
    } else {
       int ans= fibonacci(n - 1) + fibonacci(n - 2); 
        return ans;
    }
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
        printf("\n");
    }   
    return 0;
}



Implementation 

Enter the number of terms: 3
Fibonacci series: 0 1 1 

Enter the number of terms: 9
Fibonacci series: 0 1 1 2 3 5 8 13 21 

Enter the number of terms: 14
Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 





