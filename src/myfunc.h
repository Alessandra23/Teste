#include <RcppArmadillo.h>
using namespace Rcpp;

NumericVector timesTwo(NumericVector x) {
  return x * 2;
}

