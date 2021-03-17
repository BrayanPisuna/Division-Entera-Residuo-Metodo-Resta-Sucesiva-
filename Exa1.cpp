#include <iostream>
using namespace std;

int division(int dividendo,int divisor);

int main(int argc, char *argv[]) {
 int n1,n2;
 cout<<"ingrese N1"<<endl;
 cin>>n1;
 cout<<"ingrese N2"<<endl;
 cin>>n2;
 
 division(n1,n2);
 return 0;
}

int division (int dividendo,int divisor) {
 
  int cociente;
  int resto;
 if ( dividendo > 0 && divisor > 0 )
    {
        cociente = 0;
        resto = dividendo;

        while ( resto >= divisor )
        {
            resto -= divisor;
            cociente++;
        }

		
        printf( "\n  dividendo =  %d divisor =  %d division entera = %d ( Resto = %d )", dividendo, divisor, cociente, resto );
    }
    else{
	
        printf( "\n   ERROR: Ambos n%cmeros deben ser mayores que cero.", 163 );

}
}
