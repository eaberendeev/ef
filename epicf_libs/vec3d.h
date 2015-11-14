#ifndef _VEC_H_
#define _VEC_H_

#include <stdio.h>
#include <hdf5.h>

typedef struct {
    double x[3];
} Vec3d;

Vec3d vec3d_init( double x, double y, double z );
Vec3d vec3d_zero( );
double vec3d_x( Vec3d v );
double vec3d_y( Vec3d v );
double vec3d_z( Vec3d v );
Vec3d vec3d_negate( Vec3d v );
Vec3d vec3d_add( Vec3d v1, Vec3d v2 );
Vec3d vec3d_sub( Vec3d v1, Vec3d v2 );
double vec3d_dot_product( Vec3d v1, Vec3d v2 );
Vec3d vec3d_cross_product( Vec3d v1, Vec3d v2 );
Vec3d vec3d_times_scalar( Vec3d v, double a );
void vec3d_print( Vec3d v );
hid_t vec3d_hdf5_compound_type_for_memory();
hid_t vec3d_hdf5_compound_type_for_file();


#endif /* _VEC_H_ */