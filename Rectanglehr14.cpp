#include<iostream>
using namespace std;
class Rectangle {

public: 
    Rectangle(int width, int height);
    ~Rectangle(){}

    void drawShape() const; // look at book
    void drawShape(int width, int height) const;

private:
    int width;
    int height;
};

Rectangle::Rectangle(int newWidth, int newHeight) {

    width = newWidth;
    height = newHeight;
}

void Rectangle::drawShape() const {

  drawShape(width, height);
}

void Rectangle::drawShape(int width, int height) const {

      for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            cout << "*";
        }
        cout << "\n";
      }
}

int main() {

    Rectangle box(30, 5);
    cout << "drawShape(): \n";
    box.drawShape();
    cout << "\ndrawShape(40,2): \n";
    box.drawShape(40, 2);
    return 0;
}