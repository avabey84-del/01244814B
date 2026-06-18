# Engineering Note: Compare Two Integers

## 1. Problem Statement
Design a program that accepts two integers from the user and determines their relationship:
1. First > Second
2. First < Second  
3. First == Second
Output must be mutually exclusive - only one message prints.

## 2. Design Decisions
| Component | Choice | Reason |
| --- | --- | --- |
| Input method | `cin >> a >> b` | Fast, standard C++ input. Reads both ints separated by space/enter |
| Control structure
