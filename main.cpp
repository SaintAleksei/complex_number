#include "complex.h"

int main ()
{
    complex_number a(1,2);
    complex_number b(3,4);

    printf ("a: ");

    a.print ();

    printf ("b: ");

    b.print ();

    complex_number c (a + b);

    printf ("c = a + b: ");

    c.print ();
    
    c = a - b;

    printf ("c = a - b: ");
    
    c.print ();
    
    c = a * b;

    printf ("c = a * b: ");

    c.print ();
    
    return 0;
}
