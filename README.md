# DS-
In Q3 problem, you should develop a stack class similar to that provided in the C++ STL. You can using
arrays as an underlying data structure,
● Your stack class should be template. 
● The stack class should have the following public interface:
○ stack() – default constructor.
○ stack(type value, int intial_size)constructs a stack having
‘initial_size’ elements whose values are ‘value’.
○ ~stack() – a destructor to clear the stack and leave no memory leaks.
○ type& top() – returns the top element by reference. 
○ void pop() – removes the top element and print it. 
○ void push(type value) – adds an element to the top of the stack.
○ int size() – returns the number of elements in the stack.
●  main function to test all the above.
__________________________________________________________________________________________
In Q4 problem, you must use C++ stack class.
Given an input string of brackets ‘(‘ and ‘)’, square brackets ‘‘ and ‘+’, curly brackets ‘,‘ and ‘-’, and multiple line comment token ‘/’ and ‘/’, 
check if this string is valid or not.
A string is considered valid if and only if:
For each opened bracket, there should be a closing bracket of the same type. 
Each closing bracket should close the lastly opened bracket. 
Multiple line comment tokens consist of two characters, and any text between them should be ignored. 
However, they are treated the same way as brackets regarding the rules described above.
([{}])(){}[]{[]} – valid.
({)} – invalid. ({/)}]]]]]]}/}) – valid. 
({/[][[]]]]]}) – invalid, the comment is not closed. 
[{/*******/}] – valid.

Write a main function to test.
__________________________________________________________________________________________
In Q5 problem, you need to develop a queue class.
Priority Queue is an extension of queue with following properties.
1. Every item has a priority associated with it.
2. An element with high priority is dequeued before an element with low priority.
3. If two elements have the same priority, they are served according to their order in the
queue.
