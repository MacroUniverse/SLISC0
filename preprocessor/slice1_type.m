function ret = slice1_type(type)
Ts = contain_type(type);
if is_Cmat(type) || is_Scmat(type) || is_Dcmat(type)
    ret = ['Svec' Ts];
elseif is_Mat(type)
    ret = ['Dvec' Ts];
else
    error('not implemented!');
end
