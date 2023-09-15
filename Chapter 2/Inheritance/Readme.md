Observation 1:

When you run the code as it is

mypc:./Inheritance
BaseClass created
BaseClass created
Derived created
BaseClass created
BaseClass created
Derived created
Derived destroyed
BaseClass destroyed
BaseClass destroyed
Derived destroyed
BaseClass destroyed
BaseClass destroyed


=================================================
Observation 2:

When you remove virtual keyword from Baseclass virtual ~BaseClass();

mypc:./Inheritance
BaseClass created
BaseClass created
Derived created
BaseClass created
BaseClass created
Derived created
BaseClass destroyed
BaseClass destroyed
Derived destroyed
BaseClass destroyed
BaseClass destroyed



Why do you see the difference...?

