#include <iostream>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print_struct(struct box *b) {
    cout << "Box name: " << b->maker << "\nBox height: " << b->height << "\nBox width: " << b->width
         << "\nBox length: " << b->length << "\nBox volume: " << b->volume << endl;
}

void func(struct box *b) {
    b->volume = b->height * b->width * b->length;
}

int main() {
    struct box *b;
    cout << "Enter box name: ";
    cin >> b->maker;
    cout << "Enter height, width and length: ";
    cin >> b->height >> b->width >> b->length;
    func(b);
    print_struct(b);
    return 0;
}
