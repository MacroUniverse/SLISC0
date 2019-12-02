inline void resize_cpy(VecDoub_IO v, Long_I N)
{
    Long N0 = v.size();
    if (N != N0) {
        if (N0 == 0) {
            v.resize(N); copy(v, 0);
        }
        else if (N == 0)
            v.resize(0);
        else {
            VecDoub v_new(N);
            if (N > N0) {
                veccpy(v_new.ptr(), v.ptr(), N0);
                vecset(v_new.ptr() + N0, 0, N - N0);
            }
            else // N < N0
                veccpy(v_new.ptr(), v.ptr(), N);
            v << v_new;
        }
    }
}

inline void resize_cpy(CmatDoub_IO v, Long_I N1, Long_I N2)
{
    Long N10 = v.n1(), N20 = v.n2(), N0 = N1*N2;
    Long N = N1 * N2;
    if (N1 != N10 || N2 != N20) {
        if (N0 == 0) {
            v.resize(N1, N2); copy(v, 0);
        }
        else if (N == 0)
            v.resize(0, 0);
        else {
            CmatDoub v_new(N1, N2); copy(v_new, 0);
            Long N1min = min(N1, N10), N2min = min(N2, N20);
            DcmatDoub sli; slice(sli, v, 0, N1min, 0, N2min);
            copy(sli, v);
        }
    }
}
