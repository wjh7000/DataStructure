
//二叉树结点ADT
template <typename T>
class BinaryTreeNode
{
    friend class BinaryTree;//用于访问私有成员
private:
    /* data */
    T info;    //数据域
    BinaryTreeNode<T>* Lson;    //左子树
    BinaryTreeNode<T>* Rson;    //右子树

public:
    //构造方法
    BinaryTreeNode(/* args */);    //无参构造
    BinaryTreeNode(const T& ele);               //带结点值的有参构造
    BinaryTreeNode(const T& ele, BinaryTreeNode<T>* Lson, BinaryTreeNode<T>* Rson);    //带有左右子树和结点值的有参构造

    //析构
    ~BinaryTreeNode();    //析构函数
    
    //方法
    T value() const; //返回结点数据
    BinaryTreeNode<T>* leftchild() const;    //返回左孩子指针
    BinaryTreeNode<T>* rightchild() const;    //返回右孩子指针
    void setLeftchild(BinaryTreeNode<T>*);    //设置左子树
    void setRightchild(BinaryTreeNode<T>*);    //设置右子树
    void setValue(const T& val);
    
    bool isLeaf() const;    //判断是否为叶结点
    

};

//二叉树ADT
template <typename T>
class BinaryTree{
private:
    BinaryTreeNode<T>* root;    //根节点指针
    BinaryTreeNode<T>* current;    //当前结点指针
public:
    BinaryTree(){
        root = NULL;
    }
    ~BinaryTree();
    bool isEmpty() const;    //判是否为空
    BinaryTreeNode<T>* Root(){
        return root;
    }
    BinaryTreeNodea<T>* Parent(BinaryTreeNode<T>* current);    //反当前结点current父节点
    BinaryTreeNodea<T>* LeftSibling(BinaryTreeNode<T>* current);    //反当前结点current左兄弟
    BinaryTreeNodea<T>* RightSibling(BinaryTreeNode<T>* current);    //反current右兄弟

    void CreateTree (const T& elem, BinaryTree <T>&leftTree, BinaryTree <T>& rightTree)    // 已知根、左子树、右子树，构造二叉树

    //周游
    void PreOrder BinaryTreeNode <T>* root);     //前序周游
    void InOrder BinaryTreeNode <T>*             //中序周游
    void PostOrder BinaryTreeNode <T>* root);    //后序周游
    void LevelOrder BinaryTreeNode <T>* root);   //按层次周游

    void DeleteBinaryTree BinaryTreeNode <T>* root);   //删
};
