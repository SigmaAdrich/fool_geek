#include <fstream>
#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
   string data="aaaaa";
   // ��дģʽ���ļ�
   ofstream outfile;
   while(true){
   	cout << "Writing to the file" << endl;
   outfile.open("virus.txt", ios::app);
   // ���ļ�д���û����������
   outfile << data << endl;
   outfile.close();
   }
   // �رմ򿪵��ļ�
   return 0;
}
