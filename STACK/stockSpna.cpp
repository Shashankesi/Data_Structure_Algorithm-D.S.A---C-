// monotonic stack stock span 

void stockSpan(vecotr<int> stock, vector<int> ans){
    stack<int>s;
    s.push(0);
    span[0]=1;

    for(int i=1; i<stock.size();i++){
        int currPrice=stock[i];
        while(!s.empty()&& currprice>=stock[s.top()])
        s.pop();
    }
    if(s.empty()){
        span[i]=i+1;
    }else{
        int prevHigh
    }
}