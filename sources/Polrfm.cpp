// Include libraries and functions
#include <stdio.h>
// functions
double Polrfm(double c,double l,double b, double h) {
  double somatorio;
  somatorio=c+(c*l)+(c*b)+(c*h)+(c*l*b)+(c*l*h)+(c*b*h)+(c*l*l)+(c*b*b)+(c*h*h)+(c*b*l*h)+(c*l*l*l)+(c*l*b*b)+(c*l*h*h)+(c*l*l*b)+(c*b*b*b)+(c*b*h*h)+(c*l*l*h)+(c*b*b*h)+(c*h*h*h);
  return somatorio;
};
