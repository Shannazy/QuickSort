#include <iostream>
#include <array>
#include <QuickSorting.h>
#include <utility>

using namespace std;

int main()
{
   int Y[]={28,15,23,65,78,10,15,14,36,0,15,2,6,3};
   cout<<endl;
   int start = 0;
   int last=(sizeof(Y)/sizeof(Y[0]))-1;
 QuickSorting myObject;
 myObject.actualSort(Y,start,last);
for( int k=start;k<=last;k++){
                cout<<" "<<Y[k];
            }

}

