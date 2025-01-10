#include<bits/stdc++.h>
#include "../HeaderFile/all_header.h"
#include "deal_str.cpp"
#include "file_oi.cpp"
#include "regularization.cpp"
using namespace std;
const int MAXN = 1e6 + 10;

string str[MAXN];
Myword warr[MAXN];

int main() {
    const string filePath = "D:\\CDODS\\InFile.txt";
    int maxWords = MAXN, wordCount = 0;
    bool readSuccess = readFileToWordArray(filePath, str, maxWords, wordCount);
    if (readSuccess) 
    {
        cout << "成功读取文件: " << filePath << endl;
        cout<<"单词数量:"<<wordCount<<endl;
    }

    regularize(str, wordCount);

    int size = unique_by_traverse(str, warr, wordCount);
    cout<<"不同单词数量:"<<size<<endl;


    cout<<"排序后:"<<endl;
    QuickSort(warr, 0, size - 1);


    //输出到文件
    const string OutPath = "D:\\CDODS\\OutFile.txt";
    bool writeSuccess = writeToFile(OutPath, warr, size);
    if (writeSuccess) {
        cout << "成功将 Myword 输出到文件: " << "D:\\CDODS\\OutFile.txt" << endl;
    }
    return 0;
}
