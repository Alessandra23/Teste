#include <RcppArmadillo.h>
#include <vector>
using namespace Rcpp;
// using namespace arma;

// [[Rcpp::export]]
List LR(NumericVector y_, // vector passed in r
        NumericVector x_){ // vector passed in r
  std::vector<double> y; // this object is empty (size 1?)
  std::vector<double> x; // this object is empty (size 1?)

  // declaring the objects
  double sx = 0;
  double sy = 0;
  double sxy = 0;
  double sx2 = 0;
  int n;

  // sum of y
  for(NumericVector::iterator i=y_.begin(); i!=y_.end(); i++){
    y.push_back(*i); //filling the y with the elements of y_ (increase dynamically)
    sy += *i;
  }

  // value of n
  n = y.size(); // using the vector library

  // sum of x and x^2
  for(NumericVector::iterator i=x_.begin(); i!=x_.end(); i++){
    x.push_back(*i); //filling the x with the elements of x_
    sx += *i;
    sx2 += (*i)*(*i);
  }

  //  sum of xy and print y
  for(size_t i=0; i<n; i++){
    sxy += x[i]*y[i];
    Rcout<<"y["<<i<<"] = "<<y[i]<<std::endl; //endl: enter to change the line
  }

  // declaring the objects b0 and b1
  double b0;
  double b1;

  // getting the estimates
  b1 = (sxy-n*(sx/n)*(sy/n))/(sx2 - n*(sx/n)*(sx/n));
  b0 = (sy/n)-b1*(sx/n);

  return(List::create(_["b0"] = b0,
                      _["b1"] = b1));


}
