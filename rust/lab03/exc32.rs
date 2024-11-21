trait Collection<T> {
    fn add(&mut self, item: T);
    fn get(&mut self) -> Option<T>;
}

struct Stack<T> {
    items: Vec<T>,
}

struct Queue<T> {
    items: Vec<T>,
}

/** Implementacje trait'u `Collection` dla `Stack` i `Queue`. **/

// TODO
fn main() {
    let mut stack = Stack { items: Vec::new() };
    stack.add(42);
    stack.add(23);

    println!("Popped from Stack: {:?}", stack.get());

    let mut queue = Queue { items: Vec::new() };
    queue.add("hello");
    queue.add("world");

    println!("Dequeued from Queue: {:?}", queue.get());
}
