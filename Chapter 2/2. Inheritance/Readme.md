
1) How to Inherit a Object onto a class
2) How scoped base and derived objects are created and deleted
3) How to Dynamically create base and derived objects and delete them
4) Why is a base class object's destructor declared virtual
5) Why is base class inherited and Virtual
6) How to Dynamically create base and derived objects and delete them in our products ( within the scope of a thread)

7) why we would prefer to use base class pointer always ..?

Observation 1:

When you run the code as it is

mypc:./Inheritance
BaseClass created
BaseClass created
Derived created
Derived destroyed
BaseClass destroyed
BaseClass destroyed
scoped objects released

BaseClass created
BaseClass created
Derived created
Derived destroyed
BaseClass destroyed
BaseClass destroyed
dynamically created objects released

BaseClass created
BaseClass created
Derived created
Derived destroyed
BaseClass destroyed
BaseClass destroyed
dynamically created objects released after scope ended


=================================================
Observation 2:

When you remove virtual keyword from Baseclass virtual ~BaseClass();

mypc:./Inheritance
BaseClass created
BaseClass created
Derived created
Derived destroyed
BaseClass destroyed
BaseClass destroyed
scoped objects released

BaseClass created
BaseClass created
Derived created
BaseClass destroyed
BaseClass destroyed
dynamically created objects released

BaseClass created
BaseClass created
Derived created
BaseClass destroyed
BaseClass destroyed
dynamically created objects released after scope ended


Why do you see the difference...?

