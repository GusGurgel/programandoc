#include <iostream>
#include <fstream>
#include <sstream>
#include <locale>

using namespace std;

struct horariro{
	string mediaHora; 	/* Média do horário */
	string desc;		/* Descrição do horário */
};

int main()
{
	system("chcp 65001 > nul"); /*Utilização de caracteres portugueses*/
	
	string filename; 
	string outfilename;
	string mediaHora;
	string desc;
	
	ifstream file;				/*Filestream de entrada*/
	ofstream file_out;			/*Filestream de saida*/

	stringstream ss;
	
	cout << "Digite o nome do arquivo: ";
	cin >> filename;
	
	outfilename = filename.substr(0, filename.length()-4) /*remove .txt*/ + "(out).txt";
	
	file.open(filename);
	file_out.open(outfilename);
	
	if(file.is_open() && file_out.is_open()){
		while(file >> mediaHora && getline(file, desc)){
			ss << "\t\t\\gi{" << mediaHora.substr(0, 4) << "}";
			ss << "{" << desc.substr(1) << "}" << endl;
		}
	}else{
		cout << "fail trying to open file" << endl;
		return EXIT_FAILURE;
	}
	
	file_out << ss.str();

	file_out.close();
	file.close();
	
	return EXIT_SUCCESS;
}
