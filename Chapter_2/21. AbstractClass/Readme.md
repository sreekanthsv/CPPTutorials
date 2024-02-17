1) what is runtime polymorphism ..?
     adding virtual to implementation functions
2) what is a pure virtual function ..?
    is a function viratual which is declared to a value =0 

3) what is a Abstract class ..?
    it is  a class which has atleast one pure virtual functions
    
4) what is a interface ..?
    it is a class on which all the functions are pure virtual functions


5) can you create a instance/object of Abstract class..?
    No, Since at least one function is undefined

6) can you create a instance/object of Interface class..?
    No, Since all the function are undefined
 
 7) can you create a pointer of type Abstract class..?
    yes, 

 7) can you create a pointer of type Interface class..?
    yes, 

 8) why you need a  pointer of type Abstract/Interface class..?
    Generic Code :
    identify the actual derived object and call the corresponding 
    function/Implementations in it

