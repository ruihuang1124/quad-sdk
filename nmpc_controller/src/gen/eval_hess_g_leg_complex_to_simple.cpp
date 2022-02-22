/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_hess_g_leg_complex_to_simple_ ## ID
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
#define casadi_s3 CASADI_PREFIX(s3)

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

static const casadi_int casadi_s0[64] = {60, 1, 0, 60, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59};
static const casadi_int casadi_s1[32] = {28, 1, 0, 28, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
static const casadi_int casadi_s2[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s3[136] = {60, 60, 0, 10, 20, 30, 37, 57, 70, 70, 70, 70, 72, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 4, 5, 37, 38, 40, 41, 43, 44, 46, 47, 4, 5, 36, 38, 39, 41, 42, 44, 45, 47, 4, 5, 36, 37, 39, 40, 42, 43, 45, 46, 3, 4, 9, 10, 11, 58, 59, 4, 5, 9, 10, 11, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 57, 58, 59, 5, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 10, 11, 11};

/* eval_hess_g_leg_complex_to_simple:(w[60],lambda[28],p[14])->(hess_g[60x60,73nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][46] : 0;
  a1=arg[1]? arg[1][9] : 0;
  a2=(a0*a1);
  a3=arg[0]? arg[0][4] : 0;
  a4=cos(a3);
  a5=(a2*a4);
  a6=arg[0]? arg[0][43] : 0;
  a7=(a6*a1);
  a8=(a7*a4);
  a5=(a5+a8);
  a8=arg[0]? arg[0][40] : 0;
  a9=(a8*a1);
  a10=(a9*a4);
  a5=(a5+a10);
  a10=arg[0]? arg[0][5] : 0;
  a11=sin(a10);
  a12=arg[0]? arg[0][47] : 0;
  a13=(a12*a1);
  a14=sin(a3);
  a15=(a13*a14);
  a16=arg[0]? arg[0][44] : 0;
  a17=(a16*a1);
  a18=(a17*a14);
  a19=(a15+a18);
  a20=arg[0]? arg[0][41] : 0;
  a21=(a20*a1);
  a22=(a21*a14);
  a19=(a19+a22);
  a23=arg[0]? arg[0][38] : 0;
  a24=(a23*a1);
  a25=(a24*a14);
  a19=(a19+a25);
  a26=(a11*a19);
  a5=(a5-a26);
  a26=arg[0]? arg[0][37] : 0;
  a27=(a26*a1);
  a28=(a27*a4);
  a5=(a5+a28);
  a5=(-a5);
  if (res[0]!=0) res[0][0]=a5;
  a5=cos(a3);
  a28=(a5*a13);
  a29=(a5*a17);
  a30=(a28+a29);
  a31=(a5*a21);
  a30=(a30+a31);
  a32=(a5*a24);
  a30=(a30+a32);
  a33=cos(a10);
  a34=(a30*a33);
  a35=arg[1]? arg[1][10] : 0;
  a12=(a12*a35);
  a16=(a16*a35);
  a36=(a12+a16);
  a20=(a20*a35);
  a36=(a36+a20);
  a23=(a23*a35);
  a36=(a36+a23);
  a37=sin(a10);
  a38=(a36*a37);
  a34=(a34-a38);
  a34=(-a34);
  if (res[0]!=0) res[0][1]=a34;
  a34=arg[1]? arg[1][11] : 0;
  a38=sin(a3);
  a39=(a1*a38);
  a39=(a34-a39);
  if (res[0]!=0) res[0][2]=a39;
  a39=(a5*a11);
  a39=(a1*a39);
  a40=cos(a10);
  a41=(a35*a40);
  a39=(a39+a41);
  a39=(-a39);
  if (res[0]!=0) res[0][3]=a39;
  a39=(a1*a38);
  a39=(a34-a39);
  if (res[0]!=0) res[0][4]=a39;
  a39=(a5*a11);
  a39=(a1*a39);
  a41=(a35*a40);
  a39=(a39+a41);
  a39=(-a39);
  if (res[0]!=0) res[0][5]=a39;
  a39=(a1*a38);
  a39=(a34-a39);
  if (res[0]!=0) res[0][6]=a39;
  a39=(a5*a11);
  a39=(a1*a39);
  a41=(a35*a40);
  a39=(a39+a41);
  a39=(-a39);
  if (res[0]!=0) res[0][7]=a39;
  a39=(a1*a38);
  a39=(a34-a39);
  if (res[0]!=0) res[0][8]=a39;
  a39=(a5*a11);
  a39=(a1*a39);
  a41=(a35*a40);
  a39=(a39+a41);
  a39=(-a39);
  if (res[0]!=0) res[0][9]=a39;
  a39=arg[0]? arg[0][45] : 0;
  a41=(a39*a1);
  a42=(a41*a4);
  a43=arg[0]? arg[0][42] : 0;
  a44=(a43*a1);
  a45=(a44*a4);
  a42=(a42+a45);
  a45=arg[0]? arg[0][39] : 0;
  a46=(a45*a1);
  a47=(a46*a4);
  a42=(a42+a47);
  a47=(a15+a18);
  a47=(a47+a22);
  a47=(a47+a25);
  a48=(a40*a47);
  a42=(a42-a48);
  a48=arg[0]? arg[0][36] : 0;
  a49=(a48*a1);
  a50=(a49*a4);
  a42=(a42+a50);
  if (res[0]!=0) res[0][10]=a42;
  a42=(a12+a16);
  a42=(a42+a20);
  a42=(a42+a23);
  a50=(a42*a33);
  a51=(a28+a29);
  a51=(a51+a31);
  a51=(a51+a32);
  a52=(a51*a37);
  a50=(a50+a52);
  a50=(-a50);
  if (res[0]!=0) res[0][11]=a50;
  a50=(a1*a38);
  a50=(a50-a34);
  if (res[0]!=0) res[0][12]=a50;
  a50=(a5*a40);
  a50=(a1*a50);
  a52=(a35*a11);
  a50=(a50-a52);
  if (res[0]!=0) res[0][13]=a50;
  a50=(a1*a38);
  a50=(a50-a34);
  if (res[0]!=0) res[0][14]=a50;
  a50=(a5*a40);
  a50=(a1*a50);
  a52=(a35*a11);
  a50=(a50-a52);
  if (res[0]!=0) res[0][15]=a50;
  a50=(a1*a38);
  a50=(a50-a34);
  if (res[0]!=0) res[0][16]=a50;
  a50=(a5*a40);
  a50=(a1*a50);
  a52=(a35*a11);
  a50=(a50-a52);
  if (res[0]!=0) res[0][17]=a50;
  a50=(a1*a38);
  a50=(a50-a34);
  if (res[0]!=0) res[0][18]=a50;
  a50=(a5*a40);
  a50=(a1*a50);
  a52=(a35*a11);
  a50=(a50-a52);
  if (res[0]!=0) res[0][19]=a50;
  a50=(a11*a14);
  a52=(a41*a50);
  a53=(a40*a14);
  a54=(a2*a53);
  a52=(a52-a54);
  a54=(a11*a14);
  a55=(a44*a54);
  a56=(a40*a14);
  a57=(a7*a56);
  a55=(a55-a57);
  a52=(a52+a55);
  a55=(a11*a14);
  a57=(a46*a55);
  a58=(a40*a14);
  a59=(a9*a58);
  a57=(a57-a59);
  a52=(a52+a57);
  a57=(a11*a14);
  a59=(a49*a57);
  a60=(a40*a14);
  a61=(a27*a60);
  a59=(a59-a61);
  a52=(a52+a59);
  a52=(-a52);
  if (res[0]!=0) res[0][20]=a52;
  a52=(a5*a37);
  a59=(a2*a52);
  a0=(a0*a35);
  a61=(a0*a33);
  a39=(a39*a35);
  a62=(a39*a37);
  a61=(a61-a62);
  a59=(a59+a61);
  a61=(a5*a33);
  a62=(a41*a61);
  a59=(a59+a62);
  a62=(a5*a37);
  a63=(a7*a62);
  a6=(a6*a35);
  a64=(a6*a33);
  a43=(a43*a35);
  a65=(a43*a37);
  a64=(a64-a65);
  a63=(a63+a64);
  a64=(a5*a33);
  a65=(a44*a64);
  a63=(a63+a65);
  a59=(a59+a63);
  a63=(a5*a37);
  a65=(a9*a63);
  a8=(a8*a35);
  a66=(a8*a33);
  a45=(a45*a35);
  a67=(a45*a37);
  a66=(a66-a67);
  a65=(a65+a66);
  a66=(a5*a33);
  a67=(a46*a66);
  a65=(a65+a67);
  a59=(a59+a65);
  a65=(a5*a37);
  a67=(a27*a65);
  a26=(a26*a35);
  a68=(a26*a33);
  a48=(a48*a35);
  a69=(a48*a37);
  a68=(a68-a69);
  a67=(a67+a68);
  a68=(a5*a33);
  a69=(a49*a68);
  a67=(a67+a69);
  a59=(a59+a67);
  if (res[0]!=0) res[0][21]=a59;
  a59=(a35*a40);
  a67=(a5*a11);
  a67=(a1*a67);
  a59=(a59+a67);
  if (res[0]!=0) res[0][22]=a59;
  a59=(a35*a11);
  a67=(a5*a40);
  a67=(a1*a67);
  a59=(a59-a67);
  if (res[0]!=0) res[0][23]=a59;
  a59=(a35*a40);
  a67=(a5*a11);
  a67=(a1*a67);
  a59=(a59+a67);
  if (res[0]!=0) res[0][24]=a59;
  a59=(a35*a11);
  a67=(a5*a40);
  a67=(a1*a67);
  a59=(a59-a67);
  if (res[0]!=0) res[0][25]=a59;
  a59=(a35*a40);
  a67=(a5*a11);
  a67=(a1*a67);
  a59=(a59+a67);
  if (res[0]!=0) res[0][26]=a59;
  a59=(a35*a11);
  a67=(a5*a40);
  a67=(a1*a67);
  a59=(a59-a67);
  if (res[0]!=0) res[0][27]=a59;
  a59=(a35*a40);
  a67=(a5*a11);
  a67=(a1*a67);
  a59=(a59+a67);
  if (res[0]!=0) res[0][28]=a59;
  a59=(a35*a11);
  a67=(a5*a40);
  a67=(a1*a67);
  a59=(a59-a67);
  if (res[0]!=0) res[0][29]=a59;
  a59=4.3125046780173909e-01;
  a67=arg[0]? arg[0][58] : 0;
  a69=arg[0]? arg[0][10] : 0;
  a67=(a67-a69);
  a70=arg[2]? arg[2][0] : 0;
  a71=(a34/a70);
  a72=(a67*a71);
  a72=(a59*a72);
  a73=(a5*a72);
  a74=arg[0]? arg[0][9] : 0;
  a75=arg[0]? arg[0][11] : 0;
  a76=(a74*a75);
  a77=(a76*a5);
  a78=3.6700698954086958e-01;
  a78=(a78*a34);
  a77=(a77*a78);
  a73=(a73-a77);
  a77=22354293482292820.;
  a79=-1.3877787807814460e-17;
  a79=(a79*a35);
  a80=(a74*a79);
  a81=(a77*a80);
  a82=(a69*a81);
  a73=(a73+a82);
  a82=-4.8802931580173908e-01;
  a83=arg[0]? arg[0][59] : 0;
  a83=(a83-a75);
  a70=(a35/a70);
  a84=(a83*a70);
  a84=(a82*a84);
  a73=(a73+a84);
  a84=arg[1]? arg[1][5] : 0;
  a85=(a84/a5);
  a86=(a69*a85);
  a73=(a73-a86);
  a86=arg[1]? arg[1][4] : 0;
  a87=(a75*a86);
  a73=(a73+a87);
  a87=arg[1]? arg[1][3] : 0;
  a88=(a87/a5);
  a89=(a38*a88);
  a90=(a69*a89);
  a73=(a73-a90);
  a90=arg[0]? arg[0][3] : 0;
  a91=sin(a90);
  a73=(a73*a91);
  a91=(a74*a69);
  a92=3.1022814154086947e-01;
  a92=(a92*a34);
  a93=(a5*a92);
  a94=(a91*a93);
  a95=4.8802931580173908e-01;
  a83=(a83*a71);
  a83=(a95*a83);
  a96=(a5*a83);
  a94=(a94+a96);
  a96=26445640661418040.;
  a80=(a96*a80);
  a97=(a75*a80);
  a94=(a94+a97);
  a67=(a67*a70);
  a67=(a59*a67);
  a94=(a94+a67);
  a67=(a75*a85);
  a94=(a94-a67);
  a67=(a69*a86);
  a94=(a94-a67);
  a67=(a38*a88);
  a97=(a75*a67);
  a94=(a94-a97);
  a97=cos(a90);
  a94=(a94*a97);
  a73=(a73+a94);
  a73=(-a73);
  if (res[0]!=0) res[0][30]=a73;
  a73=cos(a90);
  a94=(a76*a14);
  a94=(a78*a94);
  a97=(a72*a14);
  a94=(a94-a97);
  a97=(a85/a5);
  a97=(a97*a14);
  a98=(a69*a97);
  a94=(a94-a98);
  a98=(a88/a5);
  a98=(a98*a14);
  a99=(a38*a98);
  a99=(a87+a99);
  a100=(a69*a99);
  a94=(a94-a100);
  a94=(a73*a94);
  a100=sin(a90);
  a101=(a92*a14);
  a102=(a91*a101);
  a103=(a83*a14);
  a102=(a102+a103);
  a103=(a75*a97);
  a102=(a102+a103);
  a103=(a38*a98);
  a103=(a87+a103);
  a104=(a75*a103);
  a102=(a102+a104);
  a102=(a100*a102);
  a94=(a94+a102);
  if (res[0]!=0) res[0][31]=a94;
  a94=cos(a90);
  a102=(a69*a94);
  a102=(a77*a102);
  a104=sin(a90);
  a105=(a75*a104);
  a105=(a96*a105);
  a102=(a102-a105);
  a102=(a79*a102);
  a105=(a93*a104);
  a105=(a69*a105);
  a106=(a78*a94);
  a106=(a5*a106);
  a106=(a75*a106);
  a105=(a105+a106);
  a102=(a102-a105);
  if (res[0]!=0) res[0][32]=a102;
  a102=(a59*a71);
  a102=(a5*a102);
  a81=(a81-a102);
  a81=(a81-a85);
  a81=(a81-a89);
  a81=(a73*a81);
  a89=(a93*a74);
  a102=(a59*a70);
  a89=(a89-a102);
  a89=(a89-a86);
  a89=(a100*a89);
  a81=(a81-a89);
  if (res[0]!=0) res[0][33]=a81;
  a81=(a5*a74);
  a81=(a78*a81);
  a89=(a82*a70);
  a81=(a81+a89);
  a86=(a86-a81);
  a73=(a73*a86);
  a86=(a95*a71);
  a86=(a5*a86);
  a80=(a80-a86);
  a80=(a80-a85);
  a80=(a80-a67);
  a100=(a100*a80);
  a73=(a73-a100);
  if (res[0]!=0) res[0][34]=a73;
  a73=(a5*a94);
  a73=(a59*a73);
  a73=(a71*a73);
  a100=(a59*a104);
  a100=(a70*a100);
  a73=(a73-a100);
  if (res[0]!=0) res[0][35]=a73;
  a82=(a82*a94);
  a70=(a70*a82);
  a104=(a5*a104);
  a104=(a95*a104);
  a104=(a71*a104);
  a70=(a70-a104);
  if (res[0]!=0) res[0][36]=a70;
  a70=(a69*a75);
  a104=-5.6778848000000048e-02;
  a104=(a104*a34);
  a70=(a70*a104);
  a34=-1.2102232626086960e-01;
  a82=arg[0]? arg[0][57] : 0;
  a82=(a82-a74);
  a82=(a82*a71);
  a82=(a34*a82);
  a70=(a70+a82);
  a82=arg[2]? arg[2][11] : 0;
  a94=arg[0]? arg[0][0] : 0;
  a73=(a82-a94);
  a100=(a73*a2);
  a70=(a70+a100);
  a100=arg[2]? arg[2][12] : 0;
  a80=arg[0]? arg[0][1] : 0;
  a67=(a100-a80);
  a85=(a67*a41);
  a70=(a70-a85);
  a85=arg[2]? arg[2][8] : 0;
  a86=(a85-a94);
  a81=(a86*a7);
  a70=(a70+a81);
  a81=arg[2]? arg[2][9] : 0;
  a89=(a81-a80);
  a102=(a89*a44);
  a70=(a70-a102);
  a102=arg[2]? arg[2][5] : 0;
  a105=(a102-a94);
  a106=(a105*a9);
  a70=(a70+a106);
  a106=arg[2]? arg[2][6] : 0;
  a107=(a106-a80);
  a108=(a107*a46);
  a70=(a70-a108);
  a108=arg[2]? arg[2][2] : 0;
  a109=(a108-a94);
  a110=(a109*a27);
  a70=(a70+a110);
  a110=arg[2]? arg[2][3] : 0;
  a111=(a110-a80);
  a112=(a111*a49);
  a70=(a70-a112);
  a112=sin(a90);
  a113=(a69*a112);
  a114=(a113*a88);
  a70=(a70-a114);
  a90=cos(a90);
  a114=(a75*a90);
  a115=(a114*a88);
  a70=(a70-a115);
  a115=sin(a3);
  a70=(a70*a115);
  a115=cos(a3);
  a116=(a113*a98);
  a117=(a114*a98);
  a116=(a116+a117);
  a115=(a115*a116);
  a70=(a70+a115);
  a91=(a91*a90);
  a91=(a91*a92);
  a78=(a112*a78);
  a76=(a76*a78);
  a91=(a91-a76);
  a83=(a90*a83);
  a91=(a91+a83);
  a72=(a112*a72);
  a91=(a91+a72);
  a72=(a80*a40);
  a83=(a94*a11);
  a76=(a72-a83);
  a92=(a100*a40);
  a76=(a76-a92);
  a92=(a82*a11);
  a76=(a76+a92);
  a13=(a76*a13);
  a91=(a91+a13);
  a13=arg[2]? arg[2][13] : 0;
  a92=arg[0]? arg[0][2] : 0;
  a13=(a13-a92);
  a2=(a13*a2);
  a115=(a40*a2);
  a91=(a91+a115);
  a41=(a13*a41);
  a115=(a11*a41);
  a91=(a91-a115);
  a115=(a72-a83);
  a116=(a81*a40);
  a115=(a115-a116);
  a116=(a85*a11);
  a115=(a115+a116);
  a17=(a115*a17);
  a91=(a91+a17);
  a17=arg[2]? arg[2][10] : 0;
  a17=(a17-a92);
  a7=(a17*a7);
  a116=(a40*a7);
  a91=(a91+a116);
  a44=(a17*a44);
  a116=(a11*a44);
  a91=(a91-a116);
  a116=(a72-a83);
  a117=(a106*a40);
  a116=(a116-a117);
  a117=(a102*a11);
  a116=(a116+a117);
  a21=(a116*a21);
  a91=(a91+a21);
  a21=arg[2]? arg[2][7] : 0;
  a21=(a21-a92);
  a9=(a21*a9);
  a117=(a40*a9);
  a91=(a91+a117);
  a46=(a21*a46);
  a117=(a11*a46);
  a91=(a91-a117);
  a72=(a72-a83);
  a83=(a110*a40);
  a72=(a72-a83);
  a83=(a108*a11);
  a72=(a72+a83);
  a24=(a72*a24);
  a91=(a91+a24);
  a24=arg[2]? arg[2][4] : 0;
  a24=(a24-a92);
  a27=(a24*a27);
  a40=(a40*a27);
  a91=(a91+a40);
  a49=(a24*a49);
  a11=(a11*a49);
  a91=(a91-a11);
  a11=(a75*a90);
  a40=(a69*a112);
  a11=(a11+a40);
  a11=(a11/a5);
  a40=(a11/a5);
  a92=(a40*a84);
  a91=(a91+a92);
  a92=(a74*a5);
  a83=(a114*a38);
  a92=(a92+a83);
  a83=(a113*a38);
  a92=(a92+a83);
  a92=(a92/a5);
  a83=(a92/a5);
  a117=(a83*a87);
  a91=(a91+a117);
  a88=(a74*a88);
  a91=(a91-a88);
  a88=cos(a3);
  a91=(a91*a88);
  a3=sin(a3);
  a11=(a11/a5);
  a11=(a11*a14);
  a11=(a11/a5);
  a40=(a40/a5);
  a40=(a40*a14);
  a11=(a11+a40);
  a84=(a84*a11);
  a114=(a114*a4);
  a11=(a74*a14);
  a114=(a114-a11);
  a113=(a113*a4);
  a114=(a114+a113);
  a114=(a114/a5);
  a92=(a92/a5);
  a92=(a92*a14);
  a114=(a114+a92);
  a114=(a114/a5);
  a83=(a83/a5);
  a83=(a83*a14);
  a114=(a114+a83);
  a87=(a87*a114);
  a84=(a84+a87);
  a98=(a74*a98);
  a84=(a84-a98);
  a3=(a3*a84);
  a91=(a91+a3);
  a70=(a70+a91);
  a70=(-a70);
  if (res[0]!=0) res[0][37]=a70;
  a70=cos(a10);
  a91=(a41*a14);
  a3=(a82*a15);
  a91=(a91-a3);
  a3=(a85*a18);
  a91=(a91-a3);
  a3=(a44*a14);
  a91=(a91+a3);
  a3=(a102*a22);
  a91=(a91-a3);
  a3=(a46*a14);
  a91=(a91+a3);
  a3=(a108*a25);
  a91=(a91-a3);
  a19=(a94*a19);
  a91=(a91+a19);
  a19=(a49*a14);
  a91=(a91+a19);
  a70=(a70*a91);
  a91=sin(a10);
  a15=(a100*a15);
  a19=(a2*a14);
  a15=(a15-a19);
  a18=(a81*a18);
  a15=(a15+a18);
  a18=(a7*a14);
  a15=(a15-a18);
  a22=(a106*a22);
  a15=(a15+a22);
  a22=(a9*a14);
  a15=(a15-a22);
  a25=(a110*a25);
  a15=(a15+a25);
  a47=(a80*a47);
  a15=(a15-a47);
  a47=(a27*a14);
  a15=(a15-a47);
  a91=(a91*a15);
  a70=(a70-a91);
  if (res[0]!=0) res[0][38]=a70;
  a70=(a78*a14);
  a91=(a75*a70);
  a101=(a90*a101);
  a15=(a69*a101);
  a91=(a91-a15);
  a34=(a34*a4);
  a34=(a71*a34);
  a91=(a91-a34);
  if (res[0]!=0) res[0][39]=a91;
  a91=(a104*a4);
  a75=(a75*a91);
  a101=(a74*a101);
  a75=(a75-a101);
  a101=(a112*a14);
  a59=(a59*a101);
  a59=(a71*a59);
  a75=(a75+a59);
  a101=(a112*a97);
  a75=(a75-a101);
  a99=(a112*a99);
  a75=(a75-a99);
  if (res[0]!=0) res[0][40]=a75;
  a69=(a69*a91);
  a74=(a74*a70);
  a69=(a69+a74);
  a74=(a90*a14);
  a95=(a95*a74);
  a71=(a71*a95);
  a69=(a69+a71);
  a97=(a90*a97);
  a69=(a69-a97);
  a103=(a90*a103);
  a69=(a69-a103);
  if (res[0]!=0) res[0][41]=a69;
  a111=(a111*a4);
  a57=(a24*a57);
  a111=(a111-a57);
  a111=(a1*a111);
  a111=(-a111);
  if (res[0]!=0) res[0][42]=a111;
  a109=(a109*a4);
  a60=(a24*a60);
  a109=(a109-a60);
  a109=(a1*a109);
  if (res[0]!=0) res[0][43]=a109;
  a72=(a72*a14);
  a72=(a1*a72);
  a72=(-a72);
  if (res[0]!=0) res[0][44]=a72;
  a107=(a107*a4);
  a55=(a21*a55);
  a107=(a107-a55);
  a107=(a1*a107);
  a107=(-a107);
  if (res[0]!=0) res[0][45]=a107;
  a105=(a105*a4);
  a58=(a21*a58);
  a105=(a105-a58);
  a105=(a1*a105);
  if (res[0]!=0) res[0][46]=a105;
  a116=(a116*a14);
  a116=(a1*a116);
  a116=(-a116);
  if (res[0]!=0) res[0][47]=a116;
  a89=(a89*a4);
  a54=(a17*a54);
  a89=(a89-a54);
  a89=(a1*a89);
  a89=(-a89);
  if (res[0]!=0) res[0][48]=a89;
  a86=(a86*a4);
  a56=(a17*a56);
  a86=(a86-a56);
  a86=(a1*a86);
  if (res[0]!=0) res[0][49]=a86;
  a115=(a115*a14);
  a115=(a1*a115);
  a115=(-a115);
  if (res[0]!=0) res[0][50]=a115;
  a67=(a67*a4);
  a50=(a13*a50);
  a67=(a67-a50);
  a67=(a1*a67);
  a67=(-a67);
  if (res[0]!=0) res[0][51]=a67;
  a73=(a73*a4);
  a53=(a13*a53);
  a73=(a73-a53);
  a73=(a1*a73);
  if (res[0]!=0) res[0][52]=a73;
  a76=(a76*a14);
  a76=(a1*a76);
  a76=(-a76);
  if (res[0]!=0) res[0][53]=a76;
  if (res[0]!=0) res[0][54]=a34;
  a59=(-a59);
  if (res[0]!=0) res[0][55]=a59;
  a71=(-a71);
  if (res[0]!=0) res[0][56]=a71;
  a71=(a100*a12);
  a0=(a13*a0);
  a71=(a71-a0);
  a0=(a81*a16);
  a71=(a71+a0);
  a6=(a17*a6);
  a71=(a71-a6);
  a6=(a106*a20);
  a71=(a71+a6);
  a8=(a21*a8);
  a71=(a71-a8);
  a8=(a110*a23);
  a71=(a71+a8);
  a42=(a80*a42);
  a71=(a71-a42);
  a26=(a24*a26);
  a71=(a71-a26);
  a26=(a82*a28);
  a71=(a71+a26);
  a41=(a5*a41);
  a71=(a71-a41);
  a41=(a85*a29);
  a71=(a71+a41);
  a44=(a5*a44);
  a71=(a71-a44);
  a44=(a102*a31);
  a71=(a71+a44);
  a46=(a5*a46);
  a71=(a71-a46);
  a46=(a108*a32);
  a71=(a71+a46);
  a30=(a94*a30);
  a71=(a71-a30);
  a49=(a5*a49);
  a71=(a71-a49);
  a49=sin(a10);
  a71=(a71*a49);
  a12=(a82*a12);
  a39=(a13*a39);
  a12=(a12-a39);
  a16=(a85*a16);
  a12=(a12+a16);
  a43=(a17*a43);
  a12=(a12-a43);
  a20=(a102*a20);
  a12=(a12+a20);
  a45=(a21*a45);
  a12=(a12-a45);
  a23=(a108*a23);
  a12=(a12+a23);
  a36=(a94*a36);
  a12=(a12-a36);
  a48=(a24*a48);
  a12=(a12-a48);
  a28=(a100*a28);
  a12=(a12-a28);
  a2=(a5*a2);
  a12=(a12+a2);
  a29=(a81*a29);
  a12=(a12-a29);
  a7=(a5*a7);
  a12=(a12+a7);
  a31=(a106*a31);
  a12=(a12-a31);
  a9=(a5*a9);
  a12=(a12+a9);
  a32=(a110*a32);
  a12=(a12-a32);
  a51=(a80*a51);
  a12=(a12+a51);
  a27=(a5*a27);
  a12=(a12+a27);
  a10=cos(a10);
  a12=(a12*a10);
  a71=(a71+a12);
  a71=(-a71);
  if (res[0]!=0) res[0][57]=a71;
  a71=(a24*a37);
  a71=(a35*a71);
  a68=(a24*a68);
  a68=(a1*a68);
  a71=(a71-a68);
  if (res[0]!=0) res[0][58]=a71;
  a71=(a24*a33);
  a71=(a35*a71);
  a24=(a24*a65);
  a24=(a1*a24);
  a71=(a71+a24);
  a71=(-a71);
  if (res[0]!=0) res[0][59]=a71;
  a71=(a110*a37);
  a24=(a80*a37);
  a65=(a94*a33);
  a68=(a24+a65);
  a71=(a71-a68);
  a68=(a108*a33);
  a71=(a71+a68);
  a71=(a5*a71);
  a71=(a1*a71);
  a80=(a80*a33);
  a94=(a94*a37);
  a68=(a80-a94);
  a108=(a108*a37);
  a68=(a68+a108);
  a110=(a110*a33);
  a68=(a68-a110);
  a68=(a35*a68);
  a71=(a71-a68);
  if (res[0]!=0) res[0][60]=a71;
  a71=(a21*a37);
  a71=(a35*a71);
  a66=(a21*a66);
  a66=(a1*a66);
  a71=(a71-a66);
  if (res[0]!=0) res[0][61]=a71;
  a71=(a21*a33);
  a71=(a35*a71);
  a21=(a21*a63);
  a21=(a1*a21);
  a71=(a71+a21);
  a71=(-a71);
  if (res[0]!=0) res[0][62]=a71;
  a71=(a106*a37);
  a21=(a24+a65);
  a71=(a71-a21);
  a21=(a102*a33);
  a71=(a71+a21);
  a71=(a5*a71);
  a71=(a1*a71);
  a21=(a80-a94);
  a102=(a102*a37);
  a21=(a21+a102);
  a106=(a106*a33);
  a21=(a21-a106);
  a21=(a35*a21);
  a71=(a71-a21);
  if (res[0]!=0) res[0][63]=a71;
  a71=(a17*a37);
  a71=(a35*a71);
  a64=(a17*a64);
  a64=(a1*a64);
  a71=(a71-a64);
  if (res[0]!=0) res[0][64]=a71;
  a71=(a17*a33);
  a71=(a35*a71);
  a17=(a17*a62);
  a17=(a1*a17);
  a71=(a71+a17);
  a71=(-a71);
  if (res[0]!=0) res[0][65]=a71;
  a71=(a81*a37);
  a17=(a24+a65);
  a71=(a71-a17);
  a17=(a85*a33);
  a71=(a71+a17);
  a71=(a5*a71);
  a71=(a1*a71);
  a17=(a80-a94);
  a85=(a85*a37);
  a17=(a17+a85);
  a81=(a81*a33);
  a17=(a17-a81);
  a17=(a35*a17);
  a71=(a71-a17);
  if (res[0]!=0) res[0][66]=a71;
  a71=(a13*a37);
  a71=(a35*a71);
  a61=(a13*a61);
  a61=(a1*a61);
  a71=(a71-a61);
  if (res[0]!=0) res[0][67]=a71;
  a71=(a13*a33);
  a71=(a35*a71);
  a13=(a13*a52);
  a13=(a1*a13);
  a71=(a71+a13);
  a71=(-a71);
  if (res[0]!=0) res[0][68]=a71;
  a71=(a100*a37);
  a24=(a24+a65);
  a71=(a71-a24);
  a24=(a82*a33);
  a71=(a71+a24);
  a71=(a5*a71);
  a71=(a1*a71);
  a80=(a80-a94);
  a82=(a82*a37);
  a80=(a80+a82);
  a100=(a100*a33);
  a80=(a80-a100);
  a35=(a35*a80);
  a71=(a71-a35);
  if (res[0]!=0) res[0][69]=a71;
  a93=(a90*a93);
  a77=(a77*a112);
  a77=(a79*a77);
  a93=(a93+a77);
  if (res[0]!=0) res[0][70]=a93;
  a96=(a96*a90);
  a79=(a79*a96);
  a5=(a5*a78);
  a79=(a79-a5);
  if (res[0]!=0) res[0][71]=a79;
  a38=(a38*a104);
  a104=5.6778848000000048e-02;
  a104=(a104*a1);
  a38=(a38+a104);
  if (res[0]!=0) res[0][72]=a38;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_hess_g_leg_complex_to_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_hess_g_leg_complex_to_simple_n_in(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_hess_g_leg_complex_to_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_hess_g_leg_complex_to_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_hess_g_leg_complex_to_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "lambda";
    case 2: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_hess_g_leg_complex_to_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "hess_g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_hess_g_leg_complex_to_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_hess_g_leg_complex_to_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_hess_g_leg_complex_to_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


