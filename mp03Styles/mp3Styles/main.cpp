#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;
#include "test3Darrays.h"
#include "create2DarrayCharJaggedFromUser.h"
#include "create3DarrayCharJaggedFromUser.h"

int main()
{
/*
    int** pp = create2Darray1(3, 4);

    if (pp != nullptr) {
        populate(pp, 3, 4);
        traverse(pp, 3, 4);
        freeMemory(pp, 3);
    } else {
        cout << "OUT OF MEMORY" << endl;
        return -111;
    }
}
 */
 
//int ***ppp = create3Darray( 2, 3, 4);
//traverse3DArray( ppp,2, 3, 4);
//intialize3DArray( ppp,2, 3, 4);
//traverse3DArray( ppp,2, 3, 4);
//traverse3DArrayOffsets(ppp,2,3,4);
//traverse3DArrayOffsets2(ppp,2,3,4);
//traverse3DArrayOffsets3( ppp,2,3,4);
//
//delete3DArray( ppp, 2, 3, 4);

//char**pp = create2DarrayChar(3, 4);
//populateChar(pp, 3, 4);
//traverseChar( pp, 3, 4);
//traverseCharSingleLoop(pp, 3);
//freeMemoryChar( pp, 3);

//char**pp = create2DarrayCharJaggedFromUser(3);
//traverseCharJagged( pp, 3);
//freeMemoryCharJagged(pp, 3);

    cout << "=============create3DarrayCharJaggedFromUser==============" << endl;
    char***ppp = create3DarrayCharJaggedFromUser(2, 2);
    cout << "=============traverse3DarrayCharJagged==============" << endl;
    traverse3DCharJagged(ppp, 2, 2);
    cout << "=============sort3DCharJagged==============" << endl;
    sort3DCharJagged(ppp, 2, 2);
    cout << "=============reverse3DCharJagged==============" << endl;
    reverse3DCharJagged(ppp, 2, 2);
    cout << "=============freeMemory3DCharJagged==============" << endl;
    freeMemory3DCharJagged(ppp, 2, 2);
    
    
    
/*
int i =  1;
int const & a = i > 0 ? i : 1;
i =2;
cout << i << a;
 */

//pointer1();
//pointer2();
/*
     
int * p = pointer3();
cout << *p << endl;
delete p;
 */
/*     
traveseArray1(); 
 */
// traveseArray4(); 
//testParamPointer();
//testConstantPointers();
/*
int * p = createArrayOfIntegers( 10 );
for ( int i=0; i < 10; ++i )
{
    cout << p[i] << " ";
    cout << *(p+i) << " " <<  "\t";
}
delete [] p;
 */

/*
  int **pp = create2Darray( 3, 4);
  if ( pp != nullptr )
  {
  traverse2DArray( pp, 3, 4);
  cout << "------------------\n";
  intitialize2DArray( pp, 3, 4);
  traverse2DArray( pp, 3, 4);
  delete2DArray( pp, 3, 4);
  }
  else
      cout << "OUT OF MEMORY\n";
 */
/*
int ***ppp = create3Darray( 2, 3, 4);
traverse3DArray( ppp,2, 3, 4);
intitialize3DArray( ppp,2, 3, 4);
traverse3DArray( ppp,2, 3, 4);
delete3DArray( ppp, 2, 3, 4);
 */



return 0;
}





