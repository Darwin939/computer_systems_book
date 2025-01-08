

long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y) {
  long result;
  if (x < y) {
    goto y_ge_x;
  }
  ge_cnt++;
  result = y -x;
  return result;

  y_ge_x:
  lt_cnt++;
  result = y -x;
  return result;
}

