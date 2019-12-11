#include "TreeNode.h"
#include <iostream>

using namespace std;

template<typename U>
int depth(TreeNode<U>* tree) {
	for
}


int main() 
{
	TreeNode<string>* Fri = new TreeNode<string>("Friday"),*Sat = new TreeNode<string>("Saturday"),*Mon = new TreeNode<string>("Monday",Fri,Sat);
	TreeNode<string>* Wed = new TreeNode<string>("Wednesday"),* Thu = new TreeNode<string>("Thursday"),* Tue = new TreeNode<string>("Tuesday",Thu,Wed);

	TreeNode<string>* Sun = new TreeNode<string>("Sunday",Mon,Tue);
	

	if (!Sun->searchTree("Friyay")) {
		cout << "Friyay, that isn't a day nonce" << endl;
	}
		
}