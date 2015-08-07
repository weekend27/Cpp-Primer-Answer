###C++ Notes

####chapter01

1. problem:fatal error: iostream.h: No such file or directory

   solution:You should use #include <iostream>, not iostream.h; the .h form is very old and deprecated since years.

2. Comment pairs /* */ do not nest

3. using namespace std;

####chapter02

1. a char is the same size as a single machine byte.

2. do not use char in arithmetic expressions,computations using char are especially problematic because 
char is signed on some machines and unsigned on others.If you need a tiny integer, explicitly specify either
signed char or unsigned char.

3. If we assign an out-of-range value to an object of unsigned type, the result is the remainder of the value modulo the number of values the target type can hold.

4. If we assign an out-of-range value to an object of signed type, the result is undefined.

5. signed values are automatically converted to unsigned, and they depend on the particular machine

6. uninitialized variables cause run-time problems

7. Variables must be defined exactly once but can be declared many times.

8. C++ is a statically typed language, which means that types are checked at compile time.

9. define variables where you first use them

10. a reference is just another name for an already existing object

11. the key differences between pointers and references

definition:

1). the pointer is "points to" any other type.

2). the reference is "another name" of an object.

key difference:

1). a reference is another name of an already existing object. a pointer is an object in its own right.

2). Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference to refer to a different object. a pointer can be assigned and copied.

3). a reference always get the object to which the reference was initially bound. a single pointer can point to several different objects over its lifetime.

4). a reference must be initialized. a pointer need not be initialized at the time it is defined.

12. to share a const object among multiple files, you must define the variable as extern

####chapter03

1. Like pointers (§ 2.3.2, p. 52), iterators give us indirect access to an object.

2. auto b = v.begin(), e = v.end(); // b and e have the same type

3. If the container is empty, begin	returns the same iterator as the one returned by end.

4. Most of those iterators do not have the < operator.so use != instead of < in the for loop. By routinely using iterators and !=,
we don’t have to worry about the precise type of container we’re processing.

5. The arrow operator combines dereference and member access into a single operation. That is, it->mem is a synonym for (* it).mem.

6. If you don’t know exactly how many elements you need, use a vector.

7. We can initialize such arraysC++ Primer, Fifth Edition
from a string literal (§ 2.1.3, p. 39). When we use this form of initialization, it is
important to remember that string literals end with a null character. That null
character is copied into the array along with the characters in the literal

8. It can be easier to understand array declarations by starting with the array’s
name and reading them from the inside out.

9. Although C++ supports C-style strings, they should not be used by C++
programs. C-style strings are a surprisingly rich source of bugs and are the
root cause of many security problems. They’re also harder to use!

10. Modern C++ programs should use vectors and iterators instead of built-in
arrays and pointers, and use strings rather than C-style array-based
character strings.

11. To use a multidimensional array in a range for, the loop control variable for
all but the innermost array must be references.

12. When you define a pointer to a multidimensional array, remember that a
multidimensional array is really an array of arrays.

13. 
int *ip[4];    // array of pointers to int

int (*ip)[4];  // pointer to an array of four ints

14. size_t是标准C库中定义的，应为unsigned int，在64位系统中为 long unsigned int。一个基本的无符号整数的C / C + +类型， 它是sizeof操作符返回的结果类型， 该类型的大小是选择。因此，它可以存储在理论上是可能的任何类型的数组的最大大小。 换句话说，一个指针可以被安全地放进为size_t类型（一个例外是类的函数指针，但是这是一个特殊的情况下）。 size_t类型通常用于循环、数组索引、大小的存储和地址运算。 虽然size_t可以存储一个指针，它的目的是更好地使用另一个unsinged整数类型uintptr_t形式。 在某些情况下，使用size_t类型是更为有效，比习惯性使用无符号类型的程序会更安全。
size_t是在基于无符号整数memsize类型的C / C + +的标准库中定义的。 C语言中，此类型位于头文件stddef.h中，而在C++中，则位于cstddef中。

####chapter04

####chapter05

####chapter06

####chapter07