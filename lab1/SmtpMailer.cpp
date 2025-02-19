#include <iostream>
#include <string>

using namespace std;

class Logger
{
public:
    virtual void Log(string logText)
    {
        cout << "[Logger] " << logText << endl;
    }
};

class FileLogger : public Logger
{
public:
    void Log(string logText) override
    {
        cout << "[FileLogger] Saved in File: " << logText << endl;
    }
};

class DatabaseLogger : public Logger
{
public:
    void Log(string logText) override
    {
        cout << "[DatabaseLogger] Saved in DataBase: " << logText << endl;
    }
};

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
        cout << "[SmtpMailer] Sent mail: " << message << endl;
        logger->Log("Mail will send: " + message);
    }
};

int main()
{
    FileLogger fileLogger;
    DatabaseLogger dbLogger;

    cout << "\n TEST FileLogger \n" << endl;
    SmtpMailer mailer1(&fileLogger);
    mailer1.SendMessage("1-st test mail!");

    cout << "\n TEST DatabaseLogger \n" << endl;
    SmtpMailer mailer2(&dbLogger);
    mailer2.SendMessage("2-nd test mail!");

    return 0;
}
