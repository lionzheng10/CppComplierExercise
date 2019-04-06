#include <iostream>
#include "roll.h"
using namespace std;

int main() {
    vector <int> result = Roll( 2 );
    for ( unsigned int i = 0; i < result.size(); i++ ) {	
        cout << result[i] << " ";
    }
    cout << endl;
}

