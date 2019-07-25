#include "binary_trees.h"
int isEmpty(BT_stack* head)
{
        return (head == NULL);
}
void push(BT_stack **head, binary_tree_t *t_node)
{
        BT_stack *new_node = NULL;

        new_node = malloc(sizeof(BT_stack));
        if (!new_node)
                exit (0);
        new_node->tree_node = t_node;
        new_node->next = *head;
        *head = new_node;
}
binary_tree_t* pop(BT_stack** head)
{
        BT_stack *tmp = NULL;
        binary_tree_t *tmp2 = NULL;

        if (isEmpty(*head))
		exit (0);
        else
        {
                tmp = *head;
                tmp2 = tmp->tree_node;
                *head = tmp->next;
                free(tmp);
                return (tmp2);
        }
}
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
        binary_tree_t *current = (binary_tree_t *) tree;
        BT_stack *stack_head = NULL;
        int done = 0;

        while (!done)
        {
                if (current)
                {
                        push(&stack_head, current);
                        current = current->left;
                }
                else
                        if (!isEmpty(stack_head))
                        {
                                current = pop(&stack_head);
                                func(current->n);
                                current = current->right;
                        }
                        else
                                done = 1;
        }
	return;
}
