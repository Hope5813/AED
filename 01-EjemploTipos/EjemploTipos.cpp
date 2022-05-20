/* ASSERT
* NAL
* 20220520
*/

#include <cassert>
#include <string>
using namespace std::string_literals;

int main (){

    //Tipo de dato boole
    assert (true == true and true);
    assert (true == false or true);
    assert (true == 1);
    assert (false == 0);
    assert (false == false and true);
    assert (false == true or true);
    assert (false == false or false);
    assert (not true == 0);
    assert (not true == true or true);
    assert (not false == false or true);

    //Tipo de dato unsigned
    assert (3u + 3u == 6u);
    assert (3u * 3u != 8u);
    assert (3u / 3u >= 0u);
    assert (3u - 3u <= 1u);
    assert (4u % 2u == 0u); // (%) módulo o resto de una división
    assert (sizeof 0u == 4);// (sizeof) indica espacio en la memoria que ocupa el tipo de dato en cantidad de bits
    assert (sizeof 4'294'967'295u == 4);

    //Tipo de dato Char
    assert ('a' == 'a');
    assert ('d' + 'q' == 213);
    assert ('d' + 'q' <= 215);
    assert ('s' - 'q' >= 1);
    assert ('s' - 'A' == '2');
    assert ('s' - 'A' == 50);
    assert (sizeof 'a' == 1);

    //Tipo de dato double - long double - float
    assert (24E10 - 2.4E10*10 < 0.0001);
    assert (3.52E2 + 5.33E10 >= 0.000000000000000000000000001);
    assert (52.0352 * 2 >= 104.065);
    assert (sizeof 52.0352 == 8);
    assert (3.8 / 2.0 == 1.9);

    //Tipo de dato String
    assert ("pelota"s != "bola"s);
    assert ("pelota"s == "pelota"s);
    assert ("pelota"s.length() == 6);
    assert ("Había "s + "una "s + "vez "s + "truz"s == "Había una vez truz"s);
    assert (sizeof "hola"s == 32);
    assert (sizeof "supercalifragilisticuestpialidoso"s == 32);

    //Tipo de dato Int
    assert (2 == 1 + 1);
    assert (3 * 3 != 8);
    assert (3 / 3 >= 0);
    assert (3 - 4 <= -1);
    assert (4 % 2 == 0); // (%) módulo o resto de una división
    assert (sizeof 0 == 4);// (sizeof) indica espacio en la memoria que ocupa el tipo de dato en cantidad de bits
    assert (sizeof 2'147'483'647 == 4);
    assert (sizeof -2'147'483'647 == 4);
    assert (sizeof 65 == 4);
}