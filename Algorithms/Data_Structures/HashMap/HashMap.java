/**
 * MyHashMap - simple hashmap with chaining collison resolution, (Separate chaining)
 * Time complextiy of remove, get and put methods: O(1) amortized, O(n) worst case
 * Space complexity: O(N + capacity)
 * https://leetcode.com/problems/design-hashmap/
 */
class MyHashMap {

    class LinkedList {
        int key;
        int value;
        LinkedList next;

        public LinkedList(int key, int value) {
            this.key = key;
            this.value = value;
        }
    }

    private int capacity = 10000;
    private LinkedList table[];

    public MyHashMap() {
        table = new LinkedList[capacity];
    }

    public void put(int key, int value) {
        int idx = hash(key);
        if (table[idx] == null) {
            table[idx] = new LinkedList(-1, 0);
        }
        LinkedList prev = find(key, table[idx]);

        if (prev.next == null) {
            prev.next = new LinkedList(key, value);
        } else {
            prev.next.value = value;
        }
    }

    public int get(int key) {
        int idx = hash(key);
        if (table[idx] == null) {
            return -1;
        }
        LinkedList prev = find(key, table[idx]);
        return prev.next != null ? prev.next.value : -1;
    }

    public void remove(int key) {
        int idx = hash(key);
        if (table[idx] == null) {
            return;
        }
        LinkedList prev = find(key, table[idx]);
        if (prev.next != null) {
            prev.next = prev.next.next;
        }
    }

    private LinkedList find(int key, LinkedList list) {
        LinkedList prev = null, cur = list;

        while (cur != null && cur.key != key) {
            prev = cur;
            cur = cur.next;
        }
        return prev;
    }

    private int hash(int key) {
        return key % capacity;
    }

    public static void main(String[] args) {
        MyHashMap map = new MyHashMap();

        map.put(32, 99);
        map.put(3, 44);
        map.put(187, -234);
        map.put(10, 3);

        System.out.println(map.get(32) == 99 ? "Looks good" : "Incorrect");
        System.out.println(map.get(3) == 44 ? "Looks good" : "Incorrect");
        System.out.println(map.get(187) == -234 ? "Looks good" : "Incorrect");
        System.out.println(map.get(10) == 3 ? "Looks good" : "Incorrect");
        System.out.println(map.get(100) == -1 ? "Looks good" : "Incorrect");

        map.remove(32);

        System.out.println(map.get(32) == -1 ? "Looks good" : "Incorrect");
    }

}
