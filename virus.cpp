#include <fstream>
#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
   string data="aaaaa";
   // 以写模式打开文件
   ofstream outfile;
   while(true){
   	cout << "Writing to the file" << endl;
   outfile.open("virus.txt", ios::app);
   // 向文件写入用户输入的数据
   outfile << data << endl;
   outfile.close();
   }
   // 关闭打开的文件
   return 0;
}
