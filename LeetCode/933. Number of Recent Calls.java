class RecentCounter {
    LinkedList<Integer> requests;
    
    public RecentCounter() {
        this.requests = new LinkedList<Integer>();
    }
    
    public int ping(int t) {
        this.requests.addLast(t);
        while(this.requests.getFirst() < t - 3000) {
            this.requests.removeFirst();
        }
        
        return this.requests.size();
    }
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.ping(t);
 */