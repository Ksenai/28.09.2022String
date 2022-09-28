//������������ ������ ������� �++

#include <iostream>
#include <string> //- ��������� �������� � ������� string

using namespace std;

//��������� ������ string � ������ �������
void to_lower(string &str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
}

//��������� ������ string � ������� �������
void to_upper(string& str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//��������� ������ char
	/*char word[4]{'H', 'i', '!', '\0'};

	//������������ �����
	for (int i = 0; i < 4; i++)
		cout << word[i];
	cout << endl;

	//���������� �����
	cout << word << endl;
	cout << word[1] << endl;

	char word2[] = "Hello world!";
	cout << word2 << endl;*/

	//������ string
	/*string str; //��������� ����������

	cout << str << endl; //��������� ���������� �� ��������� ""

	str = "Hello world!";
	cout << str << endl;//����� ������
	str = "Bye world!";//��������� ������

	cout << str << endl;

	cout << str[2] << str[3] << endl; // ��������� � ��������� ��������� ������

	string new_str = str + "!!";//������������ �����
	cout << new_str << endl;

	cout << new_str << " :(" << endl;
	cout << new_str << endl;

	new_str += "...";
	cout << new_str << endl;*/


	//���� ������
	/*string name;
	cout << "��� ��� �����? -> ";
	cin >> name; //���� �� ������� ����������
	cout << "������, " + name << "\n";

	cin.ignore(); //������� ������ �����

	cout << "��� ��� ����� (� ��������)? -> ";
	getline(cin, name);
	cout << "������, " + name << "\n";*/

	//�������. ������������ ������ �����, ����� ���� ������ ����� ���-�� ����, ������� ������� � ���� ������� ������
	/*string res;
	cout << "������� ���-�� ����: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "����� �" << i + 1 << ": ";
		string tmp;
		cin >> tmp;
		res += tmp + ' ';
	}
	res += "\b.";
	cout << "���������:\n" << res << endl;*/
	
	//������ �����
	string mystr = "Hello World!";
	//������ - .length() � .size(). ���������� ����� ������. ������� ����� ���� ��� �������
	/*cout << mystr.size() << endl;
	cout << mystr.length() << endl;
	//int size = mystr.size();*/

	//����� - .insert(). ��������� ���� ������ ������ ������
	/*mystr.insert(3, "NEW"); // "NEW" ����������� ����� 3 ��������
	cout << mystr << endl; //HelNEWlo world*/

	//����� - .replace(). �������� ����� ������ ����� �������
	/*mystr.replace(3, 5, "NEW");
	cout << mystr << endl;*/

	//����� - .find(). ���������� ������ ������� ��������� ��������� (����� ������ ������) � ������
	/*cout << mystr.find("l") << endl;	//2
	cout << mystr.find("l", 5) << endl;	//9
	cout << mystr.find("wo") << endl;	//6
	cout << mystr.find("BYE") << endl;	//�����*/

	//����� - .rfind(). ���������� ������ ���������� ��������� ��������� � ������
	/*cout << mystr.rfind("l") << endl;		//9
	cout << mystr.rfind("l", 6) << endl;	//3
	cout << mystr.rfind("wo") << endl;		//6*/

	//����� - .substr(). ���������� ���������, ������������ � ������������ ������� ������
	/*cout << mystr.substr(7) << endl;	//orld!
	cout << mystr.substr(7, 3) << endl; //orl*/

	//������� �����
	/*cout << "������� �����: ";
	cin >> n;
	string nstr = to_string(n); //���������� �����, ������������ � ������

	nstr += "!";

	cout << "����: " << nstr << endl;*/

	/*string str2;
	cout << "������� ������: ";
	std::getline(cin, str2);
	cout << "�����: " << stoi(str2) << endl; //���������� �����, ���������� �� ������*/

	/*cout << (char)toupper(mystr[0]) << endl; //�������� � ������� �������
	cout << (char)tolower(mystr[0]) << endl; //�������� � ������ �������*/

	to_lower(mystr);
	cout << mystr << endl;
	to_upper(mystr);
	cout << mystr << endl;

	return 0;
}