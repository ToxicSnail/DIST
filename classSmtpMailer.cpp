class SmtpMailer
{
private:
    Logger* logger;
public:
    SmtpMailer(Logger* logger) // Передаем зависимость к Логгеру через конструктор
    {
        this->logger = logger;
    }

    void SendMessage(string message)
    {
        
        // Отправка сообщения
    }
};

class Logger
{
public:
    virtual void Log(string logText)
    {
        //...
    }
};

class FileLogger : public Logger
{
public:
    void Log(string logText) override
    {
        // сохранить лог в файле
    }
};

class DatabaseLogger : public Logger
{
public:
    void Log(string logText) override
    {
        // сохранить лог в БД
    }
};

//Идея: 