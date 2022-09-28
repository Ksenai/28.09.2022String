//Персональный шаблон проекта С++

#include <iostream>
#include <string> //- позволяет работать с классом string

using namespace std;

//Возводвит строку string в нижний регистр
void to_lower(string &str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
}

//Возводвит строку string в верхний регистр
void to_upper(string& str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//строковый массив char
	/*char word[4]{'H', 'i', '!', '\0'};

	//Неправильный вывод
	for (int i = 0; i < 4; i++)
		cout << word[i];
	cout << endl;

	//Правильный вывод
	cout << word << endl;
	cout << word[1] << endl;

	char word2[] = "Hello world!";
	cout << word2 << endl;*/

	//строки string
	/*string str; //строковая переменная

	cout << str << endl; //строковая переменная со значением ""

	str = "Hello world!";
	cout << str << endl;//Вывод строки
	str = "Bye world!";//изменение строки

	cout << str << endl;

	cout << str[2] << str[3] << endl; // обращение к отдельным элементам строки

	string new_str = str + "!!";//конкатенация строк
	cout << new_str << endl;

	cout << new_str << " :(" << endl;
	cout << new_str << endl;

	new_str += "...";
	cout << new_str << endl;*/


	//Ввод строки
	/*string name;
	cout << "Как вас зовут? -> ";
	cin >> name; //ввод до первого разделения
	cout << "Привет, " + name << "\n";

	cin.ignore(); //очистка буфера ввода

	cout << "Как вас зовут (с фамилией)? -> ";
	getline(cin, name);
	cout << "Привет, " + name << "\n";*/

	//Задание. Пользователь вводит число, после чего вводит соотв кол-во слов, которые объедин в одну большую строку
	/*string res;
	cout << "Введите кол-во слов: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Слово №" << i + 1 << ": ";
		string tmp;
		cin >> tmp;
		res += tmp + ' ';
	}
	res += "\b.";
	cout << "Результат:\n" << res << endl;*/
	
	//Методы строк
	string mystr = "Hello World!";
	//Методы - .length() и .size(). Возвращают длину строки. Разницы между ними нет никакой
	/*cout << mystr.size() << endl;
	cout << mystr.length() << endl;
	//int size = mystr.size();*/

	//Метод - .insert(). Вставляет одну строку внутрь другой
	/*mystr.insert(3, "NEW"); // "NEW" вставляется перед 3 позицией
	cout << mystr << endl; //HelNEWlo world*/

	//Метод - .replace(). Заменяет часть строки новой строкой
	/*mystr.replace(3, 5, "NEW");
	cout << mystr << endl;*/

	//Метод - .find(). Возвращает индекс первого вхождения подстроки (часть другой строки) в строку
	/*cout << mystr.find("l") << endl;	//2
	cout << mystr.find("l", 5) << endl;	//9
	cout << mystr.find("wo") << endl;	//6
	cout << mystr.find("BYE") << endl;	//мусор*/

	//Метод - .rfind(). Возвращает индекс последнего вхождения подстроки в строку
	/*cout << mystr.rfind("l") << endl;		//9
	cout << mystr.rfind("l", 6) << endl;	//3
	cout << mystr.rfind("wo") << endl;		//6*/

	//Метод - .substr(). Возвращает подстроку, начинающаяся с определенной позиции строки
	/*cout << mystr.substr(7) << endl;	//orld!
	cout << mystr.substr(7, 3) << endl; //orl*/

	//Функции строк
	/*cout << "Введите число: ";
	cin >> n;
	string nstr = to_string(n); //Возвращает число, превращенное в строку

	nstr += "!";

	cout << "Итог: " << nstr << endl;*/

	/*string str2;
	cout << "Введите строку: ";
	std::getline(cin, str2);
	cout << "Число: " << stoi(str2) << endl; //Возвращает число, полученное из строки*/

	/*cout << (char)toupper(mystr[0]) << endl; //возводит в верхний регистр
	cout << (char)tolower(mystr[0]) << endl; //возводит в нижний регистр*/

	to_lower(mystr);
	cout << mystr << endl;
	to_upper(mystr);
	cout << mystr << endl;

	return 0;
}