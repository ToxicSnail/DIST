// Абстрактный класс сущности
class AbstractEntity (абстрактный класс) {};

// Сущность аккаунт
class AccountEntity : public AbstractEntity 
{   
    // Логика AccountEntity
};

// Сущность Роль
class RoleEntity : public AbstractEntity 
{  
    // Логика RoleEntity
};

// Репозиторий
class Repository 
{ 
public:
    virtual void Save(AbstractEntity* entity) = 0;   
};

// Репозиторий для AccountEntity
class AccountRepository : public Repository 
{
public:
    void Save(AbstractEntity* entity) override 
    {
       // специфические действия для AccountEntity
    }
};

// Репозиторий для RoleEntity
class RoleRepository : public Repository 
{
public:
    void Save(AbstractEntity* entity) override 
    {
        // специфические действия для RoleEntity
    }
};

// Теперь Repository не нужно менять при добавлении новых сущностей и каждая сущность имеет свой собственный репозиторий, отвечающий за сохранение.
// Также условные операторы больше не будут множится в методе Save и тем самым усложнять его.