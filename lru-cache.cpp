struct node
{
    int key;
    int value;
    node*prev;
    node*next;
    node(int k,int v)
    {
        key=k;
        value=v;
        prev=NULL;
        next=NULL;
    }
};
unordered_map<int,node*>m;
node*head;
node*tail;
int csize;
int capacity;
LRUCache::LRUCache(int c) {
     if(c<0)return; 
    m.clear();
    head=new node(-1,-1);
    tail=new node(-1,-1);
    head->next=tail;
    tail->prev=head;
    csize=0;
    capacity=c;
}

int LRUCache::get(int key) {
    if(m.count(key)==1)
    {
        node*p=m[key];
        p->prev->next=p->next;
        p->next->prev=p->prev;
        //put to head
        p->next=head->next;
        p->prev=head;
        head->next->prev=p;
        head->next=p;
        return p->value;
    }
    else
    {
        return -1;
    }
}

void LRUCache::set(int key, int val) {
    if(capacity < 1) return;
    //1) Already present, then update and put to head
    if(m.count(key)==1)
    {
        node*p=m[key];
        p->prev->next=p->next;
        p->next->prev=p->prev;
        //put to head
        p->next=head->next;
        p->prev=head;
        head->next->prev=p;
        head->next=p;
        p->value=val;
    }
    //2) Not present, Insert at head and delete last if size>capacity
    else
    {
        node*p=new node(key,val);
        p->next=head->next;
        p->prev=head;
        head->next->prev=p;
        head->next=p;
        m[key]=p;
        csize++;
        if(csize>capacity)
        {
            p=tail->prev;
            tail->prev=p->prev;
            p->prev->next=tail;
            m.erase(p->key);
            delete p;
        }
    }
}
