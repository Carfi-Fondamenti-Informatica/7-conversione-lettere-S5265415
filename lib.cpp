#include "lib.h"
bool caratteri(int n){
  if (((n>=65) && (n<=90)) || ((n>=97) && (n<=122))){
    return true;
  }else {
    return false;
  }
