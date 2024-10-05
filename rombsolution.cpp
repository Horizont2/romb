#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.show();  // Тепер працює, викликається єдина версія show() з класу A
    return 0;
}
