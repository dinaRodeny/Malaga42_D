# 📚 Libft — Linked Lists

# 1. `ft_lstnew`(create)

## 📖 What to study first
- Pointers (`*`)
- Dynamic memory allocation (`malloc`)
- Structures (`struct`)
- Linked lists and `NULL`

## 🎯 Purpose
Creates a new node, stores the given content, and initializes `next` to `NULL`.

## ⚙️ How it works

### Step 1 — Allocate memory

newnode = malloc(sizeof(tlist));

Allocates enough memory for one node.

### Step 2 — Check allocation

if (!new_node) return (NULL);

If allocation fails, return `NULL`.

### Step 3 — Store the content

new_node->content = content;

Stores the given content pointer in the node.

### Step 4 — Initialize the next pointer

new_node->next = NULL;

The node does not point to another node yet.

### Step 5 — Return the node

return (new_node);

Returns the address of the new node.

## 📊 Drawing

**Example:**

tlist node = ft_lstnew("Hello");


**Result:**

node | v +-----------+ | content | ----> "Hello" +-----------+ | next | ----> NULL +-----------+


## 🧠 Remember
- `malloc()` allocates memory.
- `content` stores the given content pointer.
- `next = NULL` marks the end of the list.
- `return (new_node)` returns the created node.

**Key idea:** Allocate → Initialize → Return.

---

# 2. `ft_lstadd_front`(Prepend)

## 📖 What to study first
- Pointers (`*` and `&`)
- Double pointers (`**`)
- Structures (`struct`)
- Linked lists and `NULL`

## 🎯 Purpose
Adds a new node at the beginning of a linked list.

## ⚙️ How it works

### Step 1 — Check for NULL

if (!lst || !new) return;

If `lst` or `new` is `NULL`, stop the function.

### Step 2 — Connect the new node

new->next = *lst;

Makes the new node point to the current first node.

**Before:**

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | N | NULL | +-----+------+


**After `new->next = *lst`:**

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | N | next | ----> A +-----+------+


### Step 3 — Update the head

*lst = new;

Makes the new node the first node.

**Final result:**

HEAD | v +-----+------+ +-----+------+ +-----+------+ | N | next | --> | A | next | --> | B | NULL | +-----+------+ +-----+------+ +-----+------+


## 🧠 Remember
- `lst` is the address of the head pointer.
- `*lst` is the current first node.
- `new` is the node to insert.
- `new->next = *lst` connects the new node to the existing list.
- `*lst = new` updates the head.

# 3. `ft_lstsize`(Count)
## 📚 What to study first
- Pointers (`*`)
- Linked lists
- Loops (`while`)
- Counters (`unsigned int`)

## 🎯 Purpose
Counts the number of nodes in a linked list.

## ⚙️ How it works

1. Initialize `count` to `0`.
2. Traverse the list, incrementing `count` for each node.
3. Return the total count.

## 📊 Drawing

**Example:**

lst | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+


**Counting:**

[A] ------> [B] ------> [C] ------> NULL 1 2 3

Total: 3 nodes


## 🧠 Remember
- `count++` increments the counter.
- `lst = lst->next` moves to the next node.
- The loop stops when `lst` becomes `NULL`.
- An empty list returns `0`.

**Key idea:** Traverse → Count → Return.

# 4. `ft_lstlast`

## 📚 What to study first
- Pointers (`*`)
- Structures (`struct`)
- Linked lists
- Loops (`while`)

## 🎯 Purpose
Returns the last node of a linked list.

## ⚙️ How it works
1. Check if the list is empty.
2. Traverse the list until `next` is `NULL`.
3. Return the last node.

## 📊 Drawing

**Example:**

lst | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+ ^ | LAST


## 🧠 Remember
- `lst == NULL`: The list is empty.
- `lst->next == NULL`: The current node is the last node.
- `lst = lst->next`: Moves to the next node.

**Key idea:** Traverse → Find the last node → Return it.
# 5. `ft_lstadd_back`

## 📚 What to study first
- Pointers (`*` and `&`)
- Double pointers (`**`)
- Linked lists
- Loops (`while`)

## 🎯 Purpose
Adds a new node at the end of a linked list.

## ⚙️ How it works
1. If the list is empty, make `new` the first node.
2. Otherwise, traverse the list to find the last node.
3. Connect the last node to `new`.

## 📊 Drawing

**Before:**

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | C | NULL | +-----+------+


**After:**

HEAD | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+


## 🧠 Remember
- `lst`: Address of the head pointer.
- `*lst`: First node of the list.
- `new`: Node to add.
- `last->next = new`: Connects the new node to the end.

**Key idea:** Find the last node → Connect the new node.
# 6. `ft_lstdelone`

