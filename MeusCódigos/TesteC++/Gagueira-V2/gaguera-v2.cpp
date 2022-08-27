/* ======Objetivo=========
 * Efetuar gagueira em uma
 * string
 * */
#include <iostream>
#include <cctype>
#include <sstream>

using namespace std;

//-----------------------------------------------------
//Declarações

//retorna se uma char eh uma vogal
bool ehVogal(char, const string /*vogais*/ = "aeiou");

//Retorna quantidade de subStrings
int cSubString(const string &);

//Pega as substrings de um arr
string* getSub(string &, int &);

//Retorna quantidade de vogais de uma string
int cVogais(string &);

//Retorna quantidade do conssoantes
int cConsoantes(string &);

//Retorna string formatada com gagueira
//~ string fGagueira(string* &, const int &);

//----------------------------------------------------

int main()
{
	string str { 0 }; //String de input
	int size   { 0 }; //Tamanho do array de substring
	getline(cin, str);
	
	//Alocação dinâmica de array de strings
	string * arrget = getSub(str, size);
	
	cout << fGagueira(arrget, size);
	
	//Desalocação dinâmica de array de strings
	delete [] arrget;
}

bool ehVogal(char c, string vogais)
{
	
	for(char v : vogais)
	{
		if(c == v || c == toupper(v))
			return true;
	}
	return false;
}

int cSubString(const string & str)
{
	int ret { 1 };
	for(char c : str)
	{
		if(isspace(c))
			ret++;
	}
	return ret;
}

string* getSub(string & str, int & size)
{
	int start { 0 };
	int strLenght = str.length();
	int nextIndex = 0;

	size = cSubString(str);
	string* ret = new string[size];
	
	for(int i = 0; i < strLenght; i++)
	{
		if(isspace(str[i]))
		{
			ret[nextIndex] = str.substr(start, (i - start));
			nextIndex++;
			start = i+1;
		}
		if(i > strLenght-2)
		{
			ret[nextIndex] = str.substr(start, (i+1 - start));
			nextIndex++;
			start = i+1;
		}
	}
	
	return ret;
}

int cVogais(string & str)
{
	int ret { 0 };
	int str_length = str.length();
	for(int i = 0; i < str_length; i++)
	{
		if(ehVogal(str[i]))	
			ret++;
	}
	return ret;
}

int cConsoantes(string & str)
{
	int ret { 0 };
	int str_length = str.length();
	for(int i = 0; i < str_length; i++)
	{
		if(!ehVogal(str[i]))	
			ret++;
	}
	return ret;
}

//~ string fGagueira(string* & str, const int & size)
//~ {
	//~ stringstream ret;
	//~ for(int x { 0 } ; x < size; x++)
	//~ {
		//~ if(cVogais(str[x]) > 1 && cConsoantes(str[x]) > 1
		//~ && !(!ehVogal(str[x][0]) && !ehVogal(str[x][1])))
		//~ {
			//~ string toAdd { str[x].substr(0, 2) };
			//~ int start { 2 }; 
			//~ if(ehVogal(str[x][0]))
			//~ {
				//~ toAdd = str[x][0];
				//~ start = 1;
			//~ }
			//~ for(int i = 0; i < 3; i++)
			//~ {
				//~ ret << toAdd;
			//~ }
				
			//~ ret << str[x].substr(start);				
		//~ }
		//~ else
		//~ {
			//~ ret << str[x];
		//~ }
		//~ if(x < (size-1))
			//~ ret << " ";
	//~ }
	
	//~ return ret.str();
//~ }
