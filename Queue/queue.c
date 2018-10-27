#include "queue.h"


Queue* Queue_create(int queue_size)
{
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    if (queue == NULL)  
        return NULL;
    queue->data = malloc(sizeof(long) * queue_size);
    if (queue->data == NULL)
    {
        printf("Failed to allocate data for queue\n");
        free(queue);
        return NULL;
    }
    queue->queue_size = queue_size;
    // the queue counts down to the 0th index of the array, so it starts at the end
    queue->queue_head = queue_size;
    return queue;
}
void Queue_destroy(Queue* queue)
{
    if (queue == NULL)
        return;
    else
    {
        free(queue->data);
        free(queue);
    }
}
void Queue_push(Queue* queue, long value)
{
    if (queue->queue_head > 0)
        queue->data[queue->queue_head--] = value;
    else
        printf("Queue is full.\n");
}
long Queue_front(Queue* queue)
{
    return queue->data[queue->queue_head + 1];
}
void Queue_pop(Queue* queue)
{
    ++queue->queue_head;
}
bool Queue_full(Queue* queue)
{
    return queue->queue_head == 0;
}