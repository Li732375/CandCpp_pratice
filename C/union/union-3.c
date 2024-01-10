#include <stdio.h>
#include <string.h>
 
typedef enum {BOOK, KEYCHAIN, T_SHIRT} Type;
enum color {red, gold, silver, black, blue, brown};
enum _size {XS, S, M, L, XL, XXL, XXXL};
typedef enum _size Size;
 
typedef struct {
  int stock_number;
  float price;
  Type type;
  union
  {
    char author[20];
    enum color color;
    Size size;
  } attribute;
} Product;
 
int main()
{
  Product littlePrince;
  Product bubbleBear;
  Product transformer;
 
  littlePrince.stock_number=10;
  littlePrince.price = 280.0;
  littlePrince.type = BOOK;
  strcpy(littlePrince.attribute.author, "Antoine");
 
  bubbleBear.stock_number=20;
  bubbleBear.price = 55.0;
  bubbleBear.type = KEYCHAIN;
  bubbleBear.attribute.color = gold;
 
  transformer.stock_number=23;
  transformer.price = 350.0;
  transformer.type = T_SHIRT;
  transformer.attribute.size = L;
 
  return 0;
}