#include "Fantassin.hpp"
#include "Unité.hpp"
#include<string>
using namespace std;
 
Fantassin::Fantassin() : prix(10),vie(10),attaque(4),porteeMin(1),porteeMax(1)

{


}
 

bool Fantassin::estSuperSoldat(Fantassin f )
{

if (f/*victorieux contre autre F)*/ ) return true;
else return false;

}
