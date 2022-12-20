#include<iostream>
using namespace std;
class Rectangle {

public: 
    Rectangle(int width, int height);
    ~Rectangle(){}

    void drawShape() const;
    void drawShape(int width, int height) const;

private:
    int width;
    int height;
};

Rectangle::Rectangle(int newWdith, int newHeight) {

    width = newWdith;
    height = newHeight;
}

void Rectangle::drawShape() const {

  drawShape(width, height);
}

void Rectangle::drawShape(int width, int height) const {

      for (int i = 0; i < height; i++) {

        for (int j = 0; i < height; j++) {

            cout << "*";
        }
        cout << "\n";
      }
}

int main() {

    Rectangle box(30, 5);
    cout << "drawShape(): \n";
    box.drawShape(40, 2);
    return 0;
}