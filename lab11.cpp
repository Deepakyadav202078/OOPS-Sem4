#include <iostream>
using namespace std;

class Math
{
    public:
    Math()
    {
        cout<<"Constructor Made"<<endl;
    }
    ~Math()
    {
        cout<<"Destructor Made";
    }
};

int main()
{
    Math m;
    return 0;
}
