#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    // This checks if there are other arguments than this one 
    if ( argc <= 2 ) {
        return 0; // this line makes sure it will exit the statement printing nothing
    }

    // I used bubble sort for this 
    for ( int k = 1; k < argc - 1; k++ ) {

        int v = 1;
        while (v < argc - k) {

            if (argc < 3){ // check there at at least 2 in the program
            
                return 0;
            }

            if ( strcmp( argv[ v ] , argv[ v + 1 ] ) > 0 ) {

                char *temp = argv[ v ];
                argv[ v ] = argv[ v + 1 ];
                argv[ v + 1 ] = temp;
            }
            v++;
        }
    }

    // print statement
    int i = 1;
    while ( i < argc ) {

        printf( "%s\n" , argv[ i ] );
        i++;
    }
    return 0;
}