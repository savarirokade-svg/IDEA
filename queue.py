class Queue:
    def __init__(self):
        self.queue = []

    # Enqueue element (insert at end)
    def enqueue(self, item):
        self.queue.append(item)
        print(f"Enqueued: {item}")

    # Dequeue element (remove from front)
    def dequeue(self):
        if self.is_empty():
            print("Queue Underflow! Cannot dequeue.")
            return None
        return self.queue.pop(0)

    # Peek front element
    def front(self):
        if self.is_empty():
            print("Queue is empty!")
            return None
        return self.queue[0]

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Display queue
    def display(self):
        print("Queue:", self.queue)


# ---------- MAIN PROGRAM ----------
q = Queue()

q.enqueue(10)
q.enqueue(20)
q.enqueue(30)

print("Front element:", q.front())

print("Dequeued:", q.dequeue())

q.display()
