#include<bits/stdc++.h>
using namespace std;
struct trie
{
    bool eow;
    trie * all[26];
};
trie* getNode()
{
    trie* temp = new trie;
    temp->eow =false;
    for(int i=0;i<26;i++)
        temp->all[i]=NULL;
    return temp;
}
void insert(trie *root, string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(root->all[s[i]-'a'])
        {
            root=root->all[s[i]-'a'];
        }
        else
        {
            root->all[s[i]-'a'] = getNode();
            root=root->all[s[i]-'a'];
        }
        if(i==s.length()-1)
                root->eow=true;
    }
    return;
}
void print(trie*root,string s)
{
    if(root->eow)
    {
        cout<<s<<endl;
    }
    for(int i=0;i<26;i++)
    {
        if(root->all[i])
        {
            print(root->all[i],s+(char)(i+'a'));
        }
    }
    return;
}
bool searchTrie(trie* root, string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(root->all[s[i]-'a']==NULL)
            return false;
        else
            root=root->all[s[i]-'a'];
    }
    if(root->eow)
        return true;
    return false;
}
void deleteTrie(trie* root,string s)
{
    if(searchTrie(root,s)==false)
        return;

}
using namespace std;
int main()
{
    string b,e;
    cin>>b>>e;
    int n;
    cin>>n;
    string s[n];
    trie * root = new trie();
    insert(root,b);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        insert(root,s[i]);
    }
    insert(root,e);
    print(root,"");
    cout<<searchTrie(root,"ank")<<endl;
    cout<<searchTrie(root,"malik");
    return 0;
}
