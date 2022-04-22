/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_jac_g_leg_simple_ ## ID
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
static const casadi_int casadi_s2[248] = {28, 96, 0, 1, 2, 3, 4, 5, 6, 8, 10, 12, 14, 16, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 25, 32, 40, 47, 54, 62, 69, 76, 84, 91, 98, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 110, 114, 117, 122, 127, 130, 131, 132, 133, 137, 143, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 0, 1, 2, 3, 4, 5, 0, 6, 1, 7, 2, 8, 9, 11, 10, 11, 10, 11, 0, 6, 9, 10, 11, 12, 13, 1, 7, 9, 10, 11, 14, 15, 2, 8, 9, 10, 12, 13, 14, 15, 0, 6, 9, 10, 11, 16, 17, 1, 7, 9, 10, 11, 18, 19, 2, 8, 9, 10, 16, 17, 18, 19, 0, 6, 9, 10, 11, 20, 21, 1, 7, 9, 10, 11, 22, 23, 2, 8, 9, 10, 20, 21, 22, 23, 0, 6, 9, 10, 11, 24, 25, 1, 7, 9, 10, 11, 26, 27, 2, 8, 9, 10, 24, 25, 26, 27, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 6, 7, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11};

/* eval_jac_g_leg_simple:(w[96],p[14])->(jac_g[28x96,149nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97;
  a0=-1.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a0;
  if (res[0]!=0) res[0][5]=a0;
  a1=arg[1]? arg[1][0] : 0;
  a2=(-a1);
  if (res[0]!=0) res[0][6]=a2;
  if (res[0]!=0) res[0][7]=a0;
  a2=(-a1);
  if (res[0]!=0) res[0][8]=a2;
  if (res[0]!=0) res[0][9]=a0;
  a2=(-a1);
  if (res[0]!=0) res[0][10]=a2;
  if (res[0]!=0) res[0][11]=a0;
  a2=-9.3212278260869572e-02;
  if (res[0]!=0) res[0][12]=a2;
  a3=arg[0]? arg[0][64] : 0;
  a4=sin(a3);
  a5=(a2*a4);
  a6=(-a5);
  if (res[0]!=0) res[0][13]=a6;
  a6=4.3125046780173909e-01;
  a7=arg[0]? arg[0][63] : 0;
  a8=cos(a7);
  a9=(a6*a8);
  a10=(-a9);
  if (res[0]!=0) res[0][14]=a10;
  a10=cos(a3);
  a11=sin(a7);
  a12=(a10*a11);
  a12=(a6*a12);
  a13=(-a12);
  if (res[0]!=0) res[0][15]=a13;
  a13=-4.6021926780173911e-01;
  a14=(a13*a11);
  a15=(-a14);
  if (res[0]!=0) res[0][16]=a15;
  a15=4.6021926780173911e-01;
  a16=(a8*a10);
  a16=(a15*a16);
  a17=(-a16);
  if (res[0]!=0) res[0][17]=a17;
  a17=7.5187969924812026e-02;
  a18=5.0000000000000000e-01;
  a19=casadi_sq(a1);
  a20=(a18*a19);
  a20=(a17*a20);
  a20=(-a20);
  if (res[0]!=0) res[0][18]=a20;
  a21=(a17*a1);
  a21=(-a21);
  if (res[0]!=0) res[0][19]=a21;
  a22=arg[1]? arg[1][3] : 0;
  a23=arg[0]? arg[0][61] : 0;
  a24=(a22-a23);
  a25=(a4*a24);
  a26=arg[0]? arg[0][65] : 0;
  a27=sin(a26);
  a28=(a10*a27);
  a29=arg[1]? arg[1][4] : 0;
  a30=arg[0]? arg[0][62] : 0;
  a29=(a29-a30);
  a31=(a28*a29);
  a25=(a25+a31);
  a25=(a25*a1);
  a25=(-a25);
  if (res[0]!=0) res[0][20]=a25;
  a25=cos(a26);
  a31=(a25*a29);
  a31=(a31*a1);
  a31=(-a31);
  if (res[0]!=0) res[0][21]=a31;
  a31=(a23-a22);
  a31=(a31*a1);
  a31=(-a31);
  if (res[0]!=0) res[0][22]=a31;
  a31=1.;
  if (res[0]!=0) res[0][23]=a31;
  if (res[0]!=0) res[0][24]=a0;
  a32=(a18*a19);
  a32=(a17*a32);
  a32=(-a32);
  if (res[0]!=0) res[0][25]=a32;
  a33=(a17*a1);
  a33=(-a33);
  if (res[0]!=0) res[0][26]=a33;
  a34=arg[1]? arg[1][2] : 0;
  a35=arg[0]? arg[0][60] : 0;
  a36=(a34-a35);
  a37=(a4*a36);
  a38=(a10*a25);
  a39=(a38*a29);
  a37=(a37+a39);
  a37=(a37*a1);
  if (res[0]!=0) res[0][27]=a37;
  a37=(a27*a29);
  a37=(a37*a1);
  a37=(-a37);
  if (res[0]!=0) res[0][28]=a37;
  a37=(a36*a1);
  a37=(-a37);
  if (res[0]!=0) res[0][29]=a37;
  if (res[0]!=0) res[0][30]=a31;
  if (res[0]!=0) res[0][31]=a0;
  a18=(a18*a19);
  a18=(a17*a18);
  a18=(-a18);
  if (res[0]!=0) res[0][32]=a18;
  a17=(a17*a1);
  a17=(-a17);
  if (res[0]!=0) res[0][33]=a17;
  a19=(a23*a25);
  a37=(a35*a27);
  a39=(a19-a37);
  a40=(a22*a25);
  a39=(a39-a40);
  a40=(a34*a27);
  a39=(a39+a40);
  a40=(a10*a39);
  a40=(a40*a1);
  if (res[0]!=0) res[0][34]=a40;
  a40=(a35*a25);
  a41=(a23*a27);
  a42=(a40+a41);
  a43=(a34*a25);
  a42=(a42-a43);
  a43=(a22*a27);
  a42=(a42-a43);
  a42=(a42*a1);
  a42=(-a42);
  if (res[0]!=0) res[0][35]=a42;
  a42=arg[1]? arg[1][1] : 0;
  a43=(-a42);
  if (res[0]!=0) res[0][36]=a43;
  a43=(-a42);
  if (res[0]!=0) res[0][37]=a43;
  a43=(-a42);
  if (res[0]!=0) res[0][38]=a43;
  a43=(-a42);
  if (res[0]!=0) res[0][39]=a43;
  if (res[0]!=0) res[0][40]=a20;
  if (res[0]!=0) res[0][41]=a21;
  a43=arg[1]? arg[1][6] : 0;
  a44=(a43-a23);
  a45=(a4*a44);
  a46=(a10*a27);
  a47=arg[1]? arg[1][7] : 0;
  a47=(a47-a30);
  a48=(a46*a47);
  a45=(a45+a48);
  a45=(a45*a1);
  a45=(-a45);
  if (res[0]!=0) res[0][42]=a45;
  a45=(a25*a47);
  a45=(a45*a1);
  a45=(-a45);
  if (res[0]!=0) res[0][43]=a45;
  a45=(a23-a43);
  a45=(a45*a1);
  a45=(-a45);
  if (res[0]!=0) res[0][44]=a45;
  if (res[0]!=0) res[0][45]=a31;
  if (res[0]!=0) res[0][46]=a0;
  if (res[0]!=0) res[0][47]=a32;
  if (res[0]!=0) res[0][48]=a33;
  a45=arg[1]? arg[1][5] : 0;
  a48=(a45-a35);
  a49=(a4*a48);
  a50=(a10*a25);
  a51=(a50*a47);
  a49=(a49+a51);
  a49=(a49*a1);
  if (res[0]!=0) res[0][49]=a49;
  a49=(a27*a47);
  a49=(a49*a1);
  a49=(-a49);
  if (res[0]!=0) res[0][50]=a49;
  a49=(a48*a1);
  a49=(-a49);
  if (res[0]!=0) res[0][51]=a49;
  if (res[0]!=0) res[0][52]=a31;
  if (res[0]!=0) res[0][53]=a0;
  if (res[0]!=0) res[0][54]=a18;
  if (res[0]!=0) res[0][55]=a17;
  a49=(a19-a37);
  a51=(a43*a25);
  a49=(a49-a51);
  a51=(a45*a27);
  a49=(a49+a51);
  a51=(a10*a49);
  a51=(a51*a1);
  if (res[0]!=0) res[0][56]=a51;
  a51=(a40+a41);
  a52=(a45*a25);
  a51=(a51-a52);
  a52=(a43*a27);
  a51=(a51-a52);
  a51=(a51*a1);
  a51=(-a51);
  if (res[0]!=0) res[0][57]=a51;
  a51=(-a42);
  if (res[0]!=0) res[0][58]=a51;
  a51=(-a42);
  if (res[0]!=0) res[0][59]=a51;
  a51=(-a42);
  if (res[0]!=0) res[0][60]=a51;
  a51=(-a42);
  if (res[0]!=0) res[0][61]=a51;
  if (res[0]!=0) res[0][62]=a20;
  if (res[0]!=0) res[0][63]=a21;
  a51=arg[1]? arg[1][9] : 0;
  a52=(a51-a23);
  a53=(a4*a52);
  a54=(a10*a27);
  a55=arg[1]? arg[1][10] : 0;
  a55=(a55-a30);
  a56=(a54*a55);
  a53=(a53+a56);
  a53=(a53*a1);
  a53=(-a53);
  if (res[0]!=0) res[0][64]=a53;
  a53=(a25*a55);
  a53=(a53*a1);
  a53=(-a53);
  if (res[0]!=0) res[0][65]=a53;
  a53=(a23-a51);
  a53=(a53*a1);
  a53=(-a53);
  if (res[0]!=0) res[0][66]=a53;
  if (res[0]!=0) res[0][67]=a31;
  if (res[0]!=0) res[0][68]=a0;
  if (res[0]!=0) res[0][69]=a32;
  if (res[0]!=0) res[0][70]=a33;
  a53=arg[1]? arg[1][8] : 0;
  a56=(a53-a35);
  a57=(a4*a56);
  a58=(a10*a25);
  a59=(a58*a55);
  a57=(a57+a59);
  a57=(a57*a1);
  if (res[0]!=0) res[0][71]=a57;
  a57=(a27*a55);
  a57=(a57*a1);
  a57=(-a57);
  if (res[0]!=0) res[0][72]=a57;
  a57=(a56*a1);
  a57=(-a57);
  if (res[0]!=0) res[0][73]=a57;
  if (res[0]!=0) res[0][74]=a31;
  if (res[0]!=0) res[0][75]=a0;
  if (res[0]!=0) res[0][76]=a18;
  if (res[0]!=0) res[0][77]=a17;
  a57=(a19-a37);
  a59=(a51*a25);
  a57=(a57-a59);
  a59=(a53*a27);
  a57=(a57+a59);
  a59=(a10*a57);
  a59=(a59*a1);
  if (res[0]!=0) res[0][78]=a59;
  a59=(a40+a41);
  a60=(a53*a25);
  a59=(a59-a60);
  a60=(a51*a27);
  a59=(a59-a60);
  a59=(a59*a1);
  a59=(-a59);
  if (res[0]!=0) res[0][79]=a59;
  a59=(-a42);
  if (res[0]!=0) res[0][80]=a59;
  a59=(-a42);
  if (res[0]!=0) res[0][81]=a59;
  a59=(-a42);
  if (res[0]!=0) res[0][82]=a59;
  a59=(-a42);
  if (res[0]!=0) res[0][83]=a59;
  if (res[0]!=0) res[0][84]=a20;
  if (res[0]!=0) res[0][85]=a21;
  a21=arg[1]? arg[1][12] : 0;
  a20=(a21-a23);
  a59=(a4*a20);
  a60=(a10*a27);
  a61=arg[1]? arg[1][13] : 0;
  a61=(a61-a30);
  a30=(a60*a61);
  a59=(a59+a30);
  a59=(a59*a1);
  a59=(-a59);
  if (res[0]!=0) res[0][86]=a59;
  a59=(a25*a61);
  a59=(a59*a1);
  a59=(-a59);
  if (res[0]!=0) res[0][87]=a59;
  a59=(a23-a21);
  a59=(a59*a1);
  a59=(-a59);
  if (res[0]!=0) res[0][88]=a59;
  if (res[0]!=0) res[0][89]=a31;
  if (res[0]!=0) res[0][90]=a0;
  if (res[0]!=0) res[0][91]=a32;
  if (res[0]!=0) res[0][92]=a33;
  a33=arg[1]? arg[1][11] : 0;
  a32=(a33-a35);
  a59=(a4*a32);
  a30=(a10*a25);
  a62=(a30*a61);
  a59=(a59+a62);
  a59=(a59*a1);
  if (res[0]!=0) res[0][93]=a59;
  a59=(a27*a61);
  a59=(a59*a1);
  a59=(-a59);
  if (res[0]!=0) res[0][94]=a59;
  a59=(a32*a1);
  a59=(-a59);
  if (res[0]!=0) res[0][95]=a59;
  if (res[0]!=0) res[0][96]=a31;
  if (res[0]!=0) res[0][97]=a0;
  if (res[0]!=0) res[0][98]=a18;
  if (res[0]!=0) res[0][99]=a17;
  a19=(a19-a37);
  a37=(a21*a25);
  a19=(a19-a37);
  a37=(a33*a27);
  a19=(a19+a37);
  a37=(a10*a19);
  a37=(a37*a1);
  if (res[0]!=0) res[0][100]=a37;
  a40=(a40+a41);
  a41=(a33*a25);
  a40=(a40-a41);
  a41=(a21*a27);
  a40=(a40-a41);
  a40=(a40*a1);
  a40=(-a40);
  if (res[0]!=0) res[0][101]=a40;
  a40=(-a42);
  if (res[0]!=0) res[0][102]=a40;
  a40=(-a42);
  if (res[0]!=0) res[0][103]=a40;
  a40=(-a42);
  if (res[0]!=0) res[0][104]=a40;
  a42=(-a42);
  if (res[0]!=0) res[0][105]=a42;
  if (res[0]!=0) res[0][106]=a31;
  a42=arg[0]? arg[0][46] : 0;
  a40=(a42*a1);
  a41=(a4*a40);
  a37=arg[0]? arg[0][43] : 0;
  a17=(a37*a1);
  a18=(a4*a17);
  a41=(a41+a18);
  a18=arg[0]? arg[0][40] : 0;
  a0=(a18*a1);
  a59=(a4*a0);
  a41=(a41+a59);
  a59=arg[0]? arg[0][47] : 0;
  a62=(a59*a1);
  a63=(a10*a62);
  a64=arg[0]? arg[0][44] : 0;
  a65=(a64*a1);
  a66=(a10*a65);
  a67=(a63+a66);
  a68=arg[0]? arg[0][41] : 0;
  a69=(a68*a1);
  a70=(a10*a69);
  a67=(a67+a70);
  a71=arg[0]? arg[0][38] : 0;
  a72=(a71*a1);
  a73=(a10*a72);
  a67=(a67+a73);
  a74=(a27*a67);
  a41=(a41+a74);
  a74=arg[0]? arg[0][37] : 0;
  a75=(a74*a1);
  a76=(a4*a75);
  a41=(a41+a76);
  a41=(-a41);
  if (res[0]!=0) res[0][107]=a41;
  a59=(a59*a1);
  a64=(a64*a1);
  a41=(a59+a64);
  a68=(a68*a1);
  a41=(a41+a68);
  a71=(a71*a1);
  a41=(a41+a71);
  a76=(a25*a41);
  a76=(-a76);
  if (res[0]!=0) res[0][108]=a76;
  a76=(a42*a1);
  a77=(a37*a1);
  a76=(a76+a77);
  a77=(a18*a1);
  a76=(a76+a77);
  a77=(a74*a1);
  a76=(a76+a77);
  if (res[0]!=0) res[0][109]=a76;
  if (res[0]!=0) res[0][110]=a31;
  a76=arg[0]? arg[0][45] : 0;
  a77=(a76*a1);
  a78=(a4*a77);
  a79=arg[0]? arg[0][42] : 0;
  a80=(a79*a1);
  a81=(a4*a80);
  a78=(a78+a81);
  a81=arg[0]? arg[0][39] : 0;
  a82=(a81*a1);
  a83=(a4*a82);
  a78=(a78+a83);
  a83=(a63+a66);
  a83=(a83+a70);
  a83=(a83+a73);
  a84=(a25*a83);
  a78=(a78+a84);
  a84=arg[0]? arg[0][36] : 0;
  a85=(a84*a1);
  a86=(a4*a85);
  a78=(a78+a86);
  if (res[0]!=0) res[0][111]=a78;
  a78=(a59+a64);
  a78=(a78+a68);
  a78=(a78+a71);
  a86=(a27*a78);
  a86=(-a86);
  if (res[0]!=0) res[0][112]=a86;
  a86=(a76*a1);
  a87=(a79*a1);
  a86=(a86+a87);
  a87=(a81*a1);
  a86=(a86+a87);
  a87=(a84*a1);
  a86=(a86+a87);
  a86=(-a86);
  if (res[0]!=0) res[0][113]=a86;
  if (res[0]!=0) res[0][114]=a31;
  a30=(a30*a40);
  a60=(a60*a77);
  a30=(a30-a60);
  a58=(a58*a17);
  a54=(a54*a80);
  a58=(a58-a54);
  a30=(a30+a58);
  a50=(a50*a0);
  a46=(a46*a82);
  a50=(a50-a46);
  a30=(a30+a50);
  a38=(a38*a75);
  a28=(a28*a85);
  a38=(a38-a28);
  a30=(a30+a38);
  a30=(-a30);
  if (res[0]!=0) res[0][115]=a30;
  a42=(a42*a1);
  a30=(a27*a42);
  a76=(a76*a1);
  a38=(a25*a76);
  a30=(a30+a38);
  a37=(a37*a1);
  a38=(a27*a37);
  a79=(a79*a1);
  a28=(a25*a79);
  a38=(a38+a28);
  a30=(a30+a38);
  a18=(a18*a1);
  a38=(a27*a18);
  a81=(a81*a1);
  a28=(a25*a81);
  a38=(a38+a28);
  a30=(a30+a38);
  a74=(a74*a1);
  a38=(a27*a74);
  a84=(a84*a1);
  a28=(a25*a84);
  a38=(a38+a28);
  a30=(a30+a38);
  if (res[0]!=0) res[0][116]=a30;
  a30=sin(a7);
  a38=arg[0]? arg[0][71] : 0;
  a28=(a1/a10);
  a50=(a4*a28);
  a46=(a38*a50);
  a46=(a30*a46);
  a7=cos(a7);
  a58=arg[0]? arg[0][70] : 0;
  a54=(a4*a28);
  a60=(a58*a54);
  a60=(a7*a60);
  a46=(a46-a60);
  a46=(a46+a31);
  if (res[0]!=0) res[0][117]=a46;
  a46=(a38*a1);
  a46=(a7*a46);
  a60=(a58*a1);
  a60=(a30*a60);
  a46=(a46+a60);
  if (res[0]!=0) res[0][118]=a46;
  a46=(a1/a10);
  a60=(a38*a46);
  a60=(a30*a60);
  a86=(a58*a46);
  a86=(a7*a86);
  a60=(a60-a86);
  if (res[0]!=0) res[0][119]=a60;
  a60=24358218631252112.;
  a86=arg[0]? arg[0][69] : 0;
  a87=-1.3877787807814460e-17;
  a87=(a87*a1);
  a88=(a86*a87);
  a89=(a60*a88);
  a90=(a58*a89);
  a91=arg[0]? arg[0][11] : 0;
  a91=(a38-a91);
  a13=(a13*a91);
  a90=(a90+a13);
  a90=(a7*a90);
  a13=26445640661418040.;
  a88=(a13*a88);
  a92=(a38*a88);
  a93=arg[0]? arg[0][10] : 0;
  a93=(a58-a93);
  a94=(a6*a93);
  a92=(a92+a94);
  a92=(a30*a92);
  a90=(a90-a92);
  if (res[0]!=0) res[0][120]=a90;
  a6=(a6*a93);
  a93=(a10*a6);
  a90=(a86*a38);
  a92=(a90*a10);
  a94=3.6700698954086952e-01;
  a94=(a94*a1);
  a92=(a92*a94);
  a93=(a93-a92);
  a7=(a7*a93);
  a93=(a86*a58);
  a92=3.3803818954086950e-01;
  a92=(a92*a1);
  a95=(a10*a92);
  a96=(a93*a95);
  a15=(a15*a91);
  a91=(a10*a15);
  a96=(a96+a91);
  a30=(a30*a96);
  a7=(a7-a30);
  if (res[0]!=0) res[0][121]=a7;
  a7=cos(a3);
  a30=(a58*a11);
  a96=(a30*a28);
  a91=(a38*a8);
  a97=(a91*a28);
  a96=(a96+a97);
  a96=(a7*a96);
  a3=sin(a3);
  a97=(a86*a10);
  a91=(a91*a4);
  a97=(a97+a91);
  a30=(a30*a4);
  a97=(a97+a30);
  a97=(a97/a10);
  a97=(a97/a10);
  a97=(a97*a1);
  a28=(a86*a28);
  a97=(a97-a28);
  a97=(a3*a97);
  a96=(a96+a97);
  a96=(-a96);
  if (res[0]!=0) res[0][122]=a96;
  if (res[0]!=0) res[0][123]=a31;
  a96=(a38*a8);
  a97=(a58*a11);
  a96=(a96+a97);
  a96=(a96/a10);
  a96=(a96/a10);
  a96=(a96*a1);
  a96=(a3*a96);
  a96=(-a96);
  if (res[0]!=0) res[0][124]=a96;
  a32=(a32*a40);
  a20=(a20*a77);
  a32=(a32-a20);
  a56=(a56*a17);
  a32=(a32+a56);
  a52=(a52*a80);
  a32=(a32-a52);
  a48=(a48*a0);
  a32=(a32+a48);
  a44=(a44*a82);
  a32=(a32-a44);
  a36=(a36*a75);
  a32=(a32+a36);
  a24=(a24*a85);
  a32=(a32-a24);
  a32=(a7*a32);
  a19=(a19*a62);
  a40=(a61*a40);
  a62=(a25*a40);
  a19=(a19+a62);
  a77=(a61*a77);
  a62=(a27*a77);
  a19=(a19-a62);
  a57=(a57*a65);
  a19=(a19+a57);
  a17=(a55*a17);
  a57=(a25*a17);
  a19=(a19+a57);
  a80=(a55*a80);
  a57=(a27*a80);
  a19=(a19-a57);
  a49=(a49*a69);
  a19=(a19+a49);
  a0=(a47*a0);
  a49=(a25*a0);
  a19=(a19+a49);
  a82=(a47*a82);
  a49=(a27*a82);
  a19=(a19-a49);
  a39=(a39*a72);
  a19=(a19+a39);
  a75=(a29*a75);
  a25=(a25*a75);
  a19=(a19+a25);
  a85=(a29*a85);
  a27=(a27*a85);
  a19=(a19-a27);
  a19=(a3*a19);
  a32=(a32-a19);
  if (res[0]!=0) res[0][125]=a32;
  a32=(a58*a38);
  a19=-2.8968800000000020e-02;
  a19=(a19*a1);
  a32=(a32*a19);
  a27=arg[0]? arg[0][9] : 0;
  a27=(a86-a27);
  a2=(a2*a27);
  a32=(a32+a2);
  a7=(a7*a32);
  a93=(a93*a8);
  a93=(a93*a92);
  a94=(a11*a94);
  a90=(a90*a94);
  a93=(a93-a90);
  a15=(a8*a15);
  a93=(a93+a15);
  a6=(a11*a6);
  a93=(a93+a6);
  a3=(a3*a93);
  a7=(a7-a3);
  if (res[0]!=0) res[0][126]=a7;
  if (res[0]!=0) res[0][127]=a31;
  a7=cos(a26);
  a3=(a33*a63);
  a77=(a10*a77);
  a3=(a3-a77);
  a77=(a53*a66);
  a3=(a3+a77);
  a80=(a10*a80);
  a3=(a3-a80);
  a80=(a45*a70);
  a3=(a3+a80);
  a82=(a10*a82);
  a3=(a3-a82);
  a82=(a34*a73);
  a3=(a3+a82);
  a67=(a35*a67);
  a3=(a3-a67);
  a85=(a10*a85);
  a3=(a3-a85);
  a3=(a7*a3);
  a26=sin(a26);
  a40=(a10*a40);
  a63=(a21*a63);
  a40=(a40-a63);
  a66=(a51*a66);
  a40=(a40-a66);
  a17=(a10*a17);
  a40=(a40+a17);
  a70=(a43*a70);
  a40=(a40-a70);
  a0=(a10*a0);
  a40=(a40+a0);
  a73=(a22*a73);
  a40=(a40-a73);
  a83=(a23*a83);
  a40=(a40+a83);
  a75=(a10*a75);
  a40=(a40+a75);
  a40=(a26*a40);
  a3=(a3-a40);
  if (res[0]!=0) res[0][128]=a3;
  a21=(a21*a59);
  a42=(a61*a42);
  a21=(a21-a42);
  a51=(a51*a64);
  a21=(a21+a51);
  a37=(a55*a37);
  a21=(a21-a37);
  a43=(a43*a68);
  a21=(a21+a43);
  a18=(a47*a18);
  a21=(a21-a18);
  a22=(a22*a71);
  a21=(a21+a22);
  a23=(a23*a78);
  a21=(a21-a23);
  a74=(a29*a74);
  a21=(a21-a74);
  a7=(a7*a21);
  a33=(a33*a59);
  a61=(a61*a76);
  a33=(a33-a61);
  a53=(a53*a64);
  a33=(a33+a53);
  a55=(a55*a79);
  a33=(a33-a55);
  a45=(a45*a68);
  a33=(a33+a45);
  a47=(a47*a81);
  a33=(a33-a47);
  a34=(a34*a71);
  a33=(a33+a34);
  a35=(a35*a41);
  a33=(a33-a35);
  a29=(a29*a84);
  a33=(a33-a29);
  a26=(a26*a33);
  a7=(a7-a26);
  if (res[0]!=0) res[0][129]=a7;
  if (res[0]!=0) res[0][130]=a31;
  if (res[0]!=0) res[0][131]=a31;
  if (res[0]!=0) res[0][132]=a31;
  a31=(-a1);
  if (res[0]!=0) res[0][133]=a31;
  a31=9.3212278260869572e-02;
  if (res[0]!=0) res[0][134]=a31;
  a31=(a38*a8);
  a13=(a13*a31);
  a31=(a58*a11);
  a60=(a60*a31);
  a13=(a13+a60);
  a13=(a13*a87);
  if (res[0]!=0) res[0][135]=a13;
  a95=(a8*a95);
  a13=(a58*a95);
  a10=(a10*a94);
  a94=(a38*a10);
  a13=(a13-a94);
  a13=(a13+a5);
  if (res[0]!=0) res[0][136]=a13;
  a54=(a11*a54);
  a54=(-a54);
  if (res[0]!=0) res[0][137]=a54;
  a54=(a8*a1);
  a54=(-a54);
  if (res[0]!=0) res[0][138]=a54;
  a54=(a11*a46);
  a54=(-a54);
  if (res[0]!=0) res[0][139]=a54;
  a54=2.8968800000000020e-02;
  a54=(a54*a1);
  a13=(a38*a54);
  if (res[0]!=0) res[0][140]=a13;
  a89=(a11*a89);
  a89=(a89+a9);
  if (res[0]!=0) res[0][141]=a89;
  a95=(a86*a95);
  a4=(a4*a19);
  a38=(a38*a4);
  a95=(a95+a38);
  a95=(a95+a12);
  if (res[0]!=0) res[0][142]=a95;
  a50=(a8*a50);
  a50=(-a50);
  if (res[0]!=0) res[0][143]=a50;
  a11=(a11*a1);
  if (res[0]!=0) res[0][144]=a11;
  a46=(a8*a46);
  a46=(-a46);
  if (res[0]!=0) res[0][145]=a46;
  a54=(a58*a54);
  if (res[0]!=0) res[0][146]=a54;
  a8=(a8*a88);
  a8=(a8+a14);
  if (res[0]!=0) res[0][147]=a8;
  a58=(a58*a4);
  a86=(a86*a10);
  a58=(a58-a86);
  a58=(a58+a16);
  if (res[0]!=0) res[0][148]=a58;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_jac_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "jac_g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


