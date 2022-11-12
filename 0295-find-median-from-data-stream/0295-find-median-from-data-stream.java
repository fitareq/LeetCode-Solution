class MedianFinder {

private PriorityQueue<Integer> minQueue = new PriorityQueue<>(Collections.reverseOrder());
private PriorityQueue<Integer> maxQueue = new PriorityQueue<>();
    public MedianFinder() {
        
    }
    
    public void addNum(int num) {
        minQueue.add(num);
        maxQueue.add(minQueue.poll());
        
        if(maxQueue.size() > minQueue.size()){
            minQueue.add(maxQueue.poll());
        }
    }
    
    public double findMedian() {
        return minQueue.size() > maxQueue.size() ? minQueue.peek(): (minQueue.peek() + maxQueue.peek())/2.0;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */