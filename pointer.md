Pointers are also data. Pointer only store addresses (only address of a variable). and it can point to values stores in those address by dereferencing operators `*`.

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




### double, triple pointers

``` C
int main() {

    int x = 3;
    int *p, **dp, ***ddp;
    
    p = &x;
    dp = &p;
    ddp = &dp;
    
    ***ddp = 5;  //chaning root varibale value is possible. x will change to int value 5 in this case.
    
  
    printf("ddp is 1st pointing value %p \n", *ddp);    //pointing address values
    printf("ddp is 2nd pointing value %p \n", **ddp);   //pointing address values
    printf("ddp is 3rd pointing value %d \n", ***ddp);  //pointing final (root) int values
    
    printf("x is storing value %d \n", x);              //print x values changed to 5;

    return 0;
}

```
note: very similar to a linked list.
``` C
{output}
ddp is 1st pointing value 0x7ffffb393cf0 
ddp is 2nd pointing value 0x7ffffb393cec 
ddp is 3rd pointing value 5 
x is storing value 5 
```
