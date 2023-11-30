//Przykłady instrukcji sterujących w metaprogramowaniu:

/*
 * If-statement
 */

if (condition)
statement1;
else
statement2;



// Class declarations
template<bool C>
class _name { };

class _name<true> {
public:
    static inline void f()
    { statement1; }         // true case
};

class _name<false> {
public:
    static inline void f()
    { statement2; }         // false case
};

// Replacement for 'if/else' statement:
_name<condition>::f();





/*
 * Switch
 */

int i;

switch(i)
{
case value1:
statement1;
break;

case value2:
statement2;
break;

default:
default-statement;
break;
}



// Class declarations
template<int I>
class _name {
public:
    static inline void f()
    { default-statement; }
};

class _name<value1> {
public:
    static inline void f()
    { statement1; }
};

class _name<value2> {
public:
    static inline void f()
    { statement2; }
};

// Replacement for switch(i) statement
_name<I>::f();





/*
 * Do while loop
 */


int i = N;

do {
statement;
} while (--i > 0);

// Class declarations
template<int I>
class _name {
private:
    enum { go = (I-1) != 0 };

public:
    static inline void f()
    {
        statement;
        _name<go ? (I-1) : 0>::f();
    }
};

// Specialization provides base case for
// recursion
class _name<0> {
public:
    static inline void f()
    { }
};

// Equivalent loop code
_name<N>::f();





/*
 * Variables
 */

int count_bits(int N)
{
    int var3 = (N & 0x08) ? 1 : 0;
    int var2 = (N & 0x04) ? 1 : 0;
    int var1 = (N & 0x02) ? 1 : 0;
    int var0 = (N & 0x01) ? 1 : 0;

    return var0 + var1 + var2 + var3;
}

int i = count_bits(13);



template<int N>
class count_bits {
    enum {
        var3 = (N & 0x08) ? 1 : 0,
        var2 = (N & 0x04) ? 1 : 0,
        var1 = (N & 0x02) ? 1 : 0,
        var0 = (N & 0x01) ? 1 : 0
    };

public:
    enum { n_bits = var0 + var1 + var2 + var3 };
};

int i = countBits<13>::n_bits;
