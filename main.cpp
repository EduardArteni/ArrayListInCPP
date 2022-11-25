#include <iostream>
using namespace std;

template <typename T>
class ArrayList {
private:
    T* array;
    int maxSize;
    int currentSize;
public:

    int size(){
        return currentSize;
    }
    ArrayList()
    {
        maxSize = 10;
        currentSize = 0;
    }
    ArrayList(int size)
    {
        maxSize = size;
        currentSize = 0;
    }
};

int main()
{
    ArrayList<char> arrayList(10);
    cout<<arrayList.size();
    return 0;
}
