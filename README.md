t_lstnew
📚 What to study first

    Pointers (*)
    Dynamic memory allocation (malloc)
    Structures (struct)
    Linked lists and NULL

🎯 Purpose

Allocates and initializes a new linked-list node with the given content.

⭐ How it works
1. Allocate memory

new_node = malloc(sizeof(t_list) * 1);

Allocates memory for one node.
2. Check allocation

if (!new_node)
    return (NULL);

If allocation fails, return NULL.
3. Store the content

new_node->content = content;

Stores the given content in the node.
4. Initialize the next pointer

new_node->next = NULL;

The node does not point to another node yet.
5. Return the new node

return (new_node);

Returns the address of the created node.
📊 Drawing

Example:

t_list *node = ft_lstnew("Hello");

Step 1: Allocate memory

new_node
   |
   v
+-------------+
|   content   |
+-------------+
|    next     |
+-------------+

Step 2: Initialize the node

node
 |
 v
+-------------+
|   "Hello"   |  content
+-------------+
|    NULL     |  next
+-------------+

🧠 Remember

    malloc() allocates memory.
    content stores the given data.
    next = NULL indicates that the node is not connected to another node.
    return (new_node) returns the created node.

Key idea: Allocate memory, initialize the node, and return it.
t_lstadd_front
📚 What to study first

    Pointers (* and &)
    Double pointers (**)
    Structures (struct)
    Linked lists and NULL

🎯 Purpose

Adds a new node at the beginning of a linked list.
⭐ How it works
1. Check for NULL

if (!lst || !new)
    return;

If lst or new is NULL, stop the function.
2. Connect the new node

new->next = *lst;

Make the new node point to the current first node.

Before:

HEAD
 |
 v
+-----+------+     +-----+------+
|  A  | next | --> |  B  | NULL |
+-----+------+     +-----+------+

NEW
 |
 v
+-----+------+
|  N  | NULL |
+-----+------+

After new->next = *lst:

HEAD
 |
 v
+-----+------+     +-----+------+
|  A  | next | --> |  B  | NULL |
+-----+------+     +-----+------+

NEW
 |
 v
+-----+------+ 
|  N  | next | -----> A
+-----+------+

3. Update the head

*lst = new;

Make the new node the first node.

Final result:

HEAD
 |
 v
+-----+------+     +-----+------+     +-----+------+
|  N  | next | --> |  A  | next | --> |  B  | NULL |
+-----+------+     +-----+------+     +-----+------+

🧠 Remember

    lst: Address of the head pointer.
    *lst: Current first node.
    new: New node to insert.
    new->next = *lst: Connect the new node to the existing list.
    *lst = new: Update the head.

Key idea: Connect first, update the head second.
