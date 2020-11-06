# VSCode_borland_setup
Описание сборки Borland файлов в VS Code

## Установка IDE
1. Установите VSCode https://code.visualstudio.com/
2. Чтобы был русский язык установите это [расширение](https://marketplace.visualstudio.com/items?itemName=MS-CEINTL.vscode-language-pack-ru)
3. Скачайте [borland.zip](https://github.com/LencoDigitexer/VSCode_borland_setup/releases/download/borland/Borland.zip)
4. Распакуйте на диск C. Должно получиться так: C:\Borland\

## Настройка рабочего окружения
1. Скачайте [vscode_borland.zip](https://github.com/LencoDigitexer/VSCode_borland_setup/releases/download/borland/vscode_borland.zip)
2. Распакуйте архив
3. Откройте его в VSCode, для этого в VSCode нажмите Файл - Открыть папку - Укажите папку "vscode_borland"

## Запуск
1. Проверьте, что у вас существует папка C:\Borland\BCC55\Bin
2. Если вы хотите поменять имя main.cpp, то так же переименуйте main.cpp в файле cpp.bat, а в start.bat поменяйте только имя файла без изменения расширения

Например, я хочу, чтобы у меня был файл myprogramm.cpp, тогда файл cpp.bat будет выглядеть так
```
path="C:\Borland\BCC55\Bin"
C:\Borland\BCC55\Bin\bcc32.exe myprogramm.cpp
start start.bat
```
Так же изменить файл start.bat
```
myprogramm.exe
```

3. Запуск компиляции и программы - нужно нажать комбинацию клавиш CTRL + SHIFT + B 
