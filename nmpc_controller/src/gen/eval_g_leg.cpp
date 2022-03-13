/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[40] = {36, 1, 0, 36, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
static const casadi_int casadi_s1[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s2[32] = {28, 1, 0, 28, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};

/* eval_g_leg:(w[36],p[14])->(g[28]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][24] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a0=(a0-a1);
  a1=arg[1]? arg[1][0] : 0;
  a2=arg[0]? arg[0][30] : 0;
  a3=(a1*a2);
  a0=(a0-a3);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][25] : 0;
  a3=arg[0]? arg[0][1] : 0;
  a0=(a0-a3);
  a3=arg[0]? arg[0][31] : 0;
  a4=(a1*a3);
  a0=(a0-a4);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][26] : 0;
  a4=arg[0]? arg[0][2] : 0;
  a0=(a0-a4);
  a4=arg[0]? arg[0][32] : 0;
  a5=(a1*a4);
  a0=(a0-a5);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][27] : 0;
  a5=arg[0]? arg[0][3] : 0;
  a5=(a0-a5);
  a6=arg[0]? arg[0][33] : 0;
  a7=arg[0]? arg[0][28] : 0;
  a8=cos(a7);
  a9=(a6*a8);
  a10=arg[0]? arg[0][35] : 0;
  a11=cos(a0);
  a12=(a10*a11);
  a13=sin(a7);
  a12=(a12*a13);
  a9=(a9+a12);
  a12=arg[0]? arg[0][34] : 0;
  a0=sin(a0);
  a14=(a12*a0);
  a14=(a14*a13);
  a9=(a9+a14);
  a9=(a9/a8);
  a9=(a1*a9);
  a5=(a5-a9);
  if (res[0]!=0) res[0][3]=a5;
  a5=arg[0]? arg[0][4] : 0;
  a7=(a7-a5);
  a5=(a12*a11);
  a9=(a10*a0);
  a5=(a5-a9);
  a5=(a1*a5);
  a7=(a7-a5);
  if (res[0]!=0) res[0][4]=a7;
  a7=arg[0]? arg[0][29] : 0;
  a5=arg[0]? arg[0][5] : 0;
  a5=(a7-a5);
  a9=(a10*a11);
  a14=(a12*a0);
  a9=(a9+a14);
  a9=(a9/a8);
  a9=(a1*a9);
  a5=(a5-a9);
  if (res[0]!=0) res[0][5]=a5;
  a5=1.3300000000000001e+001;
  a9=arg[0]? arg[0][6] : 0;
  a2=(a2-a9);
  a2=(a5*a2);
  a9=arg[0]? arg[0][12] : 0;
  a14=arg[0]? arg[0][15] : 0;
  a15=(a9+a14);
  a16=arg[0]? arg[0][18] : 0;
  a15=(a15+a16);
  a17=arg[0]? arg[0][21] : 0;
  a15=(a15+a17);
  a15=(a1*a15);
  a2=(a2-a15);
  if (res[0]!=0) res[0][6]=a2;
  a2=arg[0]? arg[0][7] : 0;
  a3=(a3-a2);
  a3=(a5*a3);
  a2=arg[0]? arg[0][13] : 0;
  a15=arg[0]? arg[0][16] : 0;
  a18=(a2+a15);
  a19=arg[0]? arg[0][19] : 0;
  a18=(a18+a19);
  a20=arg[0]? arg[0][22] : 0;
  a18=(a18+a20);
  a18=(a1*a18);
  a3=(a3-a18);
  if (res[0]!=0) res[0][7]=a3;
  a3=arg[0]? arg[0][8] : 0;
  a4=(a4-a3);
  a5=(a5*a4);
  a4=1.3047300000000001e+002;
  a3=arg[0]? arg[0][14] : 0;
  a18=arg[0]? arg[0][17] : 0;
  a21=(a3+a18);
  a22=arg[0]? arg[0][20] : 0;
  a21=(a21+a22);
  a23=arg[0]? arg[0][23] : 0;
  a21=(a21+a23);
  a4=(a4-a21);
  a4=(a1*a4);
  a5=(a5+a4);
  if (res[0]!=0) res[0][8]=a5;
  a5=1.2102232626086960e-001;
  a4=arg[0]? arg[0][9] : 0;
  a4=(a6-a4);
  a5=(a5*a4);
  a21=5.6778848000000048e-002;
  a24=(a12*a10);
  a21=(a21*a24);
  a24=arg[1]? arg[1][2] : 0;
  a25=(a24*a13);
  a26=arg[1]? arg[1][4] : 0;
  a27=(a26*a8);
  a28=cos(a7);
  a27=(a27*a28);
  a25=(a25+a27);
  a25=(a25*a2);
  a27=arg[1]? arg[1][3] : 0;
  a29=(a27*a13);
  a30=(a26*a8);
  a7=sin(a7);
  a30=(a30*a7);
  a29=(a29+a30);
  a29=(a29*a9);
  a25=(a25-a29);
  a29=(a27*a28);
  a30=(a24*a7);
  a29=(a29-a30);
  a29=(a8*a29);
  a29=(a29*a3);
  a25=(a25-a29);
  a29=arg[1]? arg[1][6] : 0;
  a30=(a29*a13);
  a31=arg[1]? arg[1][7] : 0;
  a32=(a31*a8);
  a32=(a32*a7);
  a30=(a30+a32);
  a30=(a30*a14);
  a25=(a25-a30);
  a30=arg[1]? arg[1][5] : 0;
  a32=(a30*a13);
  a33=(a31*a8);
  a33=(a33*a28);
  a32=(a32+a33);
  a32=(a32*a15);
  a25=(a25+a32);
  a32=(a29*a28);
  a33=(a30*a7);
  a32=(a32-a33);
  a32=(a8*a32);
  a32=(a32*a18);
  a25=(a25-a32);
  a32=arg[1]? arg[1][9] : 0;
  a33=(a32*a13);
  a34=arg[1]? arg[1][10] : 0;
  a35=(a34*a8);
  a35=(a35*a7);
  a33=(a33+a35);
  a33=(a33*a16);
  a25=(a25-a33);
  a33=arg[1]? arg[1][8] : 0;
  a35=(a33*a13);
  a36=(a34*a8);
  a36=(a36*a28);
  a35=(a35+a36);
  a35=(a35*a19);
  a25=(a25+a35);
  a35=(a32*a28);
  a36=(a33*a7);
  a35=(a35-a36);
  a35=(a8*a35);
  a35=(a35*a22);
  a25=(a25-a35);
  a35=arg[1]? arg[1][12] : 0;
  a36=(a35*a13);
  a37=arg[1]? arg[1][13] : 0;
  a38=(a37*a8);
  a38=(a38*a7);
  a36=(a36+a38);
  a36=(a36*a17);
  a25=(a25-a36);
  a36=arg[1]? arg[1][11] : 0;
  a38=(a36*a13);
  a39=(a37*a8);
  a39=(a39*a28);
  a38=(a38+a39);
  a38=(a38*a20);
  a25=(a25+a38);
  a38=(a35*a28);
  a39=(a36*a7);
  a38=(a38-a39);
  a38=(a8*a38);
  a38=(a38*a23);
  a25=(a25-a38);
  a21=(a21-a25);
  a21=(a1*a21);
  a5=(a5+a21);
  if (res[0]!=0) res[0][9]=a5;
  a5=4.3125046780173909e-001;
  a21=(a5*a11);
  a25=arg[0]? arg[0][10] : 0;
  a25=(a12-a25);
  a21=(a21*a25);
  a38=-4.8802931580173908e-001;
  a38=(a38*a0);
  a39=arg[0]? arg[0][11] : 0;
  a39=(a10-a39);
  a38=(a38*a39);
  a21=(a21+a38);
  a38=-1.3877787807814460e-017;
  a40=26445640661418040.;
  a41=(a10*a11);
  a40=(a40*a41);
  a41=22354293482292820.;
  a42=(a12*a0);
  a41=(a41*a42);
  a40=(a40+a41);
  a40=(a6*a40);
  a38=(a38*a40);
  a40=(a24*a28);
  a41=(a27*a7);
  a40=(a40+a41);
  a40=(a40*a3);
  a41=(a26*a28);
  a41=(a41*a9);
  a26=(a26*a7);
  a26=(a26*a2);
  a41=(a41+a26);
  a40=(a40-a41);
  a41=(a31*a28);
  a41=(a41*a14);
  a40=(a40-a41);
  a31=(a31*a7);
  a31=(a31*a15);
  a40=(a40-a31);
  a31=(a30*a28);
  a41=(a29*a7);
  a31=(a31+a41);
  a31=(a31*a18);
  a40=(a40+a31);
  a31=(a34*a28);
  a31=(a31*a16);
  a40=(a40-a31);
  a34=(a34*a7);
  a34=(a34*a19);
  a40=(a40-a34);
  a34=(a33*a28);
  a31=(a32*a7);
  a34=(a34+a31);
  a34=(a34*a22);
  a40=(a40+a34);
  a34=(a37*a28);
  a34=(a34*a17);
  a40=(a40-a34);
  a37=(a37*a7);
  a37=(a37*a20);
  a40=(a40-a37);
  a28=(a36*a28);
  a7=(a35*a7);
  a28=(a28+a7);
  a28=(a28*a23);
  a40=(a40+a28);
  a38=(a38-a40);
  a38=(a1*a38);
  a21=(a21+a38);
  if (res[0]!=0) res[0][10]=a21;
  a21=-1.2102232626086960e-001;
  a21=(a21*a13);
  a21=(a21*a4);
  a4=(a8*a0);
  a5=(a5*a4);
  a5=(a5*a25);
  a21=(a21+a5);
  a5=4.8802931580173908e-001;
  a25=(a11*a8);
  a5=(a5*a25);
  a5=(a5*a39);
  a21=(a21+a5);
  a5=-5.6778848000000048e-002;
  a39=(a12*a10);
  a39=(a39*a13);
  a5=(a5*a39);
  a39=3.1022814154086947e-001;
  a12=(a6*a12);
  a12=(a12*a11);
  a12=(a12*a8);
  a39=(a39*a12);
  a5=(a5+a39);
  a39=3.6700698954086958e-001;
  a6=(a6*a10);
  a6=(a6*a8);
  a6=(a6*a0);
  a39=(a39*a6);
  a5=(a5-a39);
  a27=(a27*a9);
  a24=(a24*a2);
  a27=(a27-a24);
  a29=(a29*a14);
  a27=(a27+a29);
  a30=(a30*a15);
  a27=(a27-a30);
  a32=(a32*a16);
  a27=(a27+a32);
  a33=(a33*a19);
  a27=(a27-a33);
  a35=(a35*a17);
  a27=(a27+a35);
  a36=(a36*a20);
  a27=(a27-a36);
  a5=(a5-a27);
  a1=(a1*a5);
  a21=(a21+a1);
  if (res[0]!=0) res[0][11]=a21;
  a21=arg[1]? arg[1][1] : 0;
  a1=(a21*a3);
  a1=(a9-a1);
  if (res[0]!=0) res[0][12]=a1;
  a1=(a21*a3);
  a9=(a9+a1);
  a9=(-a9);
  if (res[0]!=0) res[0][13]=a9;
  a9=(a21*a3);
  a9=(a2-a9);
  if (res[0]!=0) res[0][14]=a9;
  a3=(a21*a3);
  a2=(a2+a3);
  a2=(-a2);
  if (res[0]!=0) res[0][15]=a2;
  a2=(a21*a18);
  a2=(a14-a2);
  if (res[0]!=0) res[0][16]=a2;
  a2=(a21*a18);
  a14=(a14+a2);
  a14=(-a14);
  if (res[0]!=0) res[0][17]=a14;
  a14=(a21*a18);
  a14=(a15-a14);
  if (res[0]!=0) res[0][18]=a14;
  a18=(a21*a18);
  a15=(a15+a18);
  a15=(-a15);
  if (res[0]!=0) res[0][19]=a15;
  a15=(a21*a22);
  a15=(a16-a15);
  if (res[0]!=0) res[0][20]=a15;
  a15=(a21*a22);
  a16=(a16+a15);
  a16=(-a16);
  if (res[0]!=0) res[0][21]=a16;
  a16=(a21*a22);
  a16=(a19-a16);
  if (res[0]!=0) res[0][22]=a16;
  a22=(a21*a22);
  a19=(a19+a22);
  a19=(-a19);
  if (res[0]!=0) res[0][23]=a19;
  a19=(a21*a23);
  a19=(a17-a19);
  if (res[0]!=0) res[0][24]=a19;
  a19=(a21*a23);
  a17=(a17+a19);
  a17=(-a17);
  if (res[0]!=0) res[0][25]=a17;
  a17=(a21*a23);
  a17=(a20-a17);
  if (res[0]!=0) res[0][26]=a17;
  a21=(a21*a23);
  a20=(a20+a21);
  a20=(-a20);
  if (res[0]!=0) res[0][27]=a20;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


