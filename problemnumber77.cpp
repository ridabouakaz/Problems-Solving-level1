#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function  function which translates a given 'T' string into "U".
string DNAtoRNA(string dna) {
	string word;
	for (int i = 0; i < dna.size(); i++)
	{
		if (dna[i] == 'T')
		{
			word += 'U';
		}
		else
		{
			word += dna[i];
		}
	}
	cout << word;
	return 0;



}
int main() {
	DNAtoRNA("GCAT");
	return 0;
}
/*Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems. It is composed of four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').

Ribonucleic acid, RNA, is the primary messenger molecule in cells. RNA differs slightly from DNA its chemical structure and contains no Thymine. In RNA Thymine is replaced by another nucleic acid Uracil ('U').

Create a function which translates a given DNA string into RNA.*/