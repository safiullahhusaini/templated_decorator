#include <iostream>
#include "decoratee.h"
#include "decorator.h"

int main() 
{   

    decoratee_A A;
    decorator <decoratee_A>decorated_A{A};
    decorated_A.work();

    decoratee_B B;
    decorator <decoratee_B>decorated_B{B};
    decorated_B.work();
    
}
