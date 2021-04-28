Pointers are also data.

* (asterisk) has three meaning in C language.
* , This unary operator is to,
- to assign a pointer variable type.
- As a dereference operator.
- multiplication

``` C
int *p;     //pointer variable type assignment.
int x = 2;

// pointern is like an arrow.
// p alone will return address that its pointing to.
// *p will return the values inside the memory address its pointing at.
*p = &x;

printf("%p \n", p);    // will print  memory address that p is pointing at.
printf("%d \n", *p);   // will print  values inside memory address that p is point at.

```

note: unintilized pointer varibale will be pointing at random address inside memory. This will become a problem in later time.
