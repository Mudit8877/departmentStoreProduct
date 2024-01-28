#include <iostream>
#include <string.h>
#define NumberOfProducts 4
using namespace std;

class ProductData
{
public:
    //Kitchen products details
    string kitchenProductName[NumberOfProducts] = {
        "Garam Masala",
        "Chicken Masala",
        "Ginger Paste",
        "Onion",
    };

    float kitchenProductPrice[NumberOfProducts] = {
        78,
        82,
        120,
       30,
    };

    //Clothes products details
    string clothesProductName[NumberOfProducts] = {
        "T-shirts",
        "Shirts",
        "Pants",
        "jacket",
    };

    float clothesProductPrice[NumberOfProducts] = {
        150,
        250,
        180,
        400,
    };

    //Electronic products details
    string electronicProductName[NumberOfProducts] = {
        "Charger",
        "Keyboard",
        "Mouse",
        "Usb Cable",
    };

    float electronicProductPrice[NumberOfProducts] = {
        100,
        999,
        400,
        50,
    };

    //Cold Drinks products details
    string coolDrinkProductName[NumberOfProducts] = {
        "Sting 300ml",
        "CocoCola 250ml",
        "ThumsUp 250ml",
        "Diet Pepsi 500ml",
    };

    float coolDrinkProductPrice[NumberOfProducts] = {
        20,
        20,
        20,
        20,
    };

public:
    void getKitchenProducts()
    {
        int i;
        for (i = 0; i < NumberOfProducts; i++)
        {
            cout << "\t\t\t\t" << i + 1 << ". " << kitchenProductName[i] << " ---->  Rs." << kitchenProductPrice[i] << "\n\n";
        }
        cout << "\t\t\t\t" << i + 1 << ". Go back\n\n";
    }

    void getClothesProducts()
    {
        int i;
        for (i = 0; i < NumberOfProducts; i++)
        {
            cout << "\t\t\t\t" << i + 1 << ". " << clothesProductName[i] << " ---->  Rs." << clothesProductPrice[i] << "\n\n";
        }
        cout << "\t\t\t\t" << i + 1 << ". Go back\n\n";
    }
    void getElectronicProducts()
    {
        int i;
        for (i = 0; i < NumberOfProducts; i++)
        {
            cout << "\t\t\t\t" << i + 1 << ". " << electronicProductName[i] << " ---->  Rs." << electronicProductPrice[i] << "\n\n";
        }
        cout << "\t\t\t\t" << i + 1 << ". Go back\n\n";
    }
    void getColdDrinkProducts()
    {
        int i;
        for (i = 0; i < NumberOfProducts; i++)
        {
            cout << "\t\t\t\t" << i + 1 << ". " << coolDrinkProductName[i] << " ---->  Rs." << coolDrinkProductPrice[i] << "\n\n";
        }
        cout << "\t\t\t\t" << i + 1 << ". Go back\n\n";
    }
};
