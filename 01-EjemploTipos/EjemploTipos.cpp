/* ASSERT
* NAL
* 20210512
*/
#include <cassert>

int main () {

//Tipo de dato bool
assert (true == true and true);
assert (true == true or false);

//Tipo de dato unsigned
assert (3u + 3u == 6u);
assert (3u * 3u == 9u);

//Tipo de dato Char
assert ('a' == 'a');

//Tipo de dato double
assert (24E10 - 2.4E10*10 < 0.0001);

//Tipo de dato string
assert ("pelota" != "bola");
assert ("pelota" == "pelota");

//Tipo de dato int
assert (1==1);
}