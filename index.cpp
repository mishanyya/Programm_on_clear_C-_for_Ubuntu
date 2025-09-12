//1. установить текстовый редактор Visual Studio Code
//2. создать папку Programm_on_clear_C++ и файла index.cpp
//3. автоматически предложилось расширение C/C++ Extension Pack, установить его
//4. вводим стандартный код на c++ для начинающих и сохраняем
//5  установить компилятор через терминал
//sudo apt install g++

//6. в терминале зайти в папку Programm_on_clear_C++ с этим файлом
//cd /home/mishanyya/MyCodes/Programm_on_clear_C++/ 

//7. скомпилировать файл index.cpp в файл index
//g++ index.cpp -o index

//8. в папке Programm_on_clear_C++ должен появиться исполняемый файл index

//9. запустить файл на выполнение в терминале
//./index

//10. установить git - можно найти ссылку в VSC
//sudo apt-get install git

//11. зарегистрироваться в git
//git config --global user.name "mishanyya"

//12. установить email в git.
//git config --global user.email "mishanyakashin@mail.ru"

//13. в терминале зайти в папку Programm_on_clear_C++ с этим файлом
//cd /home/mishanyya/MyCodes/Programm_on_clear_C++/ 

//14. проинициализировать репозиторий
//git init

/*
может появиться подсказка-

hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
*/

#include <iostream>
#include <cstdlib> 
using namespace std;

int main() 
{ 
    cout << "Hello, world!" << endl;   
    return 0; 
}
