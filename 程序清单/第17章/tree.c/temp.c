//
// Created by 徐钲开 on 2024/3/14.
//
#include <stdbool.h>
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool AddItem(const Item* pi, Tree* ptree) {
    Trnode * new_node;
    if (TreeIsFull(ptree)) {
        fprintf(stderr, "Tree is full\n");
        return false; /* 提前返回 */
    }
    if (SeekItem(pi, ptree).child != null) {
        fprintf(stderr, "Attempted to add duplicate item\n");
        return false; /* 提前返回 */
    }
    new_node = MakeNode(pi); /* 指向新节点 */
    if (new_node == NULL) {
        fprintf(stderr, "Couldn't create node\n");
        return false;/* 提前返回 */
    }
    /* 成功创建了一个新节点 */
    ptree -> size++;
    if (ptree -> root == NULL)  { /* 情况1: 树为空 */
        ptree -> root = new_node; /* 新节点是根节点 */
    } else { /* 树不为空 */
        AddNode(new_node, ptree -> root); /* 在树中添加一个节点 */
    }
    return true; /* 成功返回 */
}

static Trnode* makeNode(const Item* pi) {
    Trnode* new_node;
    new_node = (Trnode*) malloc(sizeof(Trnode));
    if (new_node != NULL) {
        new_node -> item = *pi;
        new_node -> left = NULL;
        new_node -> right = NULL;
    }
    return new_node;
}

static void AddNode(Trnode* new_node, Trnode* root) {
    if (ToLeft(&new_node -> item, &root -> item)) {
        if (root -> left == NULL) { /* 空子树 */
            root -> left = new_node; /* 所以，在此处添加节点 */
        } else {
            AddNode(new_node, root -> left); /* 否则， 处理该子树 */
        }
    } else if (ToRight(&new_node -> item, &root -> item)) {
        if (root -> right == NULL) { /* 空子树 */
            root -> right = new_node;
        } else {
            AddNode(new_node, root -> right);
        }
    } else { /* 不应含有重复的项 */
        fprintf(stderr, "location error in AddNode()\n");
        exit(1);
    }
}

static bool ToLeft(const Item* i1, const Item* i2) {
    int comp1;
    if ((comp1 = strcmp(i1 -> petname, i2 -> petname)) < 0) {
        return true;
    } else if (comp1 == 0 && strcmp(i1 -> petkind, i2 -> petkind) < 0) {
        return true;
    } else {
        return false;
    }
}

static bool ToRight(const Item* i1, const Item* i2) {
    int comp1;
    if ((comp1 = strcmp(i1 -> petname, i2 -> petname)) > 0) {
        return true;
    } else if (comp1 == 0 && strcmp(i1 -> petkind, i2 -> petkind) > 0) {
        return true;
    } else {
        return false;
    }
}


















