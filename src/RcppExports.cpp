// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_df_from_binary
List get_df_from_binary(String bin_file, CharacterVector name, CharacterVector type, NumericVector start, NumericVector width, int row_length);
RcppExport SEXP _tcadr_get_df_from_binary(SEXP bin_fileSEXP, SEXP nameSEXP, SEXP typeSEXP, SEXP startSEXP, SEXP widthSEXP, SEXP row_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type bin_file(bin_fileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type row_length(row_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(get_df_from_binary(bin_file, name, type, start, width, row_length));
    return rcpp_result_gen;
END_RCPP
}
// write_dcb
void write_dcb(List df, String file);
RcppExport SEXP _tcadr_write_dcb(SEXP dfSEXP, SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< String >::type file(fileSEXP);
    write_dcb(df, file);
    return R_NilValue;
END_RCPP
}
// write_df_to_binary
void write_df_to_binary(List df, String file, CharacterVector field_types);
RcppExport SEXP _tcadr_write_df_to_binary(SEXP dfSEXP, SEXP fileSEXP, SEXP field_typesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< String >::type file(fileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type field_types(field_typesSEXP);
    write_df_to_binary(df, file, field_types);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tcadr_get_df_from_binary", (DL_FUNC) &_tcadr_get_df_from_binary, 6},
    {"_tcadr_write_dcb", (DL_FUNC) &_tcadr_write_dcb, 2},
    {"_tcadr_write_df_to_binary", (DL_FUNC) &_tcadr_write_df_to_binary, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_tcadr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
