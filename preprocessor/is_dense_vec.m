function ret = is_dense_vec(type)
ret = is_Vector(type) || is_FixVec(type) ||...
    is_Svector(type) || is_Svector_c(type);
end
