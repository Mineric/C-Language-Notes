Pointers are also data. Pointer only store addresses. and it can point to values stores in those address by dereferencing operators.

`*`(asterisk) has three meaning in C language.
`*` , This unary operator is to,
- to assign a pointer variable type.
- As a dereference operator.
- multiplication

``` C
int *p;     //pointer variable type assignment.
int *q;
int x = 2;

// pointern is like an arrow and stroing the address value in its box.
// p alone will return address that its pointing to.
// *p will return the values inside the memory address its pointing at.
p = &x;
*q = *p;   // * here as dereference operator.

printf("%p \n", p);    // will print  address value that p is stroing at. which is also pointing at.
printf("%d \n", *p);   // will print  values inside memory address that p is stroing or point atpoint at.

```

note: pointer store addres value inside its slot.
note: unintilized pointer varibale will be pointing at random address inside memory. This will become a problem in later time.
