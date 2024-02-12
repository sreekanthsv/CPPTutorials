1) How to create a class which cannot be created by out side funcions or not trusted/friend functions
  : make all constructors private & declare friend functions
2) How to stop inheriting a class ..? : make all constructors private
3) Only derived class can inherit ..?  : make all constructors protected
4) Object or instance can be created by another class only but not by a functions ..? ( no inheritance)
  : make all constructors private & declare friend classes
5) create object's instance on heap only  
6) destroy object by friends only : destructor is private
7) destroy object by friends classes : firend class, private destructor etc..
8) only inherited objects can destroy : No friends, protected destructor