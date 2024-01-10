#include <stdio.h>
#include <string.h>
 
typedef enum {BOOK, KEYCHAIN, T_SHIRT} Type;
typedef enum {red, gold, silver, black, blue, brown} Color;
char colorName[][10]={"red", "gold", "silver", "black", "blue", "brown"};
typedef enum {XS, S, M, L, XL, XXL, XXXL} Size;
char sizeName[][5]={"XS", "S", "M", "L", "XL", "XXL", "XXXL"};
 
typedef struct {
  int stock_number;
  float price;
  Type type;
  union
  {
    char author[20];
    Color color;
    Size size;
  } attribute;
} Product;
 
void showInfo(Product p)
{
  printf("Stock Number: %d\n", p.stock_number);
  printf("Price: %.2f\n", p.price);
  switch(p.type)
  {
    case BOOK:
      printf("Author: %s\n", p.attribute.author );
      break;
    case KEYCHAIN:
      printf("Color: %s\n", colorName[p.attribute.color]);
      break;
    case T_SHIRT:
      printf("Size: %s\n", sizeName[p.attribute.size]);
      break;
  }
  printf("\n");
}
 
int main()
{
  Product p[3];
 
  p[0].stock_number=10;
  p[0].price = 280.0;
  p[0].type = BOOK;
  strcpy(p[0].attribute.author, "Antoine");
 
  p[1].stock_number=20;
  p[1].price = 55.0;
  p[1].type = KEYCHAIN;
  p[1].attribute.color = gold;
 
  p[2].stock_number=23;
  p[2].price = 350.0;
  p[2].type = T_SHIRT;
  p[2].attribute.size = L;
 
  showInfo(p[0]);
  showInfo(p[1]);
  showInfo(p[2]);
 
  return 0;
}