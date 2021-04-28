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

### Pointing with mulitple pointers

```C

int main() {
    //pointing one memory address with multiple pointers.

    int x, *p, *q;

    x = 3;
    p = &x;
    q = &x;

    // q = p; //this will also let q pointer to stroe address that p is storing.

    *p = 2;
    *q = 5;

    printf("%p::%p \n", p, q);
    printf("x = %d \n", x);
    printf("p = %d \n", *p);
    
    return 0;

}

```

#### Pointer

```C
 int x, *p;
 x = 3;
 p = &x;
 
 int y = *p; // using dereferencing operator and assign it to another Ivalue.
 
 *p = 3; //using dereferencing operator to changed the values stored inside the memory address that it's pointing.
 
 //1.
 printf("%p \n", p);
 
 //2.
 printf("%d \n", *p);
 
 
```

- only store memory address as value.
- access the value insides the address stored by dereferencing operator `*`.
1. `p` Show pointer stored values which is an address value of the varaible `x` that it's pointing.  (p store x address as values)
2. `*p` using dereference operator to show the values inside memory address that it's pointing at.   (*p access variable `x` values by memory address that is pointing (storing))
- To know the memory address of pointer, use a double pointer.
