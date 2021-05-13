class Queue{	
    constructor(){
		this.items = [];
	}
    enqueue(element){	
	    this.items.push(element);
    }
    dequeue(){
	    if(this.isEmpty()) return null;
	    return this.items.shift();
    }
    front(){
	if(this.isEmpty()) return mull;
	    return this.items[0];
    }
    isEmpty(){
	    return this.items.length == 0;
    }
}
var result = function(n){
	var q = new Queue();
    var res;	
	q.enqueue("1");
    q.enqueue("2");
	while(n-- > 0){
		var s1 = q.front();
		q.dequeue();
		q.enqueue(s1 + "1");
		q.enqueue(s1 + "2");
	}
    return q.front();
}
result(5);