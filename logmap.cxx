//Nadine de Macedo, Astrid Seidel

#include <iostream>
using namespace std;

int main(){
  
  int N, Nprint;
  double x, xold, r, rmax, rmin, dr;
  
  rmin = 0.0;
  rmax = 4.0;
  dr = 0.01;
  N = 100;
  Nprint = 20;


  for(double r = rmin; r < rmax; r += dr){
      xold = 0.5;
      for(int i=1; i<Nprint ;i++){
	x = r*xold*(1.0-xold);
	xold = x;
      }
      
      
      for(int i=Nprint; i<N; i++){
	x = r*xold*(1.0-xold);
	xold = x;
	cout << r << "\t " << x << endl;
      }
      r += dr;
  }
   
  return 0;
}