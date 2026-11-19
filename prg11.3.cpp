//Program 11.3 – Templates with multiple type parameters (generic Pair)
#include <iostream>
#include <string>
using namespace std;

// class template with TWO independent type parameters
template <typename K, typename V>
struct Pair {
    K key; V value;
    void show() const { cout << key << " -> " << value << endl; }
};
template <typename A, typename B>
auto bigger(A a, B b) { return (a > b) ? a : b; }

int main() {
    Pair<string,int> p{"ECE", 121};  
    p.show();
    Pair<int,double> q{7, 3.5};       
    q.show();
    cout << "bigger(3, 9.5) = " << bigger(3, 9.5) << endl;  // -> 9.5
    return 0;
}