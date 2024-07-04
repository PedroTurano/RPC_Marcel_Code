// Include libraries and functions

// functions
double Polrfm(double rpc[20],double l,double b, double h) {
double somatorio;
somatorio=rpc[0]+(rpc[1]*l)+(rpc[2]*b)+(rpc[3]*h)+(rpc[4]*l*b)
        +(rpc[5]*l*h)+(rpc[6]*b*h)+(rpc[7]*l*l)+(rpc[8]*b*b)+(rpc[9]*h*h)
        +(rpc[10]*b*l*h)+(rpc[11]*l*l*l)+(rpc[12]*l*b*b)+(rpc[13]*l*h*h)+(rpc[14]*l*l*b)
        +(rpc[15]*b*b*b)+(rpc[16]*b*h*h)+(rpc[17]*l*l*h)+(rpc[18]*b*b*h)+(rpc[19]*h*h*h);
return somatorio;
};
