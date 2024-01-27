https://www.geeksforgeeks.org/difference-c-structures-c-structures/

C Structures

C++ Structures

Only data members are allowed, it cannot have member functions.	Can hold both: member functions and data members.
Cannot have static members.	Can have static members.
Cannot have a constructor inside a structure.	Constructor creation is allowed.
Direct Initialization of data members is not possible.	Direct Initialization of data members is possible.
Writing the ‘struct’ keyword is necessary to declare structure-type variables.	Writing the ‘struct’ keyword is not necessary to declare structure-type variables.
Do not have access modifiers.	Supports access modifiers.
Only pointers to structs are allowed.	Can have both pointers and references to the struct.
Sizeof operator will generate 0  for an empty structure.	Sizeof operator will generate 1 for an empty structure.
Data Hiding is not possible.	Data Hiding is possible.