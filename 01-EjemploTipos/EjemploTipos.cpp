/* ASSERT
* NAL
* 20210512
*/
#define NDEBUG
#include <iostream>
#include <cassert>
using namespace std;

int main () {

//Tipo de dato bool
assert (true == true and true);
assert (true == true or false);

//Tipo de dato unsigned
assert (3 + 3 == 6);
assert (3 * 3 == 9);

//Tipo de dato Char
assert ('a' == 'a');

//Tipo de dato double
assert (3.5 != 3.8);

//Tipo de dato string
assert ("pelota" != "bola");
assert ("pelota" == "pelota");
}