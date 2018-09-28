class Record():
    def __init__(self, record_id, parent_id):
        self.record_id = record_id
        self.parent_id = parent_id


class Node():
    def __init__(self, node_id):
        self.node_id = node_id
        self.children = []

def ValidateIDs(ordered_id):
    if ordered_id:
        if ordered_id[-1] != len(ordered_id) - 1:
            raise ValueError("Record IDs don't match number of entries!")
        if ordered_id[0] != 0:
            raise ValueError("First record ID is not 0")

def BuildTree(records):
    root = None
    records.sort(key=lambda x: x.record_id)
    ordered_id = [i.record_id for i in records]

    ValidateIDs(ordered_id)
    
    tree_nodes = []
    parent = {}
    for j in records:
        if j.record_id == 0:
            if j.parent_id != 0:
                raise ValueError
        if j.record_id < j.parent_id:
            raise ValueError
        if j.record_id == j.parent_id:
            if j.record_id != 0:
                raise ValueError
        tree_nodes.append(Node(j.record_id))

    for i in range(len(ordered_id)):
        for j in tree_nodes:
            if i == j.node_id:
                parent = j
        for j in records:
            if j.parent_id == i:
                for k in tree_nodes:
                    if k.node_id == 0:
                        continue
                    if j.record_id == k.node_id:
                        child = k
                        parent.children.append(child)
    if len(tree_nodes) > 0:
        root = tree_nodes[0]
    return root
