https://www.geeksforgeeks.org/difference-c-structures-c-structures/

What is the difference between C Structures & C++ Structures


   C Structures                                      C++ Structures
Only data members are allowed,                      Can hold both: member functions and data members.
it cannot have member functions.	
 
Cannot have static members.	                        Can have static members.

Cannot have a constructor                           Constructor creation is allowed.
inside a structure.	

Direct Initialization of data members               Direct Initialization of data members is possible.
is not possible.	

Writing the ‘struct’ keyword is necessary           Writing the ‘struct’ keyword is not necessary to 
to declare structure-type variables.	            declare structure-type variables.

Do not have access modifiers.	                    Supports access modifiers.

Only pointers to structs are allowed.	            Can have both pointers and references to
                                                    the struct.

Sizeof operator will generate 0                     Sizeof operator will generate 1 
for an empty structure.	                            for an empty structure.

Data Hiding is not possible.	                    Data Hiding is possible.