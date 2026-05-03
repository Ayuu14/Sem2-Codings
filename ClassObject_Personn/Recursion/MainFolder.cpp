#include "Folder.h" 
#include <iostream> 
using namespace std;
int main() {

	Folder* root = new Folder("Root");
	Folder* folderA = new Folder("Folder A");
	Folder* folderB = new Folder("Folder B");
	Folder* subA1 = new Folder("sub Folder A1");
	Folder* subA2 = new Folder("sub Folder A2");
	Folder* file1 = new Folder("File1.txt");
	Folder* file2 = new Folder("File2.txt");
	Folder* file3 = new Folder("ezreen.txt");

	root->add(folderA);
	root->add(folderB);
	folderA->add(subA1);
	folderA->add(subA2);
	subA1->add(file1);
	folderB->add(file2);
	folderA->add(file3);
	cout << "Folder A structure : " << endl;
	folderA->browse(folderA);

	return 0;
}