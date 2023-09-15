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

