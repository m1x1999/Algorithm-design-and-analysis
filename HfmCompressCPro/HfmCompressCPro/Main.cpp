// Main.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include "Compress.h"
#include"Huffman.h"

using namespace std;

int main()
{
	cout << "=========Huffman文件压缩=======" << endl;
	cout << "请输入文件名：";
	char filename[256];
	cin >> filename;
	if (Compress(filename) == 1) {
		cout << "压缩成功" << endl;
	}
	else {
		cout << "压缩失败" << endl;
	}
	
    return 0;
}

