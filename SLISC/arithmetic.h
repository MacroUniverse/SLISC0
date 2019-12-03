#pragma once
#include "copy.h"
#include "scalar_arith.h"
#include "slice_arith.h"

namespace slisc {
#include "Size.inl"
#include "min_max_v.inl"
#include "min_max.inl"
#include "max_abs_v.inl"
#include "max_abs.inl"
#include "mod_vvs_vs.inl"
#include "mod_contain.inl"
#include "norm.inl"
#include "resize_cpy.inl"
#include "linspace_vss.inl"
#include "linspace.inl"
#include "reorder.inl"
#include "trans.inl"
#include "trans2.inl"
#include "plus_minus_times_divide_equals_vv.inl"
#include "contain_plus_minus_times_divide_equals.inl"
#include "plus_minus_times_divide_vvs.inl"
#include "minus_divide_vsv.inl"
#include "plus_minus_times_divide_vvv.inl"
#include "plus_minus_times_divide_contain.inl"
#include "mul_mv.inl"
#include "mul_mm.inl"
#include "mul_gen.inl"
#include "mul_sym.inl"
} // namespace slisc