## 📚 What to study first
- Pointers (`*`)
- Structures (`struct`)
- Function pointers
- Dynamic memory management (`free`)

## 🎯 Purpose
Deletes one node by freeing its content and the node itself, without deleting the next node.

## ⚙️ How it works
1. Check if `lst` is `NULL`.
2. Use `del` to free the node's content.
3. Use `free()` to free the node itself.

## 📊 Drawing

**Before:**

HEAD | v +---------+------+ +---------+------+ | Content | next | --> | Content | NULL | +---------+------+ +---------+------+ NODE 1 NODE 2


**After `ft_lstdelone(lst, del)`:**

+---------+------+ | Content | NULL | +---------+------+ NODE 2

NODE 1: FREED


## 🧠 Remember
- `del(lst->content)` frees the content using the provided function.
- `free(lst)` frees the node itself.
- The next node is **not freed**.
- `del` is a function pointer that specifies how to delete the content.

**Key idea:** Delete the content → Free the node → Keep the next node.

# 7. `ft_lstclear`

## 📚 What to study first
- Pointers (`*` and `&`)
- Double pointers (`**`)
- Linked lists
- Function pointers
- Dynamic memory management (`free`)

## 🎯 Purpose
Deletes and frees every node in the list, then sets the head pointer to `NULL`.

## ⚙️ How it works
1. Check if the list exists.
2. Save the next node.
3. Delete the current node's content using `del` and free the node.
4. Move to the next node and repeat.
5. Set `*lst` to `NULL`.

## 📊 Drawing

**Before:**

HEAD | v +---------+------+ +---------+------+ +---------+------+ | Content | next | --> | Content | next | --> | Content | NULL | +---------+------+ +---------+------+ +---------+------+


**After `ft_lstclear(&head, del)`:**

HEAD | v NULL

All nodes and their contents have been freed.


## 🧠 Remember
- `del` frees each node's content.
- `free()` frees each node.
- Save `next` before freeing the current node.
- `*lst = NULL` resets the head pointer.

**Key idea:** Save next → Delete current → Repeat → Set head to `NULL`.

# 8. `ft_lstiter`

## 📚 What to study first
- Pointers (`*`)
- Structures (`struct`)
- Linked lists
- Function pointers
- Loops (`while`)

## 🎯 Purpose
Applies a function to the content of every node in a linked list.

## ⚙️ How it works
1. Check if the list exists.
2. Apply `f` to the current node's content.
3. Move to the next node.
4. Repeat until the end of the list.

## 📊 Drawing

**Before:**

HEAD | v +---------+------+ +---------+------+ +---------+------+ | "hello" | next | --> | "world" | next | --> | "42" | NULL | +---------+------+ +---------+------+ +---------+------+


**After applying `f` (example: converting content to uppercase):**

HEAD | v +---------+------+ +---------+------+ +---------+------+ | "HELLO" | next | --> | "WORLD" | next | --> | "42" | NULL | +---------+------+ +---------+------+ +---------+------+


## 🧠 Remember
- `f(lst->content)` applies the function to the current node's content.
- `lst = lst->next` moves to the next node.
- The loop stops when `lst` becomes `NULL`.
- `ft_lstiter` does not create or delete nodes.

**Key idea:** Apply the function → Move to the next node → Repeat.
# 9. `ft_lstmap`

## 📚 What to study first
- Pointers (`*`)
- Function pointers
- Linked lists
- Dynamic memory allocation (`malloc`)
- Memory deallocation (`free`)

## 🎯 Purpose
Creates a new list by applying a function to each node's content, leaving the original list unchanged.

## ⚙️ How it works
1. Traverse the original list.
2. Apply `f` to the current node's content.
3. Create a new node with the transformed content.
4. Add the new node to the new list.
5. If allocation fails, use `del` to free the necessary content and nodes.
6. Return the new list.

## 📊 Drawing

**Original list:**

HEAD | v +-----+------+ +-----+------+ +-----+------+ | 1 | next | --> | 2 | next | --> | 3 | NULL | +-----+------+ +-----+------+ +-----+------+


**After applying `f` (example: multiplying each number by 2):**

NEW LIST | v +-----+------+ +-----+------+ +-----+------+ | 2 | next | --> | 4 | next | --> | 6 | NULL | +-----+------+ +-----+------+ +-----+------+


The original list remains unchanged.

## 🧠 Remember
- `f` transforms each node's content.
- `malloc()` allocates memory for new nodes.
- `del` frees content when necessary, especially if an allocation fails.
- The new list is separate from the original list.
- Returns the head of the new list, or `NULL` if allocation fails.

**Key idea:** Transform → Create → Connect → Return.


**Key idea:** Connect → Update the head.
