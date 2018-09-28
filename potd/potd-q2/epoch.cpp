#include "epoch.h"
using namespace std;



int hours(time_t t) {
  return t / 3600 ;
}
int days(time_t t) {
  return t / 86400;
}
int years(time_t t) {
  return t / 31536000;
}
