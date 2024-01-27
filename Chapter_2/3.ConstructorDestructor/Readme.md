This Example talks about 

1) How to define a simple class
2) How to declare a object of a class
3) when does a scoped objects gets destroyed  : basicaly when constructor is called and destructor is called
4) How to dynamically create an object of a class : using new & delete
5) when to release dynamically created objects of a class : 
4) How to dynamically create array of objects of a class : new [] delete []
5) when to release dynamically created array of objects of a class : 

6) How to use dynamic Memeory allocation in our projects (when to variable scope is in a thread) : 


mypc:./Inheritance
dummy created 1
dummy destroyed 1
scope of a local objects ended

creating dynamic objects
dummy created 2
dummy destroyed 2
dummy created 3
dummy destroyed 3
after deleting dynamically created objects
creating dynamic array objects

dummy created 4
dummy created 5
dummy created 6
dummy created 7
dummy destroyed 7
dummy destroyed 6
dummy destroyed 5
dummy destroyed 4
after deleting dynamically created array objects

creating objects via unique_ptr
dummy created 8
dummy destroyed 8
dynamically created objects released after scope ended