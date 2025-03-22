#include <iostream>
#define pre_tax_rate 0.15

int main(){
    std::cout<<"The program analizes product sales and inventary to a store"<<std::endl;
    std::cout<<"C++ is a compiled language"<<std::endl;

    std::string productName;
    int productCategory;
    int initial_inventory_quantity;
    float product_price_per_unit;
    int number_of_item_sold;

    int newInventory;
    float total_sales_amount;
    std::string inventoryStatus;

    float sample_product_price;
    sample_product_price = 40.00;
    int sample_number_of_item{123};
    int sample_initial_inventory_quantity = 987;

    auto salesCopy = total_sales_amount;
    decltype(initial_inventory_quantity) inventoryCopy;

    const float TAX_RATES = 0.15;

    std::cout<<"Enter in the product name?:";
    std::getline(std::cin,productName);
    std::cout<<"category 1 : electronics\nCategory 2: Groceries\nCategory 3: Clothing\nCategory 4: Stationery\nCategory 5: Miscellaneous\nEnter in the product category from one to five?:";//*
    std::cin>> productCategory;
    std::cout<<"Enter in the initial inventory quantity?:";
    std::cin>> initial_inventory_quantity;
    std::cout<<"Enter in the product price?:";
    std::cin>> product_price_per_unit;
    std::cout<<"Enter in the number of items sold? reminder!!! we only have " <<initial_inventory_quantity<<":" ;
    std::cin>> number_of_item_sold;

    newInventory = initial_inventory_quantity - number_of_item_sold;
    total_sales_amount = number_of_item_sold * product_price_per_unit;

    if (newInventory < 10){
      inventoryStatus = "low inventory";
    }
    else{
      inventoryStatus = "sufficient inventory";
    }


    if (productCategory == 1){
      std::cout<<"you have sellected electronics"<<std::endl;
    }
    else if (productCategory == 2){
      std::cout<<"you have sellected groceries"<<std::endl;
    }
    else if (productCategory == 3){
      std::cout<<"you have sellected clothing"<<std::endl;
    }
    else if (productCategory == 4){
      std::cout<<"you have sellected stationery"<<std::endl;
    }
    else if (productCategory == 5){
      std::cout<<"you have sellected miscellaneous"<<std::endl;
    }
    else{
      std::cout<<"please sellect number bettwen 1 and 5"<<std::endl;
    }


    switch (productCategory){
    case 1:
       std::cout<<"you have sellected electronics"<<std::endl;
      break;
    case 2:
       std::cout<<"you have sellected groceries"<<std::endl;
      break;
    case 3:
       std::cout<<"you have sellected clothing"<<std::endl;
      break;
    case 4:
       std::cout<<"you have sellected stationery"<<std::endl;
      break;
    case 5:
       std::cout<<"you have sellected miscellaneous"<<std::endl;
      break;
    default:
       std::cout<<"please sellect number bettwen 1 and 5"<<std::endl;
      break;
    }


    std::cout<<"receipt"<<std::endl;
    for (int i = 1; i <= number_of_item_sold; i++){
      std::cout<<"product "<<i<<"--"<<product_price_per_unit<<" BIRR"<<std::endl;
    }


    std::cout<<pre_tax_rate<<std::endl;
    std::cout<<TAX_RATES<<std::endl;
    /*additional*/ std::cout<<"Total including VAT:"<<total_sales_amount * TAX_RATES + total_sales_amount<<std::endl;
    std::cout << "Product Summary:"<<std::endl;
    std::cout << "Product Name: " << productName <<std::endl;
    std::cout << "Product Category: " << productCategory  <<std::endl;
    std::cout << "Initial Inventory: " << initial_inventory_quantity <<std::endl;
    std::cout << "Product Price: " <<product_price_per_unit<<" BIRR"<<std::endl;
    std::cout << "Items Sold: " << number_of_item_sold<<std::endl;
    std::cout << "New Inventory: " << newInventory <<std::endl;
    std::cout << "Total Sales: " << total_sales_amount <<" BIRR"<<std::endl;
    std::cout << "Inventory Status: " << inventoryStatus <<std::endl;
    std::cout << "Sales Copy (auto): " << salesCopy << std::endl;
    std::cout << "Inventory Copy (decltype): " << inventoryCopy <<std::endl;
    std::cout << "Sample Price: " << sample_product_price <<" BIRR"<< std::endl;
    std::cout << "Sample Quantity: " << sample_initial_inventory_quantity << std::endl;

    return 0;
}
