#include <iostream>

using namespace std;

int main()
{
    int LEN = 5;
    unsigned char * bases = new unsigned char[ LEN ];
    for( int order = 1; order < LEN; order++ )
    {
        for( int j = 0; j <= order; j++ )
            bases[ j ] = j;

        for( ;; )
        {
            for( int k = 0; k <= order; k++ )
                std::cout<<( int )bases[ k ];
            
            std::cout<<"\n";
            
            if( bases[ 0 ] + order == LEN)
                break;
            
            for( int p = order; p >= 0; p-- )
            {
                if( bases[ p ] - p < LEN - order )
                {
                    bases[ p ]++;
                    	//if( p != order )
                        for( int c = p; c < order; c++ )
                           bases[ c + 1 ] = bases[ c ] + 1;
                    break;
                }
            }
        }
    }




return 0;
}