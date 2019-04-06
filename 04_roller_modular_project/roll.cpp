#include <cstdlib>
#include <ctime>
#include <vector>
#include "roll.h"

std::vector <int> Roll( unsigned int n ) {
    std::srand( std::time( 0 ) );
    std::vector <int> rolls;
    while( n-- ) {
        rolls.push_back( 1 + rand() % 6 );
    }
    return rolls;
}
