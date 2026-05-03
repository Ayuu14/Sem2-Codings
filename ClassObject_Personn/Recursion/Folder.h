#include <iostream> 
using namespace std;
#ifndef FOLDER_H 
#define FOLDER_h 
class Folder {
private:
	string name;
	Folder* children[5];
	int childCount;
public:
	Folder(string);
	void add(Folder* child);
	void browse(Folder* child, int level);
};
#endif 
Folder::Folder(string name) {
	this->name = name;
	childCount = 0;
	for (int i = 0; i < 5; i++)
		children[i] = nullptr;
}
void Folder::add(Folder* child) {
	if (childCount < 5) {
		children[childCount++] = child;
	}
}
void Folder::browse(Folder* child, int level = 0) {
	if (child == nullptr)
		return;
	for (int i = 0; i < level; i++)
		cout << "  ";
	cout << child->name << endl;
	for (int i = 0; i < child->childCount; i++)
		browse(child->children[i], level + 1);
}
