// Include libraries and functions

// functions
double Polrfm(double C,double L,double B, double H) {
double somatorio;
somatorio= (L*(B+B*H)+(B+L+1)*(1+H)+(L*L+B*B+H*H)*(1+B+H+L))*C
};

original = 19 somas e 45 multiplicaçoes 64 passos
marcel= 19 somas e 27 multiplicaçoes    46 passos
Pedro1= 13 somas 8 multiplicaçoes       21 passos
Pedro2= 10 somas 8 multiplicações       18 passos

Pedro1=(1+ L*(1+B+H+B*H)+B*(1+H)+H+(L*L+B*B+H*H)*(1+B+H+L))*C

C0 + C1L + C4LB + C5LH + C10BLH + C2B +C6BH +C3H + 
C7LL + C14LLB + C17LLH + C11LLL +
C8BB + C15BBB + C18BBH + C12BBL +
C9HH + C16HHB + C19HHH + C13HHL
  

  0-1-2-3-4-5-6-7-8-9-10-11-12-13-14-15-16-17-18-19

Pedro2=(L*(B+B*H)+(B+L+1)*(1+H)+(L*L+B*B+H*H)*(1+B+H+L))*C

C4LB + C10BLH + C2B + C6BH + C1L + C5LH + C0 + C3H +
C7LL + C14LLB + C17LLH + C11LLL +
C8BB + C15BBB + C18BBH + C12BBL +
C9HH + C16HHB + C19HHH + C13HHL
