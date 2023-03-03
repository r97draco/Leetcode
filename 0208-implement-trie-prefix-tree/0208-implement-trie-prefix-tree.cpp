class Trie {
private:
    class Node{
     public:
        Node* node[26]={};
        bool isword= false;
    };
    
public:
    Node* ROOT;
    Trie() {
        ROOT= new Node();
    }
    //Fixed memory Leak but it will take twice the time.
    ~Trie(){
        // clear(ROOT);
    }
    
    void insert(string word) {
        Node* root = ROOT;
        for(char x: word){
            x-='a';
            if(root->node[x]==NULL){
                root->node[x]= new Node();
            }
            root = root->node[x];
        }
        root->isword= true;
    }
    
    bool search(string word) {
        Node* root = ROOT;
        for(auto i: word){
            char x = i-'a';
            if(root->node[x]!=NULL){
                root = root->node[x];
            }else return false;
        }
        return root->isword;
    }
    
    bool startsWith(string prefix) {
        Node* root = ROOT;
        for(auto i: prefix){
            char x = i-'a';
            if(root->node[x]!=NULL){
                root = root->node[x];
            }else return false;
        }
        return root!=NULL;
    }
    
    void clear(Node* root){
        for(int i=0; i<26; i++){
            if(root->node[i]!= nullptr){
                clear(root->node[i]);
            }
        }
        cout<<root<<" ";
        delete root;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */