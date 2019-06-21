#ifndef HUFFMAN_H
#define HUFFMAN_H

//Huffman���ڵ�
typedef struct 
{
	int weight;	//Ȩֵ
	int parent;	//���ڵ�
	int lchild;	//����
	int rchild;	//�Һ���
}HTNode, *HuffmanTree;

typedef char **HuffmanCode;		//Huffman����

//����Huffman��
int CreateHuffmanTree(HuffmanTree pHT,int weight[],int n);
int CreateHuffmanTree2(HuffmanTree &pHT, int w[], int n);

//����Huffman����
int HuffmanCoding(HuffmanCode &pHC, HuffmanTree  &pHT);


int Select(HuffmanTree pHT, int nSize);
void Select(HuffmanTree &HT, int i, int&s1, int&s2);

int TestHufTree(HuffmanTree pHT);

#endif