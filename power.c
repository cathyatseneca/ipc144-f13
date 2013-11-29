/*this function returns v raised to the exp*/
double power(double v, int exp){
  int i;
  double rc=1;  //return value
  for(i=0;i<exp;i++){
    rc=rc*v;
  }
  return rc;
}


double power(double v, int exp){
  int i=0;
  double rc=1;
  while(i<exp){
    rc=rc*v;
    i++;
  }
  return rc;
}

double power(double v, int exp){
   double rc = 1;
   if(exp > 0){
     rc=v * power(v,exp-1);
   }
   return rc;
}

