class ImageStorage 
{
    public:
        static void Save(const Image& image) 
        {
            // Cохранение изображение в файловой системе
        }
    
        static int DeleteDuplicates() 
        {
            // удалить из файловой системы все дублирующиеся изображения и вернуть количество удаленных
        }
    };

class ImageProcessor 
{
    public:
        static Image Resize(const Image& image, int height, int width) 
        {
            // изменение размеров изображения
        }
    
        static Image InvertColors(const Image& image) 
        {
            // изменить цвета на изображении
        }
    };

class ImageDownloader 
{
    public:
        static std::vector<byte> Download(const Url& imageUrl) 
        {
            // загрузка битового массива с изображением с помощью HTTP запроса
        }
    };

class AccountService 
{
    public:
        static void SetImageAsAccountPicture(const Image& image, const Account& account) 
        {
            // запрос к базе данных для сохранения ссылки на это изображение для пользователя
        }
    };

// главная идея в разбиении на отдельные классы, каждый отвечает за свою задачу, относится к одной функциональности
