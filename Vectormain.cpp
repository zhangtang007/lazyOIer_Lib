/* by . Zhang Tang.
 * the code is only for learning and studying , please don't use it in shoping.
 *  Thanks
 *  this code is main CPP file 
 *  Vectors in C plus plus
*/

#include "vectorpro.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv){
    VectorPro vect_t_1(3, 4, 5);
    VectorPro vect_t_2(4, 5, 6);
    VectorPro vect_t_2_copy(vect_t_2);

    cout << vect_t_1 << endl;
    cout << vect_t_2 << endl;
    cout << vect_t_2_copy << endl;

    //insert your code here.

    system("pause");
    return 0;
}