#include <iostream>
using namespace std;

struct product_record
{
    int product_id;
    float price;
};

product_record create_product(int product_id, float price);

int main()
{
    int product_id;
    float price;

    cin >> product_id;
    cin >> price;

    product_record product_main = create_product(product_id, price);

    cout << "Product ID: " << product_main.product_id << endl;
    cout << "Price: " << product_main.price << endl;

    return 0;
}

product_record create_product(int product_id, float price)
{
    product_record temp_product;
    temp_product.product_id = product_id;
    temp_product.price = price;

    return temp_product;
}