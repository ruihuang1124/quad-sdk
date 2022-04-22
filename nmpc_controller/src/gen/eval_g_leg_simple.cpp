/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_simple_ ## ID
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
#define casadi_sq CASADI_PREFIX(sq)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[100] = {96, 1, 0, 96, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95};
static const casadi_int casadi_s1[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s2[32] = {28, 1, 0, 28, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};

/* eval_g_leg_simple:(w[96],p[14])->(g[28]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][60] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a2=arg[0]? arg[0][6] : 0;
  a3=arg[1]? arg[1][0] : 0;
  a4=(a2*a3);
  a1=(a1+a4);
  a4=5.0000000000000000e-01;
  a5=arg[0]? arg[0][36] : 0;
  a6=arg[0]? arg[0][39] : 0;
  a7=(a5+a6);
  a8=arg[0]? arg[0][42] : 0;
  a7=(a7+a8);
  a9=arg[0]? arg[0][45] : 0;
  a7=(a7+a9);
  a10=1.3300000000000001e+01;
  a7=(a7/a10);
  a7=(a4*a7);
  a11=casadi_sq(a3);
  a7=(a7*a11);
  a1=(a1+a7);
  a1=(a0-a1);
  if (res[0]!=0) res[0][0]=a1;
  a1=arg[0]? arg[0][61] : 0;
  a7=arg[0]? arg[0][1] : 0;
  a12=arg[0]? arg[0][7] : 0;
  a13=(a12*a3);
  a7=(a7+a13);
  a13=arg[0]? arg[0][37] : 0;
  a14=arg[0]? arg[0][40] : 0;
  a15=(a13+a14);
  a16=arg[0]? arg[0][43] : 0;
  a15=(a15+a16);
  a17=arg[0]? arg[0][46] : 0;
  a15=(a15+a17);
  a15=(a15/a10);
  a15=(a4*a15);
  a15=(a15*a11);
  a7=(a7+a15);
  a7=(a1-a7);
  if (res[0]!=0) res[0][1]=a7;
  a7=arg[0]? arg[0][62] : 0;
  a15=arg[0]? arg[0][2] : 0;
  a18=arg[0]? arg[0][8] : 0;
  a19=(a18*a3);
  a15=(a15+a19);
  a19=arg[0]? arg[0][38] : 0;
  a20=arg[0]? arg[0][41] : 0;
  a21=(a19+a20);
  a22=arg[0]? arg[0][44] : 0;
  a21=(a21+a22);
  a23=arg[0]? arg[0][47] : 0;
  a21=(a21+a23);
  a21=(a21/a10);
  a24=9.8100000000000005e+00;
  a21=(a21-a24);
  a4=(a4*a21);
  a4=(a4*a11);
  a15=(a15+a4);
  a15=(a7-a15);
  if (res[0]!=0) res[0][2]=a15;
  a15=arg[0]? arg[0][63] : 0;
  a4=arg[0]? arg[0][3] : 0;
  a4=(a15-a4);
  a11=arg[0]? arg[0][69] : 0;
  a21=arg[0]? arg[0][64] : 0;
  a25=cos(a21);
  a26=(a11*a25);
  a27=arg[0]? arg[0][71] : 0;
  a28=cos(a15);
  a29=(a27*a28);
  a30=sin(a21);
  a29=(a29*a30);
  a26=(a26+a29);
  a29=arg[0]? arg[0][70] : 0;
  a15=sin(a15);
  a31=(a29*a15);
  a31=(a31*a30);
  a26=(a26+a31);
  a26=(a26/a25);
  a26=(a26*a3);
  a4=(a4-a26);
  if (res[0]!=0) res[0][3]=a4;
  a4=arg[0]? arg[0][4] : 0;
  a21=(a21-a4);
  a4=(a29*a28);
  a26=(a27*a15);
  a4=(a4-a26);
  a4=(a4*a3);
  a21=(a21-a4);
  if (res[0]!=0) res[0][4]=a21;
  a21=arg[0]? arg[0][65] : 0;
  a4=arg[0]? arg[0][5] : 0;
  a4=(a21-a4);
  a26=(a27*a28);
  a31=(a29*a15);
  a26=(a26+a31);
  a26=(a26/a25);
  a26=(a26*a3);
  a4=(a4-a26);
  if (res[0]!=0) res[0][5]=a4;
  a4=arg[0]? arg[0][66] : 0;
  a26=(a5+a6);
  a26=(a26+a8);
  a26=(a26+a9);
  a26=(a26/a10);
  a26=(a26*a3);
  a2=(a2+a26);
  a4=(a4-a2);
  if (res[0]!=0) res[0][6]=a4;
  a4=arg[0]? arg[0][67] : 0;
  a2=(a13+a14);
  a2=(a2+a16);
  a2=(a2+a17);
  a2=(a2/a10);
  a2=(a2*a3);
  a12=(a12+a2);
  a4=(a4-a12);
  if (res[0]!=0) res[0][7]=a4;
  a4=arg[0]? arg[0][68] : 0;
  a12=(a19+a20);
  a12=(a12+a22);
  a12=(a12+a23);
  a12=(a12/a10);
  a12=(a12-a24);
  a12=(a12*a3);
  a18=(a18+a12);
  a4=(a4-a18);
  if (res[0]!=0) res[0][8]=a4;
  a4=9.3212278260869572e-02;
  a18=arg[0]? arg[0][9] : 0;
  a18=(a11-a18);
  a4=(a4*a18);
  a12=2.8968800000000020e-02;
  a24=(a29*a27);
  a12=(a12*a24);
  a24=arg[1]? arg[1][3] : 0;
  a10=(a24-a1);
  a10=(a30*a10);
  a2=sin(a21);
  a26=(a25*a2);
  a31=arg[1]? arg[1][4] : 0;
  a31=(a31-a7);
  a26=(a26*a31);
  a10=(a10+a26);
  a10=(a10*a5);
  a26=arg[1]? arg[1][2] : 0;
  a32=(a26-a0);
  a33=(a30*a32);
  a21=cos(a21);
  a34=(a25*a21);
  a34=(a34*a31);
  a33=(a33+a34);
  a33=(a33*a13);
  a10=(a10-a33);
  a33=(a1*a21);
  a34=(a0*a2);
  a35=(a33-a34);
  a36=(a24*a21);
  a35=(a35-a36);
  a36=(a26*a2);
  a35=(a35+a36);
  a35=(a25*a35);
  a35=(a35*a19);
  a10=(a10-a35);
  a35=arg[1]? arg[1][6] : 0;
  a36=(a35-a1);
  a36=(a30*a36);
  a37=(a25*a2);
  a38=arg[1]? arg[1][7] : 0;
  a38=(a38-a7);
  a37=(a37*a38);
  a36=(a36+a37);
  a36=(a36*a6);
  a10=(a10+a36);
  a36=arg[1]? arg[1][5] : 0;
  a37=(a36-a0);
  a39=(a30*a37);
  a40=(a25*a21);
  a40=(a40*a38);
  a39=(a39+a40);
  a39=(a39*a14);
  a10=(a10-a39);
  a39=(a33-a34);
  a40=(a35*a21);
  a39=(a39-a40);
  a40=(a36*a2);
  a39=(a39+a40);
  a39=(a25*a39);
  a39=(a39*a20);
  a10=(a10-a39);
  a39=arg[1]? arg[1][9] : 0;
  a40=(a39-a1);
  a40=(a30*a40);
  a41=(a25*a2);
  a42=arg[1]? arg[1][10] : 0;
  a42=(a42-a7);
  a41=(a41*a42);
  a40=(a40+a41);
  a40=(a40*a8);
  a10=(a10+a40);
  a40=arg[1]? arg[1][8] : 0;
  a41=(a40-a0);
  a43=(a30*a41);
  a44=(a25*a21);
  a44=(a44*a42);
  a43=(a43+a44);
  a43=(a43*a16);
  a10=(a10-a43);
  a43=(a33-a34);
  a44=(a39*a21);
  a43=(a43-a44);
  a44=(a40*a2);
  a43=(a43+a44);
  a43=(a25*a43);
  a43=(a43*a22);
  a10=(a10-a43);
  a43=arg[1]? arg[1][12] : 0;
  a44=(a43-a1);
  a44=(a30*a44);
  a45=(a25*a2);
  a46=arg[1]? arg[1][13] : 0;
  a46=(a46-a7);
  a45=(a45*a46);
  a44=(a44+a45);
  a44=(a44*a9);
  a10=(a10+a44);
  a44=arg[1]? arg[1][11] : 0;
  a45=(a44-a0);
  a7=(a30*a45);
  a47=(a25*a21);
  a47=(a47*a46);
  a7=(a7+a47);
  a7=(a7*a17);
  a10=(a10-a7);
  a33=(a33-a34);
  a34=(a43*a21);
  a33=(a33-a34);
  a34=(a44*a2);
  a33=(a33+a34);
  a33=(a25*a33);
  a33=(a33*a23);
  a10=(a10-a33);
  a12=(a12-a10);
  a12=(a12*a3);
  a4=(a4+a12);
  if (res[0]!=0) res[0][9]=a4;
  a4=4.3125046780173909e-01;
  a12=(a4*a28);
  a10=arg[0]? arg[0][10] : 0;
  a10=(a29-a10);
  a12=(a12*a10);
  a33=-4.6021926780173911e-01;
  a33=(a33*a15);
  a34=arg[0]? arg[0][11] : 0;
  a34=(a27-a34);
  a33=(a33*a34);
  a12=(a12+a33);
  a33=-1.3877787807814460e-17;
  a7=26445640661418040.;
  a47=(a27*a28);
  a7=(a7*a47);
  a47=24358218631252112.;
  a48=(a29*a15);
  a47=(a47*a48);
  a7=(a7+a47);
  a7=(a11*a7);
  a33=(a33*a7);
  a7=(a21*a31);
  a7=(a7*a5);
  a31=(a2*a31);
  a31=(a31*a13);
  a7=(a7+a31);
  a0=(a0*a21);
  a31=(a1*a2);
  a47=(a0+a31);
  a26=(a26*a21);
  a47=(a47-a26);
  a26=(a24*a2);
  a47=(a47-a26);
  a47=(a47*a19);
  a7=(a7+a47);
  a47=(a21*a38);
  a47=(a47*a6);
  a7=(a7+a47);
  a38=(a2*a38);
  a38=(a38*a14);
  a7=(a7+a38);
  a38=(a0+a31);
  a36=(a36*a21);
  a38=(a38-a36);
  a36=(a35*a2);
  a38=(a38-a36);
  a38=(a38*a20);
  a7=(a7+a38);
  a38=(a21*a42);
  a38=(a38*a8);
  a7=(a7+a38);
  a42=(a2*a42);
  a42=(a42*a16);
  a7=(a7+a42);
  a42=(a0+a31);
  a40=(a40*a21);
  a42=(a42-a40);
  a40=(a39*a2);
  a42=(a42-a40);
  a42=(a42*a22);
  a7=(a7+a42);
  a42=(a21*a46);
  a42=(a42*a9);
  a7=(a7+a42);
  a46=(a2*a46);
  a46=(a46*a17);
  a7=(a7+a46);
  a0=(a0+a31);
  a44=(a44*a21);
  a0=(a0-a44);
  a2=(a43*a2);
  a0=(a0-a2);
  a0=(a0*a23);
  a7=(a7+a0);
  a33=(a33-a7);
  a33=(a33*a3);
  a12=(a12+a33);
  if (res[0]!=0) res[0][10]=a12;
  a12=-9.3212278260869572e-02;
  a12=(a12*a30);
  a12=(a12*a18);
  a18=(a25*a15);
  a4=(a4*a18);
  a4=(a4*a10);
  a12=(a12+a4);
  a4=4.6021926780173911e-01;
  a10=(a28*a25);
  a4=(a4*a10);
  a4=(a4*a34);
  a12=(a12+a4);
  a4=-2.8968800000000020e-02;
  a34=(a29*a27);
  a34=(a34*a30);
  a4=(a4*a34);
  a34=3.3803818954086950e-01;
  a29=(a11*a29);
  a29=(a29*a28);
  a29=(a29*a25);
  a34=(a34*a29);
  a4=(a4+a34);
  a34=3.6700698954086952e-01;
  a11=(a11*a27);
  a11=(a11*a25);
  a11=(a11*a15);
  a34=(a34*a11);
  a4=(a4-a34);
  a24=(a1-a24);
  a24=(a24*a5);
  a32=(a32*a13);
  a24=(a24+a32);
  a35=(a1-a35);
  a35=(a35*a6);
  a24=(a24+a35);
  a37=(a37*a14);
  a24=(a24+a37);
  a39=(a1-a39);
  a39=(a39*a8);
  a24=(a24+a39);
  a41=(a41*a16);
  a24=(a24+a41);
  a1=(a1-a43);
  a1=(a1*a9);
  a24=(a24+a1);
  a45=(a45*a17);
  a24=(a24+a45);
  a4=(a4-a24);
  a4=(a4*a3);
  a12=(a12+a4);
  if (res[0]!=0) res[0][11]=a12;
  a12=arg[1]? arg[1][1] : 0;
  a4=(a12*a19);
  a4=(a5-a4);
  if (res[0]!=0) res[0][12]=a4;
  a4=(a12*a19);
  a5=(a5+a4);
  a5=(-a5);
  if (res[0]!=0) res[0][13]=a5;
  a5=(a12*a19);
  a5=(a13-a5);
  if (res[0]!=0) res[0][14]=a5;
  a19=(a12*a19);
  a13=(a13+a19);
  a13=(-a13);
  if (res[0]!=0) res[0][15]=a13;
  a13=(a12*a20);
  a13=(a6-a13);
  if (res[0]!=0) res[0][16]=a13;
  a13=(a12*a20);
  a6=(a6+a13);
  a6=(-a6);
  if (res[0]!=0) res[0][17]=a6;
  a6=(a12*a20);
  a6=(a14-a6);
  if (res[0]!=0) res[0][18]=a6;
  a20=(a12*a20);
  a14=(a14+a20);
  a14=(-a14);
  if (res[0]!=0) res[0][19]=a14;
  a14=(a12*a22);
  a14=(a8-a14);
  if (res[0]!=0) res[0][20]=a14;
  a14=(a12*a22);
  a8=(a8+a14);
  a8=(-a8);
  if (res[0]!=0) res[0][21]=a8;
  a8=(a12*a22);
  a8=(a16-a8);
  if (res[0]!=0) res[0][22]=a8;
  a22=(a12*a22);
  a16=(a16+a22);
  a16=(-a16);
  if (res[0]!=0) res[0][23]=a16;
  a16=(a12*a23);
  a16=(a9-a16);
  if (res[0]!=0) res[0][24]=a16;
  a16=(a12*a23);
  a9=(a9+a16);
  a9=(-a9);
  if (res[0]!=0) res[0][25]=a9;
  a9=(a12*a23);
  a9=(a17-a9);
  if (res[0]!=0) res[0][26]=a9;
  a12=(a12*a23);
  a17=(a17+a12);
  a17=(-a17);
  if (res[0]!=0) res[0][27]=a17;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


