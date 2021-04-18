# Types

### Float

In python we have only one type for decimal values. 

``` python 
float
```

But in C language

We have two type, single-precision floating point number (32 bit) and double-precision floating point number (64 bit). only different in binary representation.

``` C
float  
double 

```

#### It is usually recommended to use double in order to attain higher precisions and accuracy.

double (%lf)
float (%f)

``` C 

float x = 0.5;
double y = 0.5;

scanf("%f \n", x);
scanf("%lf \n", y);

```


#### char is an int based. So, it is possible to assign an integer value in char but its not recommended to use it.


### Boolean
C language has no boolean type values as True and Flase as in Python;

Bool are represented with numberical values such as (float and int) and  pointer etc.

non-zero values represent true and zero represent false.

``` console
while(1)  => while(True)
while(0)  => while(False)
```
