/* by . Zhang Tang.
 * the code is only for learning and studying , please don't use it in shoping.
 *  Thanks
 *  this code is header file 
 *  Vectors in C plus plus
*/
#pragma once
#ifndef _VECTORPRO_H_
#define _VECTORPRO_H_

#include <iostream>
#include <cmath>

typedef struct vectorpro{
    int x;
    int y;
    int z;
}vec;

class VectorPro{
    public:
        VectorPro();
        ~VectorPro();
        VectorPro::VectorPro(const VectorPro& V);
        VectorPro::VectorPro(int x, int y, int z);
        friend std::ostream& operator<<(std::ostream& out, VectorPro& V);
        friend std::istream& operator>>(std::istream& in, VectorPro& V);
        friend bool operator==(const VectorPro& V, const VectorPro& V_1);
        VectorPro operator=(const VectorPro& V);
        double vec_use_length() const;
        double vec_use_PointByFigures(const VectorPro& V) const;
        double vec_use_PointByPaints(const VectorPro& V);
        double vec_use_Angle(const VectorPro& V) const;
        double vec_use_CrossByFigures(const VectorPro& V) const;
        double vec_use_CrossByPaints(const VectorPro& V);
        VectorPro vec_math_Add(const VectorPro& V);
        VectorPro vec_math_Del(const VectorPro& V);
        VectorPro vec_math_VecMulInt(int M);
        VectorPro vec_math_VecDivInt(int D);
    private:
        vec v;
};

#endif