class ForwardList
{
    private class Node
    {
        public Object Value;
        public Node Next;
    }

    private Node root;

    public ForwardList()
    {
        root = new Node();
    }
    private Node GetTail()
    {
        Node current = root;
        while (current.Next != null)
            current = current.Next;
        return current;
    }
    public void Add(Object item)
    {
        Node tail = GetTail();
        tail.Value = item;
        tail.Next = new Node();
    }
    public int indexOf(Object obj)
    {
        int ret = 0;
        Node current = root;
        while (current.Next != null)
        {
            if (current.Value == obj)
                return ret;
            current = current.Next;
            ret++;
        }
        return -1;
    }
    public Object atIndex(int index)
    {
        int ret = 0;
        Node current = root;
        while (current.Next != null)
        {
            if (ret++ == index)
                return current.Value;
            current = current.Next;
        }
        return null;
    }

    public void removeAtIndex(int index)
    {
        int ret = 0;
        Node current = root, previous;
        while (current.Next != null)
        {
            previous = current;
            if (ret++ == index)
            {
                previous = current;
                Node temp = current.Next;
                current = null;
                GetTail().Next = previous;
                previous.Next = temp;
                return;
            }
            else
                current = current.Next;
        }
        return;
    }
}