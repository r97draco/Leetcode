
class Trie {
    class Node{
        public:
        
        Node * node[26];
        bool isword;
        Node(){
            memset(node, 0, sizeof(node));
            isword= false;
        }
    };
public:
    Node * Tnode;
    
    Trie() {
        Tnode= new Node();
    }
    
    void insert(string word) {
        Node *p = Tnode;
        for(int i=0; i<word.size(); i++){
            if( p->node[word[i]-'a']==NULL )
                p->node[word[i]-'a']= new Node();
            p= p->node[word[i]-'a'];
        }
        p->isword= true;
    }
    
    bool search(string word) {
        Node *p = find(word);
        return p != NULL && p -> isword;
    }
    
    bool startsWith(string prefix) {
        return find(prefix)!= NULL;
    }
    
    private:
    Node* find(string key)
    {
        Node *p = Tnode;
        for(int i = 0; i < key.size() && p != NULL; ++ i)
            p = p -> node[key[i] - 'a'];
        return p;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */