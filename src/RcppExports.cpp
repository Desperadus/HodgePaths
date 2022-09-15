// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bicgSparse
RcppExport SEXP bicgSparse(const Eigen::Map<Eigen::SparseMatrix<double> > A, const Eigen::VectorXd b, const Eigen::Index nb_iter, const double err);
RcppExport SEXP _HodgePaths_bicgSparse(SEXP ASEXP, SEXP bSEXP, SEXP nb_iterSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(bicgSparse(A, b, nb_iter, err));
    return rcpp_result_gen;
END_RCPP
}
// build_boundary_Cu
RcppExport SEXP build_boundary_Cu(Rcpp::List filtration, bool sort_input);
RcppExport SEXP _HodgePaths_build_boundary_Cu(SEXP filtrationSEXP, SEXP sort_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type filtration(filtrationSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_input(sort_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(build_boundary_Cu(filtration, sort_input));
    return rcpp_result_gen;
END_RCPP
}
// cgSparse
RcppExport SEXP cgSparse(const Eigen::Map<Eigen::SparseMatrix<double> > A, const Eigen::VectorXd b, const Eigen::VectorXd iguess, const Eigen::Index nb_iter, const double err);
RcppExport SEXP _HodgePaths_cgSparse(SEXP ASEXP, SEXP bSEXP, SEXP iguessSEXP, SEXP nb_iterSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type iguess(iguessSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(cgSparse(A, b, iguess, nb_iter, err));
    return rcpp_result_gen;
END_RCPP
}
// minres
RcppExport SEXP minres(const Eigen::Map<Eigen::SparseMatrix<double> > A, const Eigen::VectorXd b, const Eigen::Index nb_iter, const double err);
RcppExport SEXP _HodgePaths_minres(SEXP ASEXP, SEXP bSEXP, SEXP nb_iterSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(minres(A, b, nb_iter, err));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HodgePaths_bicgSparse", (DL_FUNC) &_HodgePaths_bicgSparse, 4},
    {"_HodgePaths_build_boundary_Cu", (DL_FUNC) &_HodgePaths_build_boundary_Cu, 2},
    {"_HodgePaths_cgSparse", (DL_FUNC) &_HodgePaths_cgSparse, 5},
    {"_HodgePaths_minres", (DL_FUNC) &_HodgePaths_minres, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_HodgePaths(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
