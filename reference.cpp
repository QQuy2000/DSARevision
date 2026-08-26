#include <isostream>

using namespace std;

int main() {
    int a = 10;
    int &r=a; // r is a reference to a, r must be initialized when declared
    // a = 25;
    // r =25;

    int b = 30;
    r = b; // r is a reference to a, so this will change the value of a to 30
    cout<< a<<endl<< r<<endl;
}