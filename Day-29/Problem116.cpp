//WAP to create inventory management system

#include <iostream>
#include <algorithm>
using namespace std;

struct Product {
    string productName;
    int quantity;
    double price;
};

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    Product products[100];
    int count = 0;
    int choice;

    do {
        cout << endl;
        cout << "===== INVENTORY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. View All Products" << endl;
        cout << "3. Search Product" << endl;
        cout << "4. Update Stock" << endl;
        cout << "5. Delete Product" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            cin.ignore();

            string name;
            cout << "Enter Product Name: ";
            getline(cin, name);

            bool duplicate = false;

            for(int i = 0; i < count; i++) {
                if(toLower(products[i].productName) == toLower(name)) {
                    duplicate = true;
                    break;
                }
            }

            if(duplicate) {
                cout << "Product Already Exists!" << endl;
                break;
            }

            products[count].productName = name;

            cout << "Enter Quantity: ";
            cin >> products[count].quantity;

            cout << "Enter Price: ";
            cin >> products[count].price;

            count++;

            cout << "Product Added Successfully!" << endl;
            break;
        }

        case 2: {
            if(count == 0) {
                cout << "No Products Available!" << endl;
                break;
            }

            cout << endl;
            cout << "===== PRODUCT LIST =====" << endl;

            for(int i = 0; i < count; i++) {
                cout << "S.No.: " << i + 1 << endl;
                cout << "Product Name: " << products[i].productName << endl;
                cout << "Quantity: " << products[i].quantity << endl;
                cout << "Price: Rs. " << products[i].price << endl;
                cout << endl;
            }

            break;
        }

        case 3: {
            if(count == 0) {
                cout << "No Products Available!" << endl;
                break;
            }

            cin.ignore();

            string name;
            bool found = false;

            cout << "Enter Product Name: ";
            getline(cin, name);

            for(int i = 0; i < count; i++) {
                if(toLower(products[i].productName) == toLower(name)) {

                    cout << endl;
                    cout << "Product Found!" << endl;
                    cout << "Product Name: " << products[i].productName << endl;
                    cout << "Quantity: " << products[i].quantity << endl;
                    cout << "Price: Rs. " << products[i].price << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Product Not Found!" << endl;

            break;
        }

        case 4: {
            if(count == 0) {
                cout << "No Products Available!" << endl;
                break;
            }

            cin.ignore();

            string name;
            bool found = false;

            cout << "Enter Product Name: ";
            getline(cin, name);

            for(int i = 0; i < count; i++) {
                if(toLower(products[i].productName) == toLower(name)) {

                    cout << "Current Quantity: "
                         << products[i].quantity << endl;

                    cout << "Enter New Quantity: ";
                    cin >> products[i].quantity;

                    cout << "Stock Updated Successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Product Not Found!" << endl;

            break;
        }

        case 5: {
            if(count == 0) {
                cout << "No Products Available!" << endl;
                break;
            }

            cin.ignore();

            string name;
            bool found = false;

            cout << "Enter Product Name to Delete: ";
            getline(cin, name);

            for(int i = 0; i < count; i++) {
                if(toLower(products[i].productName) == toLower(name)) {

                    for(int j = i; j < count - 1; j++) {
                        products[j] = products[j + 1];
                    }

                    count--;

                    cout << "Product Deleted Successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Product Not Found!" << endl;

            break;
        }

        case 6:
            cout << "Thank You" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}