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


**Key idea:** Connect → Update the head.
