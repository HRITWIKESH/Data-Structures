class Node {
  constructor(val) {
    this.val = val;
    this.right = null;
    this.left = null;
    this.count = 0;
  };
};

class BST {
  constructor() {
    this.root = null;
  }
  create(val) {
    const newNode = new Node(val);
    if (!this.root) {
      this.root = newNode;
      return this;
    };
    let current = this.root;

    const addSide = side => {
      if (!current[side]) {
        current[side] = newNode;
        return this;
      };
      current = current[side];
};
    let current = this.root;

    const addSide = side => {
      if (!current[side]) {
        current[side] = newNode;
        return this;
      };
      current = current[side];
    };

    while (true) {
      if (val === current.val) {
        current.count++;
        return this;
      };
      if (val < current.val) addSide('left');
      else addSide('right');
    };
  };
};

let tree = new BST();
tree.add(10);
tree.add(4);
tree.add(4);
tree.add(12);
tree.add(2);
console.log(tree);
