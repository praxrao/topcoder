#include <algorithm>
using namespace std;

class ABBA
{
public:
    string canObtain( string initial, string target )
    {
        if ( ( initial.length() < 1 ) || ( initial.length() >= 1000 ) ||
             ( target.length() < 2 ) || ( target.length() >= 1001 ) ||
             ( initial.length() > target.length() ) )
        {
            return "Impossible";
        }
        else if ( target.back() == 'A' )
        {
            target.pop_back();
            return ( target == initial ) ?"Possible" :this->canObtain( initial, target );
        }
        else if ( target.back() == 'B' )
        {
            target.pop_back();
            std::reverse( target.begin(), target.end() );
            return ( target == initial ) ?"Possible" :this->canObtain( initial, target );
        }
        else
        {
            return "Impossible";
        }
    }
};
