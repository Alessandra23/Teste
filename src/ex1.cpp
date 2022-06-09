#include <RcppArmadillo.h>
#include "myfunc.h"
//[[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
List myfunction(NumericVector y){
  NumericVector v;
  v = timesTwo(y);
  return(List::create(_["v"]=v));
}




