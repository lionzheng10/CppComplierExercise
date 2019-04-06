#include <string>
#include <cstdlib>
#include "strnum.h"

long ToLong( const std::string & s ) {
    char * p;
    long result = std::strtol( s.c_str(), & p, 10 );
    if ( * p ) {
        throw "conversion to long failed";
    }
    return result;
}

double ToDouble( const std::string & s ) {
    char * p;
    double result = std::strtod( s.c_str(), & p );
    if ( * p ) {
        throw "conversion to double failed";
    }
    return result;
}


