// Prime Number Calculator (1.0) by exosZoldyck

#include <iostream>
using namespace std;

int main()
{
    int limit;
    cout << "Limit: "; cin >> limit; 
    
    int num = 0;
    
    cout << 2 << endl << 3 << endl;
    
    int x = 4, z = 2;
    for (x, num, z; x < limit; x++){
        int y = 2;
        if (z < 101){
            for (y, x, num; y < x/2; y++){
            if (x % y == 0) { num = 1; }
        }}
        else {
            for (y, x, num; y < 20; y++){
            if (x % y == 0) { num = 1; }
        }
        }
        
        if (num == 0 && x != 4) { cout << x << endl; }
        else { num = 0; }
        z++;
    }
}