#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}
Node* buildTree(string str)
{
	
	if (str.length() == 0 || str[0] == 'N')
		return NULL;
	vector<string> ip;
	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);
	Node* root = newNode(stoi(ip[0]));
	queue<Node*> queue;
	queue.push(root);
	int i = 1;
	while (!queue.empty() && i < ip.size()) {
		Node* currNode = queue.front();
		queue.pop();
		string currVal = ip[i];
		if (currVal != "N") {
			currNode->left = newNode(stoi(currVal));
			queue.push(currNode->left);
		}
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];
		if (currVal != "N") {
			currNode->right = newNode(stoi(currVal));
			queue.push(currNode->right);
		}
		i++;
	}
	return root;
}
int sum(Node* root, int k);
int main()
{

	int t;
	scanf("%d ", &t);
	while (t--)
	{
		string s;
		getline(cin >> ws, s);
		int k;
		cin >> k;
		Node* root = buildTree(s);
		cout << sum(root, k) << endl;
	
	}
	return 1;
}
int findSum(Node* root, int &k) {
    if(root == NULL) return 0;
    int res = 0;
    res += findSum(root->left, k);
    if(k > 0) {
        k--;
        res += root->data;
    }
    res += findSum(root->right, k);
    return res;
}
int sum(Node* root, int k) {
    return findSum(root, k);
} 