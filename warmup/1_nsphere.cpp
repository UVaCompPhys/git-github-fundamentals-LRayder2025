#include <stdio.h>
#include <math.h>
#include <iostream>

double volume ( double r, int n ) {
  double V, combo;
	combo = ( (n/2.0) + 1 );
	V = ( ( pow( M_PI, (n/2.0) ) /  tgamma( combo )  ) * pow(r, n) );
	return ( V );
}

int main () {
	
	double rad;
	int dim;

	rad = 1;

	for( dim=0; dim<51; dim++ ) {	
		printf("%d, %lf, %lf\n", dim, rad, log(volume( rad, dim )) ) ;
	}

}
