/*

Algorithm - a process or set of rules to be followed to solve a problem
Runtime - the runtime of an Algorithm is the time it takes to execute

Most algorithms transform input objects in output objects

Given 2 algorithms that do the same thing, we need a method to evaluate performance
  - Two methods of measuring performance
    - Empirical analysis
    - Mathematical analysis (formal)

Empirical Analysis:
  - Implement both algorithms and run experiment with the same input
  - Obvious approach, but not an optimal approach

  - This type of analysis is not great for large data sets
  - Not cost efficient
    - Algorithm needs to be implemeneted
      - Costs time and money
  - Dependent on many variables
    - Platform/hardware
    - Compilers/linkers

Mathematical Analysis:
  - Determine factors that determine the runtime of an algorithm
    - Input (size)
    - Quality of code
      - Nested for loops
      - Proper use of data structures
  - Runtime depends on input
    - Algorithm can be defined as a function of the input
    - Takes into account all possible inputs
    - T(n) = c * n^2, where c is a constant (Algo 1)
    - T(n) = c * 5n, where c is a constant (Algo 2)
  - Very cost efficient
  - Not dependent on many variables
    - Platform/hardware
    - Compilers/linkers

Categorizing Algorithm Runtimes
  - 1 - O(1) - constant runtime
    - Programs with instructions that are executed only once, few at most
  - log N - O(log N) - logarithmic runtime
    - As N grows, the program slows down slightly
      - Takes input and is cut into series of smaller problems, cutting size by a constant at each step
  - N - O(N) - linear runtime
    - If N is a million, so is the runtime.
  - N log N - O(N log N)
    - when N doubles, the runtime slightly more than doubles
      - Alrogithms break problems into smaller problems, then combines results
  - N^2 - O(N^2) - quadratic runtime
    - When N doubles, runtime increases by an order of 4
  - N^3 - O(N^3) - cubic runtime
    - When N doubles, runtime (T(n)) increases by an order of 8

  Big O Notation
    - Allows us to ignore all of the constants and lower-order term
    - Formal definition: Given two functions f(n) and g(n), f(n) = O(g(n)) if
      there exists constants c and n.not such that f(n) <= cg(n) for all n > n.not
        - Saying an algorithm is O(f(n)) is saying that in the worst case, the runtime of that algorithm to be about f(n)
        - Big O provides a growth rate for an algorithm's upper bound (worst case)
    - Essentially, this bounds the error we get when we ignore constants and lower-order terms, and lets us analyze
      functions in regards to their asymptotic upper bounds for sufficiently large values of n.
    - In other words, Big O Notation is a mathematical way of describing how a function (running time of an algorithm)
      generally behaves in relation to the input size.

  Which algorithm is better?
    - f(n) = 5x^3 + 10x^2 + 100x + 512
    - g(n) = 100x^3 + 1024x^2 + 512x + 256

    - With Big O notation:
      - f(n) = x^3 - worst case scenario = cubic runtime
      - g(n) = x^3 - worst case scenario = cubic runtime

      - f(n) = O(g(n)) because x^3 <= x^3

  Tricks for analyzing runtime
    - Just a few instructions or a numerous instructions that only execute once, f(n) is usually O(1)
    - A problem that breaks n into smaller pieces at each step by a constant factor, f(n) is usually O(log n)
    - A problem with a single loop iterating over n, then f(n) is often O(n)
    - A problem where the big problem is broken into smaller pieces at each step, solved separately, and then combined, then f(n) is often O(nlogn)
    - Double nested loops iterating over n (all pairs), then f(n) is usually O(n^2)
    - Triple nested for loops O(n^3)
    - A brute force solution that tries every possible combination of data to find a solution, then f(n) is often exponential

  Other types of Notation
    - Little O Notation
      - Strict upper bound
    - Big omega
      - Lower bound
    - Little Omega
      - Strict lower bound




*/
