from . import sam2_orig

cdef public double calc(double x, double y):
  return sam2_orig.calc_sub(x,y)

