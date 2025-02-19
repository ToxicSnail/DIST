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

class IProductValidator
{
public:
    virtual bool IsValid(const Product& product) const = 0;
    virtual ~IProductValidator() = default;
};

class DefaultProductValidator : public IProductValidator // Обычный валидатор продукта
{
public:
    bool IsValid(const Product& product) const override
    {
        return product.price > 0;
    }
};

class CustomerServiceProductValidator : public IProductValidator // Валидатор для CustomerService
{
public:
    bool IsValid(const Product& product) const override
    {
        return product.price > 100000;
    }
};

bool ValidateProduct(const Product& product, const IProductValidator& validator) // Функция проверки через конкретный валидатор
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
