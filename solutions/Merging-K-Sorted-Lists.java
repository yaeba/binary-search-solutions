import java.util.*;

class Solution {
    private class Item implements Comparable<Item> {
        int[] list;
        int idx;

        public Item(int[] list, int idx) {
            this.list = list;
            this.idx = idx;
        }

        @Override
        public int compareTo(Item other) {
            return this.list[idx] - other.list[other.idx];
        }
    }

    public int[] solve(int[][] lists) {
        PriorityQueue<Item> pq = new PriorityQueue<>();
        int total = 0;

        for (int[] list : lists) {
            if (list.length > 0) {
                pq.offer(new Item(list, 0));
                total += list.length;
            }
        }

        int[] res = new int[total];
        int x = 0;
        while (!pq.isEmpty()) {
            Item item = pq.poll();
            res[x++] = item.list[item.idx];
            item.idx += 1;
            if (item.idx < item.list.length)
                pq.offer(item);
        }

        return res;
    }
}
