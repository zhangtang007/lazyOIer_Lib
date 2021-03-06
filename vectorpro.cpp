/* by . Zhang Tang.
 * the code is only for learning and studying , please don't use it in shoping.
 *  Thanks
 *  this code is CPP file 
 *  Vectors in C plus plus
*/
#include <iostream>
#include <cmath>
#include "vectorpro.h"

using namespace std;

VectorPro::VectorPro(){}

VectorPro::VectorPro(int x, int y, int z){
    this->v.x = x;
    this->v.y = y;
    this->v.z = z;
}

VectorPro::VectorPro(const VectorPro& V){
    this->v.x = V.v.x;
    this->v.y = V.v.y;
    this->v.z = V.v.z;
}

VectorPro::~VectorPro(){}

std::ostream& operator<<(std::ostream& out, VectorPro& V){
    out << "(" << V.v.x << "," << V.v.y << "," << V.v.z << ")" << endl;
    return out;
}

std::istream& operator>>(std::istream& in, VectorPro& V){
    //cout << "form: x y z: " ; // "you can put the '//' away if you need this."
    in >> V.v.x >> V.v.y >> V.v.z;
    return in;
}

bool operator==(const VectorPro& V, const VectorPro& V_1){
    return (V.v.x == V_1.v.x && V.v.y == V_1.v.y && V.v.z == V_1.v.z);
}

VectorPro VectorPro::operator=(const VectorPro& V){
    this->v.x = V.v.x;
    this->v.y = V.v.y;
    this->v.z = V.v.z;
}

double VectorPro::vec_use_length() const {
    double Tmp_total = pow(this->v.x, 2) + pow(this->v.y, 2) + pow(this->v.z, 2);
    return sqrtf(Tmp_total);
}

double VectorPro::vec_use_PointByFigures(const VectorPro& V) const {
    return (this->v.x*V.v.x + this->v.y*V.v.y + this->v.z*V.v.z);
}

double VectorPro::vec_use_Angle(const VectorPro& V) const {
    double cos = this->vec_use_PointByFigures(V) / (this->vec_use_length()*V.vec_use_length());
    return acosf(cos);
}

double VectorPro::vec_use_PointByPaints(const VectorPro& V){
    return this->vec_use_length() * V.vec_use_length() * cosf(this->vec_use_Angle(V));
}

double VectorPro::vec_use_CrossByFigures(const VectorPro& V) const {
    return (this->v.y*V.v.z + this->v.z*V.v.x + this->v.x*V.v.y - this->v.y*V.v.x - this->v.z*V.v.y - this->v.x*V.v.z);
}

double VectorPro::vec_use_CrossByPaints(const VectorPro& V){
    return this->vec_use_length() * V.vec_use_length() * sinf(this->vec_use_Angle(V));
}

VectorPro VectorPro::vec_math_Add(const VectorPro& V){
    VectorPro Tmp_sum;
    Tmp_sum.v.x = this->v.x + V.v.x;
    Tmp_sum.v.y = this->v.y + V.v.y;
    Tmp_sum.v.z = this->v.z + V.v.z;
    return Tmp_sum;
}

VectorPro VectorPro::vec_math_Del(const VectorPro& V){
    VectorPro Tmp_del;
    Tmp_del.v.x = this->v.x - V.v.x;
    Tmp_del.v.y = this->v.y - V.v.y;
    Tmp_del.v.z = this->v.z - V.v.z;
    return Tmp_del;
}

VectorPro VectorPro::vec_math_VecMulInt(int M){
    VectorPro Tmp_mul;
    Tmp_mul.v.x = this->v.x * M;
    Tmp_mul.v.y = this->v.y * M;
    Tmp_mul.v.z = this->v.z * M;
    return Tmp_mul;
}

VectorPro VectorPro::vec_math_VecDivInt(int D){
    //if(D == 0) {cout << "the fraction's under side can't be zero" << endl; return *this;}// "you can put the '//' away if you need this."
    VectorPro Tmp_div;
    Tmp_div.v.x = this->v.x / D;
    Tmp_div.v.y = this->v.y / D;
    Tmp_div.v.z = this->v.z / D;
    return Tmp_div;
}