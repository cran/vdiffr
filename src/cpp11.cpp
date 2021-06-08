// Generated by cpp11: do not edit by hand
// clang-format off

#include "vdiffr_types.h"
#include "cpp11/declarations.hpp"

// compare.cpp
bool compare_files(std::string expected, std::string test);
extern "C" SEXP _vdiffr_compare_files(SEXP expected, SEXP test) {
  BEGIN_CPP11
    return cpp11::as_sexp(compare_files(cpp11::as_cpp<cpp11::decay_t<std::string>>(expected), cpp11::as_cpp<cpp11::decay_t<std::string>>(test)));
  END_CPP11
}
// devSVG.cpp
bool svglite_(std::string file, std::string bg, double width, double height, double pointsize, bool standalone, bool always_valid);
extern "C" SEXP _vdiffr_svglite_(SEXP file, SEXP bg, SEXP width, SEXP height, SEXP pointsize, SEXP standalone, SEXP always_valid) {
  BEGIN_CPP11
    return cpp11::as_sexp(svglite_(cpp11::as_cpp<cpp11::decay_t<std::string>>(file), cpp11::as_cpp<cpp11::decay_t<std::string>>(bg), cpp11::as_cpp<cpp11::decay_t<double>>(width), cpp11::as_cpp<cpp11::decay_t<double>>(height), cpp11::as_cpp<cpp11::decay_t<double>>(pointsize), cpp11::as_cpp<cpp11::decay_t<bool>>(standalone), cpp11::as_cpp<cpp11::decay_t<bool>>(always_valid)));
  END_CPP11
}
// devSVG.cpp
cpp11::external_pointer<std::stringstream> svgstring_(cpp11::environment env, std::string bg, double width, double height, double pointsize, bool standalone);
extern "C" SEXP _vdiffr_svgstring_(SEXP env, SEXP bg, SEXP width, SEXP height, SEXP pointsize, SEXP standalone) {
  BEGIN_CPP11
    return cpp11::as_sexp(svgstring_(cpp11::as_cpp<cpp11::decay_t<cpp11::environment>>(env), cpp11::as_cpp<cpp11::decay_t<std::string>>(bg), cpp11::as_cpp<cpp11::decay_t<double>>(width), cpp11::as_cpp<cpp11::decay_t<double>>(height), cpp11::as_cpp<cpp11::decay_t<double>>(pointsize), cpp11::as_cpp<cpp11::decay_t<bool>>(standalone)));
  END_CPP11
}
// devSVG.cpp
std::string get_svg_content(cpp11::external_pointer<std::stringstream> p);
extern "C" SEXP _vdiffr_get_svg_content(SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_svg_content(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<std::stringstream>>>(p)));
  END_CPP11
}
// engine_version.cpp
void set_engine_version(cpp11::strings version);
extern "C" SEXP _vdiffr_set_engine_version(SEXP version) {
  BEGIN_CPP11
    set_engine_version(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(version));
    return R_NilValue;
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _vdiffr_compare_files(SEXP, SEXP);
extern SEXP _vdiffr_get_svg_content(SEXP);
extern SEXP _vdiffr_set_engine_version(SEXP);
extern SEXP _vdiffr_svglite_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _vdiffr_svgstring_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_vdiffr_compare_files",      (DL_FUNC) &_vdiffr_compare_files,      2},
    {"_vdiffr_get_svg_content",    (DL_FUNC) &_vdiffr_get_svg_content,    1},
    {"_vdiffr_set_engine_version", (DL_FUNC) &_vdiffr_set_engine_version, 1},
    {"_vdiffr_svglite_",           (DL_FUNC) &_vdiffr_svglite_,           7},
    {"_vdiffr_svgstring_",         (DL_FUNC) &_vdiffr_svgstring_,         6},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_vdiffr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
