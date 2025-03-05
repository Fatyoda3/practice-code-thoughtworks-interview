class node_data {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;

    }
}

class Tree {
    constructor() {
        this.root = null;
        this.rootArr = [];
        this.size = 0;
    }

    insert(data) {
        this.root = new node_data(data);
        let m = this.root;
        this.root = null;
        /*  let this.root = this.root; */
        let i = 0;

        do {
            if (this.root == null) {
                console.log('first');
                this.root = new node_data(data);
                this.rootArr[this.size++] = this.root.data;

                break;
            }
            if (this.root.data < data) {
                if (this.root.left == null) {
                    this.root.left = new node_data(data);
                    break;
                }
                else {
                    this.root = this.root.left;
                }
            }
            else {
                if (this.root.right == null) {
                    this.root.right = new node_data(data);
                    break;
                }
                else {
                    this.root = this.root.right;
                }
            }

            this.root = m;

        } while (this.root != null /* && i++ < 3 */);
    }
}

var invertTree = function (root) {
    /*  if (!root) return []; */


    let tree = new Tree();


    //an array is passed as the node data of the bTree

    /*  for (let i = 0; i < temp.length; i++) {
         Tree.insert(temp[i]);
     } */

    tree.insert(2);
    tree.insert(1);
    tree.insert(3);

    console.log(tree.root /* + "\n||" + tree.rootArr */)
    console.log("\n||{  " + tree.rootArr + "  }")
    /*  let this.root = Tree.root;
     let s = ''
     while (this.root) {
         s.concat("   ", String(this.root.val));
 
     } */
    // console.log(Tree.rootArr);

};


invertTree([2, 1, 3])