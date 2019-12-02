#pragma once
#include "Vec.h"
#include "Mat.h"
#include "Cmat.h"
#include "Cmat3.h"
#include "Svec.h"
#include "Dvec.h"
#include "Scmat.h"
#include "Dcmat.h"
#include "compare.h"
#include "copy.h"
#include "scalar_arith.h"
#include "slice_arith.h"

namespace slisc {
#include "Size.inl"
#include "min_max_v.inl"
#include "min_max.inl"
#include "resize_cpy.inl"
#include "linspace_vss.inl"
#include "linspace.inl"
#include "reorder.inl"
#include "trans.inl"
#include "trans2.inl"
#include "mul_mv.inl"
#include "mul_gen.inl"
#include "mul_sym.inl"
} // namespace slisc
