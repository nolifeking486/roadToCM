//basic trie question and implementation
// only difference is the search for prefix function which is just
//the modification of standard search
struct Node{
    bool endofword;
    Node * a[26];
    Node(){
        endofword = false;
        for(int i=0;i<26;i++){
            a[i]=NULL;
        }
    }

};
class Trie {
public:
    Node * root;
    Trie() {
       root = new Node();
    }
    
    void insert(string word) {
        Node * temproot = this->root;
        for(int i=0;i<word.length();i++){
            int index = word[i]-'a';
            if(temproot->a[index]==NULL){
                temproot->a[index]=new Node();
            }
            temproot=temproot->a[index];
        }
        temproot->endofword=true;
        
    }
    
    bool search(string word) {
        Node * temproot = this->root;
        for(int i=0;i<word.length();i++){
            int index = word[i]-'a';
            if(temproot->a[index]==NULL){
                return false;
            }
            temproot=temproot->a[index];
        }
        return temproot->endofword;
        
    }
    
    bool startsWith(string prefix) {
        Node * temproot = this->root;
        for(int i=0;i<prefix.length();i++){
            int index = prefix[i]-'a';
            if(temproot->a[index]==NULL){
                return false;
            }
            temproot=temproot->a[index];
        }
        return true;
    }
};
