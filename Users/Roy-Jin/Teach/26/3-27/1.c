#include <stdio.h>
#include <stdlib.h>

// 一元多项式定义
typedef struct node
{
    float coef;        // 系数
    int expn;          // 指数
    struct node *next; // 后继
} pnode, *polynomial;

// 创建一元多项式
polynomial createpolyn(polynomial p, int m)
{
    int i;
    polynomial q, pre, s;                  // 结点 q,pre,s
    p = (polynomial)malloc(sizeof(pnode)); // 生成新结点
    p->next = 0;                           // 先建立一个带头结点的单链表
    p->expn = -1;                          // 头结点指数值设为-1
    for (i = 0; i < m; i++)
    {                                          // 依次输入 m 个非零值
        s = (polynomial)malloc(sizeof(pnode)); // 生成新结点
        printf("输入系数和指数:");
        scanf("%f%d", &s->coef, &s->expn); // 输入系数和指数
        pre = p;                           // pre 用于保存 q 的前驱
        q = p->next;                       // q 初值为首结点
        while (q && q->expn <= s->expn)
        { // 找到第一个大于输入项指数的项 q
            pre = q;
            q = q->next;
        }
        s->next = q;
        pre->next = s; // 将输入项 s，插入到 q 和 pre 之间
    }
    printf("—创建成功—\n");
    return p;
}

// 一元多项式打印
void pri(polynomial p)
{
    polynomial q;
    int id = 1;
    q = p->next; // 第一项（首结点）
    printf("加法运算后结果为:\n");
    while (q)
    {
        printf("第%d 个结点:系数%f,指数%d\n", id, q->coef, q->expn);
        q = q->next; // 结点后移
        id++;
    }
}

// 一元多项式相加
polynomial addpolyn(polynomial pa, polynomial pb)
{
    polynomial p1, p2, p3, q;
    int sum; // 系数和
    p1 = pa->next;
    p2 = pb->next;
    p3 = pa; // p3 指向和多项式的当前结点
    while (p1 && p2)
    { // p1 和 p2 均非空
        if (p1->expn == p2->expn)
        {                              // 指数相同
            sum = p1->coef + p2->coef; // sum 保存两项的系数和
            if (sum)
            {                   // 系数和不为 0
                p1->coef = sum; // 修改结点 p1 的系数值
                p3->next = p1;
                p3 = p1;       // 将修改后的结点 p1 链在 p3 之后
                p1 = p1->next; // p1 指向后一项
                q = p2;
                p2 = p2->next;
                free(q); // 删除 pb 当前结点 q
            }
            else
            { // 系数和为 0
                q = p1;
                p1 = p1->next;
                free(q); // 删除 pa 当前结点 p1
                q = p2;
                p2 = p2->next;
                free(q); // 删除 pb 当前结点 p2
            }
        }
        else
        {
            if (p1->expn <= p2->expn)
            { // pa 当前结点 p1 的指数值小
                p3->next = p1;
                p3 = p1;       // 将 p1 链在 p3 之后
                p1 = p1->next; // p1 指向后一项
            }
            else
            { // pb 当前结点 p2 的指数值小
                p3->next = p2;
                p3 = p2;       // 将 p2 链接在 p3 之后
                p2 = p2->next; // p2 指向后一项
            }
        }
    }
    p3->next = p1 ? p1 : p2; // 插入非空多项式的剩余段
    free(pb);                // 释放 pb 的头结点
    return pa;               // 返回和多项式
}

int main()
{
    int m;
    polynomial pa, pb, pc; // 声明一元多项式 pa,pb,pc
    printf("——————————创建一元多项式——————————\n");
    printf("创建 A 项数:");
    scanf("%d", &m);         // 创建 pa 项数
    pa = createpolyn(pa, m); // 创建一元多项式 pa
    printf("创建 B 项数:");
    scanf("%d", &m);         // 创建 pb 项数
    pb = createpolyn(pb, m); // 创建一元多项式 pb
    printf("——————————一元多项式相加——————————\n");
    pc = addpolyn(pa, pb); // 一元多项式相加
    pri(pc);               // 打印一元多项式 pc
    printf("——————————END——————————\n");
}