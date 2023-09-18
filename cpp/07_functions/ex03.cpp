#include <iostream>

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void display_box_data(box);
void set_volume(box *);

using namespace std;

int main()
{
  box b = {"boxington corp.", 5.2f, 4.0f, 10.0f};

  set_volume(&b);
  display_box_data(b);
  return 0;
}

void set_volume(box *b)
{
  b->volume = b->height * b->length * b->width;
}

void display_box_data(box b)
{
  cout << "***box data***\n";
  cout << "maker: " << b.maker << "\nheight: " << b.height << "\nwidth: "
    << b.width << "\nlength: " << b.length << "\nvolume: " << b.volume;
}

