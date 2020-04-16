typedef unsigned char src_t;
typedef long long dest_t;

dest_t func(src_t *sp, dest_t *dp)
{
    *dp = (dest_t)*sp;
    return *dp;
}