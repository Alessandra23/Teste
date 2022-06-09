// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// LR
List LR(NumericVector y_, NumericVector x_);
RcppExport SEXP _Teste_LR(SEXP y_SEXP, SEXP x_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_(x_SEXP);
    rcpp_result_gen = Rcpp::wrap(LR(y_, x_));
    return rcpp_result_gen;
END_RCPP
}
// myfunction
List myfunction(NumericVector y);
RcppExport SEXP _Teste_myfunction(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(myfunction(y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Teste_LR", (DL_FUNC) &_Teste_LR, 2},
    {"_Teste_myfunction", (DL_FUNC) &_Teste_myfunction, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Teste(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
