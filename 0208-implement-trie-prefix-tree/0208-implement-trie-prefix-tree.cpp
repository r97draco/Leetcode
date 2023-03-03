class Trie {
private:
    Trie* node[26]={};
    bool isword= false;
public:
    Trie() {

    }
    
    void insert(string word) {
        Trie * root = this;
        for(char x: word){
            x-='a';
            if(root->node[x]==NULL){
                root->node[x]= new Trie();
            }
            root = root->node[x];
        }
        root->isword= true;
    }
    
    bool search(string word) {
        Trie* root= this;
        for(auto i: word){
            char x = i-'a';
            if(root->node[x]!=NULL){
                root = root->node[x];
            }else return false;
        }
        return root->isword;
    }
    
    bool startsWith(string prefix) {
        Trie* root= this;
        for(auto i: prefix){
            char x = i-'a';
            if(root->node[x]!=NULL){
                root = root->node[x];
            }else return false;
        }
        return root!=NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */