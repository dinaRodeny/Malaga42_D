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

**Key idea:** Connect → Update the head.
