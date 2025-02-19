#include <iostream>

class Product
{
public:
    int price;

    /*
    char mail;
    char pass;
    ...
    */

    Product(int price) : price(price) {}
};

class ProductValidator
{
public:
    virtual bool IsValid(const Product& product) const = 0;
    virtual ~ProductValidator() = default;
};

class DefaultProductValidator : public ProductValidator // Обычный валидатор продукта
{
public:
    bool IsValid(const Product& product) const override
    {
        return product.price > 0;
    }
};

class CustomerServiceProductValidator : public ProductValidator // Валидатор для CustomerService
{
public:
    bool IsValid(const Product& product) const override
    {
        return product.price > 100000;
    }
};

bool ValidateProduct(const Product& product, const ProductValidator& validator) // Функция проверки через конкретный валидатор
{
    return validator.IsValid(product);
}

int main()
{
    Product p(100000);
    DefaultProductValidator defaultValidator;
    CustomerServiceProductValidator customerValidator;

    std::cout << "Default validator: " << ValidateProduct(p, defaultValidator) << std::endl;
    std::cout << "CustomerService validator: " << ValidateProduct(p, customerValidator) << std::endl;

    return 0;
}
