#include<bits/stdc++.h>
using namespace std;
#define SZ 100

vector <int> graph[SZ];
bool visited[SZ];
stack <int> stk;

void DFS(int now)
{
    visited[now] = true;
    int i, to, k;

    k = graph[now].size();

    for(i=0;i<k;i++)
    {
        to = graph[now][i];
        if(visited[to] == false)
        {
            DFS(to);
        }
    }

    stk.push(now);

    return ;
}

int main()
{
    int vertices, edges, from, to, i;

    while(scanf("%d %d",&vertices,&edges))
    {
        for(i=0; i<vertices; i++)
        {
            graph[i].clear();
            visited[i] = false;
        }

        for(i=0; i<edges; i++)
        {
            scanf("%d %d",&from,&to);
            graph[from].push_back(to);
        }

        for(i=0;i<vertices;i++)
        {
            if(visited[i] == false)
            {
                DFS(i);
            }
        }

        while(stk.size() > 0) {
            int vertex = stk.top();
            printf("%d ", vertex);
            stk.pop();
        }
    }

    return 0;
}




// Binary Heap

#include<bits/stdc++.h>
using namespace std;
int *harr;
int capacity;
int heap_size;
int parent(int i) {
    return (i-1)/2;
}
int left(int i) {
    return (2*i + 1);
}
int right(int i) {
    return (2*i + 2);
}
void initMinHeap(int cap)
{
    heap_size = 0;
    capacity = cap;
    harr = new int[cap];
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int getMin() {
    return harr[0];
}
void insertKey(int k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}
void decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}
void MinHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i])
        smallest = l;
    if (r < heap_size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }
}
int extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }
    int root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MinHeapify(0);

    return root;
}
void deleteKey(int i)
{
    decreaseKey(i, INT_MIN);
    extractMin();
}
int main()
{
    scanf("%d", &capacity);
    initMinHeap(capacity);
    insertKey(3);
    insertKey(2);
    deleteKey(1);
    insertKey(15);
    insertKey(5);
    insertKey(4);
    insertKey(45);
    for (int i = 0; i < heap_size; ++i ) {
        printf("%d ", harr[i]);
    }
    return 0;
}



///Heap sort

#include<bits/stdc++.h>
using namespace std;
int *numberArray;
int *harr;
int capacity;
int parent(int i) {
    return (i-1)/2;
}
int left(int i) {
    return (2*i + 1);
}
int right(int i) {
    return (2*i + 2);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void MinHeapify(int i, int n)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < n && harr[l] < harr[i])
        smallest = l;
    if (r < n && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest, n);
    }
}
void heapSort(int arr[], int n)
{

//    for (int i = n - 1; i >= 0; i--)
    for (int i = n/2 - 1; i >= 0; i--) {
        MinHeapify(i, n);
    }

    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        MinHeapify(0, i);
    }
}
int main()
{
    scanf("%d", &capacity);
    harr = new int[capacity];
//    harr[0] = 1, harr[1] = 2, harr[2] = 3, harr[3] = 42, harr[4] = 55, harr[5] = 22, harr[6] = 11, harr[7] = 25,
//     harr[8] = 29, harr[9] = 30;
    for (int i = 0; i < capacity; ++i) {
        scanf("%d", &harr[i]);
    }
    heapSort(harr, capacity);
    for (int i = 0; i < capacity; ++i ) {
        printf("%d ", harr[i]);
    }
    return 0;
}
