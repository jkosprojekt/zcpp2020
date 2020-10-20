#include <iostream>
#include <string>
using namespace std;

template<typename T,typename Y>
auto add1(T a, Y b)
{
    return a + b;
}

int main()
{
    int q = 10;
    int w = 23;
    float e = 1.55;
    double r = 31.8933;
    std::string t = "aaaaa";
    std::string y = "beeee";

    cout << add1(q, w)  << endl;
    cout << add1(w, e)  << endl;
    cout << add1(e, r)  << endl;
    cout << add1(t, y)  << endl;
}
